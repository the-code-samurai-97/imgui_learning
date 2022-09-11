load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "imgui",
    srcs = glob([
        "imgui/*.cpp",
    ]),
    hdrs = glob([
        "imgui/*.h",
    ]),
    linkopts = [
        "-lglfw",
        "-lGLEW",
        "-lvulkan",
        "-lGLU",
        "-lGL",
        "-lglut",
        "-lsfml-graphics",
        "-lsfml-window",
        "-lsfml-system",
    ],
    visibility = ["//visibility:public"],
)
# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "main",
    srcs = ["main.cpp",],
    copts = [],
    deps = [":imgui"],
)