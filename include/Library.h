#pragma once
#include <string>
#include "FileManage.h"

class Library
{
private:
    std::string m_name;
    std::string m_path;

public:
    Library(std::string name, std::string path);

    std::string GetName();
    std::string GetPath();

    void SetName(std::string name);
    void SetPath(std::string path);
};