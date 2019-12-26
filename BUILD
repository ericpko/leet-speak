COPTS = [
  '-std=c++17',
  '-g',
  '-Wall',
]

cc_library(
  name = "sources",
  srcs = glob(["src/*.cpp"]),
  hdrs = glob(["include/*.h"]),
)

cc_binary(
  name = "leet_speak",
  srcs = ["main.cpp"],
  deps = [
    "//:sources",
  ],
  copts = COPTS,
)
