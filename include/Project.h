#pragma once
#include <string>

class Project
{
private:
    std::string m_name;
    std::string m_version;

public:
    Project(std::string name, std::string version);

    std::string GetName();
    std::string GetVersion();

    void SetName(std::string name);
    void SetVersion(std::string version);
};
