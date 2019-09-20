// Function with argument - n-api
#include <napi.h>

/**
 *	回声函数扩展
 *	
 *	node_module 安装 node-addon-api 模块， 同时binding.gyp添加对该模块的配置，否则无法使用napi.h内的封装类 
 */ 
namespace echo {

	Napi::Value Echo(const Napi::CallbackInfo& args) {
		Napi::Env env = args.Env();

		if (0 == args.Length()) {
			Napi::TypeError::New(env, "必须输入arguments!")
				.ThrowAsJavaScriptException();
			return env.Null();
		}

		std::string receive = args[0].As<Napi::String>().Utf8Value();
		return Napi::String::New(env, receive);
	}

	Napi::Object Init(Napi::Env env, Napi::Object exports) {
		exports.Set(Napi::String::New(env, "echo"), Napi::Function::New(env, Echo));
		return exports;
	}

	NODE_API_MODULE(addon, Init);
}
