#include <iostream>
using namespace std;

string path = "C:\Program Files (x86)\alipay\aliedit\5.1.0.3754";
string path2 = "C:\\Program Files (x86)\\alipay\\aliedit\\5.1.0.3754";
//C++11原生字符串，不需要转义
string path3 = R"(C:\Program Files (x86)\alipay\aliedit\5.1.0.3754)";
string path4 = R"(C:\Program "Files" (x86)\\alipay\aliedit\5.1.0.3754)";
//C++11原生字符串，不需要转义
int main(int argc, char *argv[])
{
    cout<<path<<endl;
    cout<<path2<<endl;
    cout<<path3<<endl;
    cout<<path4<<endl;

    return 0;
}