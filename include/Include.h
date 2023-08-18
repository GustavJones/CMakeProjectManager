#pragma once
#include <string>

class Include
{
private:
    std::string m_path;

public:
    Include(std::string path);

    std::string GetPath();
    void SetPath(std::string path);
};