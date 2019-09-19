// Function with argument - n-api

#include <napi.h>
#include <std>


namespace echo {

	template<typename OS, typename T> void ostr(OS& o, T t) {
		o << t;
	}

	template<typename... ARG> auto argcat(ARG... arg) -> string {
		ostringstream os;
		int arr[] = {(ostr(os, arg), 0)...};
		return os.str();
	}

	Napi::Value Echo(const Napi::CallbackInfo& args) {
		Napi::Env env = args.env();

		if (0 == args.length()) {
			Napi::TypeError::New(env, "必须输入arguments!")
				.ThrowAsJavaScriptException();
			return env.Null();
		}

		string receive = args[0].As<Napi::String>().Utf8Value();
		return Napi::String::New(env, argcat("hahah, you say -> ", receive));
	}

	Napi::Object Init(Napi::Env env, Napi::Object exception) {
		exports.Set(Napi::String::New(env, "echo"), Napi::Function::New(env, Echo));
	}

	NODE_API_MODULE(addon, Init)
}
