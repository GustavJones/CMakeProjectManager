#include "FileManage.h"

int main()
{
    FileManage::File TestFile((FileManage::Path) "Test2.txt");
    TestFile.CreateFile();

    TestFile.WriteFile("This is a test");
    TestFile.RenameFile("Test2Rename.txt");
    return 0;
}