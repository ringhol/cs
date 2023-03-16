set_languages("c++17")
add_includedirs("src/core")
add_includedirs("src/assets")
add_includedirs("src/file")
target("core")
  set_kind("static")
  add_files("src/core/*.cpp")
  add_files("src/file/*.cpp")

target("cs")
    set_kind("binary")
    add_deps("core")
    add_files("src/cmd/run.cpp")

target("test")
  set_kind("binary")
  add_deps("core")
  add_files("test/test.cpp")

