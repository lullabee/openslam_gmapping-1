cc_library(
    name = "gridflastslam",
    srcs = glob([
			"gfsreader.cpp",
			"gfsreader.h",
			"gridslamprocessor.cpp",
			"gridslamprocessor.h",
			"gridslamprocessor.hxx",
			"gridslamprocessor_tree.cpp",
			"motionmodel.cpp",
			"motionmodel.h"]),
    copts = ['-Wno-error'],
    deps = [
   		"//grid",
   		"//particlefilter",
   		"//scanmatcher",
   		"//sensor",
   		"//utils",
    ]
    visibility = ["//visibility:public"],
)
