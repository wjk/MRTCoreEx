add_library(mrmex STATIC)
target_link_libraries(mrmex PRIVATE windows_sdk)
target_include_directories(mrmex INTERFACE include)

if(NOT WIN32)
    target_link_libraries(mrmex PRIVATE windows_sdk)
endif()

target_sources(mrmex PRIVATE
    mrmex/AIDict.cpp
    mrmex/DataItemOrchestrator.cpp
    mrmex/EnvironmentEx.cpp
    mrmex/EnvironmentMappingBuilder.cpp
    mrmex/FileAtomPoolBuilder.cpp
    mrmex/FileBuilder.cpp
    mrmex/FileListBuilder.cpp
    mrmex/HNamesBuilder.cpp
    mrmex/InstanceReferences.cpp
    mrmex/LinkBuilder.cpp
    mrmex/MapBuilder.cpp
    mrmex/PriMerge.cpp
    mrmex/PriSectionBuilder.cpp
    mrmex/ResourcePackMerge.cpp
    mrmex/ReverseMapBuilder.cpp
    mrmex/SectionCopier.cpp
    mrmex/SectionCopierFactory.cpp
    mrmex/StdAfx.h
)

##########

add_library(mrmmin STATIC)
target_link_libraries(mrmmin PRIVATE windows_sdk)
target_include_directories(mrmmin INTERFACE include)

if(NOT WIN32)
    target_link_libraries(mrmmin PRIVATE windows_sdk)
endif()

target_sources(mrmmin PRIVATE
    mrmmin/Atom.cpp
    mrmmin/AtomGroup.cpp
    mrmmin/BaseFile.cpp
    mrmmin/BaseProviders.cpp
    mrmmin/BaseQualifierTypes.cpp
    mrmmin/BlobResult.cpp
    mrmmin/BlobResultImpl.cpp
    mrmmin/Checksums.cpp
    mrmmin/CoreEnvironment.cpp
    mrmmin/CoreProfile.cpp
    mrmmin/CoreQualifierTypes.cpp
    mrmmin/DecisionInfo.cpp
    mrmmin/DecisionInfoBuilder.cpp
    mrmmin/DefObject.cpp
    mrmmin/Environment.cpp
    mrmmin/FileAtomPool.cpp
    mrmmin/FileDataSection.cpp
    mrmmin/HNames.cpp
    mrmmin/HSchema.cpp
    mrmmin/ManagedFiles.cpp
    mrmmin/MrmFile.cpp
    mrmmin/MrmTraceLogging.cpp
    mrmmin/MrmWnf.cpp
    mrmmin/Platform.cpp
    mrmmin/PriFile.cpp
    mrmmin/PriFileManager.cpp
    mrmmin/RemapInfo.cpp
    mrmmin/Resolvers.cpp
    mrmmin/ResourceLink.cpp
    mrmmin/ResourceMap.mrmmin.cpp
    mrmmin/RtlProfile.cpp
    mrmmin/RtlProfile.cpp
    mrmmin/SchemaCollection.cpp
    mrmmin/StaticAtomPool.cpp
    mrmmin/StringResult.cpp
    mrmmin/StringResultImpl.cpp
    mrmmin/UnifiedView.cpp
    mrmmin/Util.cpp
)
