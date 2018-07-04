cc_library(
  name = "particlefilter",
  srcs = glob([
			"*.cpp",
			"*.h"
		 ], exclude = ["particlefilter_test.cpp", "particlefilter.cpp"]),
   copts = ['-Wno-error'],
   visibility = ["//visibility:public"],
   include_prefix = "particlefilter",
   deps = [
   		"//utils"
   ]
)

cc_binary(
	name = "particlefilter_test",
	srcs = ["particlefilter_test.cpp"],
	deps = [":particlefilter"]
)