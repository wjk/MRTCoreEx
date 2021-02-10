add_library(mrmex STATIC)
target_include_directories(mrmex PUBLIC ../include)

if(CMAKE_HOST_WIN32)
    target_link_libraries(mrmex PRIVATE wil)
else()
    target_link_libraries(mrmex PRIVATE windows_shim)
    target_compile_definitions(mrmex PRIVATE CMAKE_NONWIN32_TARGET)

    target_compile_options(mrmex PUBLIC -Wno-inconsistent-missing-override)
endif()

target_sources(mrmex PRIVATE
    AIDict.cpp
    DataItemOrchestrator.cpp
    EnvironmentEx.cpp
    EnvironmentMappingBuilder.cpp
    FileAtomPoolBuilder.cpp
    FileBuilder.cpp
    FileListBuilder.cpp
    HNamesBuilder.cpp
    InstanceReferences.cpp
    LinkBuilder.cpp
    MapBuilder.cpp
    PriMerge.cpp
    PriSectionBuilder.cpp
    ResourcePackMerge.cpp
    ReverseMapBuilder.cpp
    SectionCopier.cpp
    SectionCopierFactory.cpp
    StdAfx.h
)
