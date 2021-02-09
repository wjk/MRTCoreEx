add_library(windows_sdk INTERFACE)
target_include_directories(windows_sdk INTERFACE include)

# <Windows.h> and <windows.h> are both used.
target_compile_options(windows_sdk INTERFACE -Wno-nonportable-include-path)
