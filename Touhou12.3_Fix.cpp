#include <iostream>
#include <direct.h>
#include <fstream>

using namespace std;
ifstream fin;
ofstream fout;

string get_current_dir() {
    char buff[FILENAME_MAX];
    _getcwd(buff, FILENAME_MAX);
    string current_working_dir(buff);
    return current_working_dir;
}

int main(int argc, char** argv)
{
    int v;
    setlocale(0, "");
    printf("Touhou 12.3 fix\nCreated by M4ddCat\n\nGuide:\n");
    printf("1. Drop this file into the Touhou 12.3 directory.\n");
    printf("2. After this type number 9 and press Enter.\n");
    printf("3. ???\n");
    printf("4. Profit!\n");
    cout << "\nTime is ended. Answer? - ";
    cin >> v;
    if (v == 9) {
        fin.open("configex123.ini");
        if (fin.is_open()) {
            fin.close();
            remove("configex123.ini");
        }
        ofstream ofs("configex123.ini");
        ofs << "[th105path]\npath = " + get_current_dir() + "\n[replay]\nfile_vs =\nfile_story =\n[network]\nclientport = 0";
        ofs.close();
        printf("\nDone.\n\n");
    }
    else {
        printf("BAKA!!!");
    }
}