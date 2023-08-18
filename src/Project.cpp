#include "Project.h"

Project::Project(std::string name, std::string version) : m_name(name), m_version(version) {}

std::string Project::GetName()
{
    return m_name;
}

std::string Project::GetVersion()
{
    return m_version;
}

void Project::SetName(std::string name)
{
    m_name = name;
}

void Project::SetVersion(std::string version)
{
    m_version = version;
}
