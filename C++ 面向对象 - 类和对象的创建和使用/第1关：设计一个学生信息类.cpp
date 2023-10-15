//第1关：设计一个学生信息类
#include <iostream>
#include <string>
using namespace std;

class StInfo
{
public:
    int SID;
    char* Name;
    char* Class;
    char* Phone;

    void SetInfo(int sid, char* name, char* cla, char* phone)
    {
        SID = sid;
        Name = name;
        Class = cla;
        Phone = phone;
    }
    void PrintInfo();
};

void StInfo::PrintInfo()
{
    cout << "学号：" << SID << endl;
    cout << "姓名：" << Name << endl;
    cout << "班级：" << Class << endl;
    cout << "手机号：" << Phone << endl;
}

int main()
{

    int SID;
    string str1, str2, str3;
    cin >> SID >> str1 >> str2 >> str3;
    char* Name = (char*)str1.c_str(), * Class = (char*)str2.c_str(), * Phone = (char*)str3.c_str();
    StInfo info;
    info.SetInfo(SID, Name, Class, Phone);
    info.PrintInfo();
    return 0;
}
