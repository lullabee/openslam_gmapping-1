cc_library(
  name = "grid",
  srcs = glob([
			"*.cpp",
			"*.hxx",
			"*.h"], exclude = ["map_test.cpp", "graphmap.cpp"]),
   copts = ['-Wno-error'],
   visibility = ["//visibility:public"],
   include_prefix = "grid",
   deps = ["//utils"]
)
