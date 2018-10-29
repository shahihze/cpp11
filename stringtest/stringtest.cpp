#include <iostream>
using namespace std;

string path = "C:\Program Files (x86)\alipay\aliedit\5.1.0.3754";
string path2 = "C:\\Program Files (x86)\\alipay\\aliedit\\5.1.0.3754";
//C++11原生字符串，不需要转义-------
string path3 = R"(C:\Program Files (x86)\alipay\aliedit\5.1.0.3754)";
string path4 = R"(C:\Program "Files" (x86)\\alipay\aliedit\5.1.0.3754)";
//C++11原生字符串，不需要转义
int main(int argc, char *argv[])
{
    int t = -1;
    cout<<path<<endl;
    cout<<path2<<endl;
    cout<<path3<<endl;
    cout<<path4<<endl;
    cout << path.size() << endl;
    if (path.size() < t)
        cout << "path.size() < t" << endl;
        // 输出path.size() < t，t为负，size()返回无符号整型，t自动转换成比较大的无符号的值
    else
        cout << "path.size() > t" << endl;
    return 0;
}