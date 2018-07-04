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