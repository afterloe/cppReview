// hello.cc using N-API 官方推荐
// 
/**
 There are three options for implementing Addons: N-API, nan, or direct use of internal V8, libuv and Node.js libraries. Unless you need direct access to functionality which is not exposed by N-API, use N-API. Refer to the section C/C++ Addons - N-API for more information on N-API.
 */ 

#include <node_api.h>

namespace demo {
	
	napi_value Method(napi_env env, napi_callback_info args) {
		napi_value greeting;
		napi_status status;

		status = napi_create_string_utf8(env, "world - for afterloe，你好", NAPI_AUTO_LENGTH, &greeting);
		if (napi_ok != status) return nullptr;
		return greeting;
	}

	napi_value init(napi_env env, napi_value exports) {
		napi_status status;
		napi_value fn;

		status = napi_create_function(env, nullptr, 0, Method, nullptr, &fn);
		if (napi_ok != status) return nullptr;

		status = napi_set_named_property(env, exports, "say", fn);
		if (napi_ok != status) return nullptr;
		return exports;
	}

	NAPI_MODULE(NODE_GYP_MODULE_NAME, init);
} // namespace addons
