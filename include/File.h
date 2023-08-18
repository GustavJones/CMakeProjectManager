#pragma once
#include <wx/wx.h>
#include "FileManage.h"
#include "Library.h"
#include "Project.h"
#include "Include.h"

namespace File
{
    FileManage::File addLibrary(FileManage::File file, Library libToAdd);
    FileManage::File addInclude(FileManage::File file, Include includeToAdd);
    FileManage::File addProject(FileManage::File file, Project projectToAdd);
} // namespace File