#include "File.h"
#include "FileManage.h"

FileManage::File File::addLibrary(FileManage::File file, Library libToAdd)
{
    file.WriteFile("# " + libToAdd.GetName() + " \n");
    file.WriteFile("file(GLOB " + libToAdd.GetName() + " \"" + libToAdd.GetPath() + "\")\n");
    file.WriteFile("target_link_libraries(${PROJECT_NAME} PRIVATE ${" + libToAdd.GetName() + "})\n");
    file.WriteFile("\n");

    return file;
}

FileManage::File File::addInclude(FileManage::File file, Include includeToAdd)
{
    file.WriteFile("# Include\n");
    file.WriteFile("target_include_directories(${PROJECT_NAME} PRIVATE \"" + includeToAdd.GetPath() + "\")\n");
    file.WriteFile("\n");

    return file;
}

FileManage::File File::addProject(FileManage::File file, Project projectToAdd)
{
    const std::string minVersion = "3.5";

    file.WriteFile("# " + projectToAdd.GetName() + " \n");
    file.WriteFile("cmake_minimum_required(VERSION " + minVersion + ")\n");
    file.WriteFile("project(" + projectToAdd.GetName() + " VERSION " + projectToAdd.GetVersion() + ")\n");
    file.WriteFile("\n");
    file.WriteFile("file(GLOB SOURCES \"src/*.cpp\")\n");
    file.WriteFile("file(GLOB INCLUDES \"include/*.h\")\n");
    file.WriteFile("\n");
    file.WriteFile("add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDES})\n");
    file.WriteFile("\n");

    return file;
}
