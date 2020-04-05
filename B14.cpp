#include <iostream>

using namespace std;

/* 
int main()
{
    string x{"abcd def"};
    cout << x;

    // cout << "\nNhap chuoi: ";
    // string chuoi;
    // cin >> chuoi;
    // cout << chuoi << endl;

    //Loi nhap khi co khoang trang

    cout << "========" << endl;

    cout << "Nhap chuoi vs getline: ";
    string chuoi1;
    getline(cin, chuoi1);
    cout << chuoi1;
}
*/

// Khac phuc loi phim enter khi dung getline

/* int main()
{
    int age;
    string name;

    cout << "Nhap tuoi: ";
    cin >> age;

    cin.ignore(32767, '\n');
    cout << "Nhap ten: ";
    //cin >> name;
    getline(cin, name);

    cout << "Ten: " << name << endl;
    cout << "Tuoi: " << age << endl;
}
*/
//Nhap cac doan van (khi nhan phim Enter tiep tuc nhap, cho den khi gap ky tu _)
int main()
{
    string str3;
    cout << "Nhap doan van: ";
    getline(cin, str3, '_');

    cout << "=======";
    cout << str3 << endl;

    // Mot so thao tac string
    string a{"Doan"};
    string b{"Quang"};
    string c{" Song"};
    cout << "Noi chuoi: " << a + b + c << endl;
    cout << "Noi chuoi append: " << (a.append(b)).append(c) << endl;

    cout << "Length: " << str3.length();
}