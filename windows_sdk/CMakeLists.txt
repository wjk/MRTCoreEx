add_library(windows_shim INTERFACE)
target_include_directories(windows_shim INTERFACE include)

# <Windows.h> and <windows.h> are both used.
target_compile_options(windows_shim INTERFACE -Wno-nonportable-include-path)
target_compile_options(windows_shim INTERFACE -fms-extensions)
