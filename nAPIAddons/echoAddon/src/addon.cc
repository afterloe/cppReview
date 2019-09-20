// Function with argument - n-api

#include <napi.h>

namespace echo {

	Napi::Value Echo(const Napi::CallbackInfo& args) {
		Napi::Env env = args.Env();

		if (0 == args.length()) {
			Napi::TypeError::New(env, "必须输入arguments!")
				.ThrowAsJavaScriptException();
			return env.Null();
		}

		string receive = args[0].As<Napi::String>().Utf8Value();
		return Napi::String::New(env, receive);
	}

	Napi::Object Init(Napi::Env env, Napi::Object exception) {
		exports.Set(Napi::String::New(env, "echo"), Napi::Function::New(env, Echo));
	}

	NODE_API_MODULE(addon, Init);
}
