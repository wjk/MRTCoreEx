add_library(mrmmin STATIC)
target_include_directories(mrmmin PUBLIC ../include)

if(WIN32)
    target_link_libraries(mrmmin PRIVATE wil)
else()
    target_link_libraries(mrmmin PRIVATE windows_sdk)
endif()

target_sources(mrmmin PRIVATE
    Atom.cpp
    AtomGroup.cpp
    BaseFile.cpp
    BaseProviders.cpp
    BaseQualifierTypes.cpp
    BlobResult.cpp
    BlobResultImpl.cpp
    Checksums.cpp
    CoreEnvironment.cpp
    CoreProfile.cpp
    CoreQualifierTypes.cpp
    DecisionInfo.cpp
    DecisionInfoBuilder.cpp
    DefObject.cpp
    Environment.cpp
    FileAtomPool.cpp
    FileDataSection.cpp
    HNames.cpp
    HSchema.cpp
    ManagedFiles.cpp
    MrmFile.cpp
    MrmTraceLogging.cpp
    MrmWnf.cpp
    Platform.cpp
    PriFile.cpp
    PriFileManager.cpp
    RemapInfo.cpp
    Resolvers.cpp
    ResourceLink.cpp
    ResourceMap.mrmmin.cpp
    RtlProfile.cpp
    RtlProfile.cpp
    SchemaCollection.cpp
    StaticAtomPool.cpp
    StringResult.cpp
    StringResultImpl.cpp
    UnifiedView.cpp
    Util.cpp
)