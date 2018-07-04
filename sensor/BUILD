cc_library(
  name = "sensor",
  srcs = glob([
      "sensor_range/*.cpp",
      "sensor_range/*.h",
      "sensor_odometry/*.cpp",
      "sensor_odometry/*.h",
      "sensor_base/*.cpp",
      "sensor_base/*.h"
     ]),
  deps = [
    "//utils",
  ],
  include_prefix = "sensor",
  visibility = ["//visibility:public"],
)