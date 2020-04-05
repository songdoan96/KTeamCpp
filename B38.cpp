#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arrChar[10] = "Eculpa";
    char brrChar[100] = "Nostrud anim ipsum tempor non qui fugiat irure pariatur tempor aliqua.";
    char crrChar[sizeof(brrChar)];
    cout << strlen(arrChar) << endl; //lenght string
    cout << sizeof(arrChar) << endl; //bao gom cac ky tu null

    cout << strupr(arrChar) << endl; //viet hoa ky tu
    cout << strlwr(arrChar) << endl;

    strcpy(crrChar, brrChar); //copy string
    cout << crrChar << endl;

    strcat(crrChar, arrChar); // noi chuoi c voi chuoi a
    cout << crrChar << endl;

    // so sanh 2 chuoi
    char str1[] = "Doan Song";
    char str11[] = "Doan Song";
    char str12[] = "Doan Doan Song";
    char str2[] = "DOan song";

    cout << strcmp(str1, str2) << endl;
    cout << strcmp(str1, str11) << endl;    // bang neu bang 0
    cout << strcmp(str1, str12) << endl;

    return 0;
}