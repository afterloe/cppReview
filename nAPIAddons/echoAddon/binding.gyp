{
	"targets": [
		{
			"target_name": "echo",
			"sources": ["src/addon.cc"],
			"cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ],
      "defines": [ "NAPI_DISABLE_CPP_EXCEPTIONS" ],
			"include_dirs": [
				"<!@(node -p \"require('node-addon-api').include\")"
			]
		}
	]
}
