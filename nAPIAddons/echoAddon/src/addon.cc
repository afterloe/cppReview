// Function with argument - n-api

#include <node_api.h>

namespace echo {

	napi_value Method(napi_env, napi_callback_info args) {
		napi_value greeting;
		napi_status status;

		status = napi_create_string_utf8(env, "");
	}
}

