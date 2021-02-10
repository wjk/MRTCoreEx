add_library(mrmex STATIC)
target_link_libraries(mrmex PRIVATE windows_sdk)
target_include_directories(mrmex PUBLIC ../include)

if(WIN32)
    target_link_libraries(mrmex PRIVATE wil)
    target_compile_definitions(mrmex PRIVATE CMAKE_WIN32_TARGET)
else()
    target_link_libraries(mrmex PRIVATE windows_sdk)
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
