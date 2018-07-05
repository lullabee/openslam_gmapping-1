cc_library(
  name = "scanmatcher",
  srcs = glob([
			"*.cpp",
			"*.h"
		 ]),
   copts = ['-Wno-error', "-DSCANMATHCERPROCESSOR_DEBUG"],
   visibility = ["//visibility:public"],
   include_prefix = "scanmatcher",
   deps = [
   		"//utils",
      "//grid",
      "//sensor"
   ],
)

