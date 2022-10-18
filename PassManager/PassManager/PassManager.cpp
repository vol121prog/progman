#include <iostream>
#include <fstream> 
#include <string>
#include <cstdlib>
using namespace std;
void ielsef(string ifon)
{
    if (ifon == "out")
    {
        ifstream fin("config.ini");
        string s;
        if (fin)
        {
            while (getline(fin, s))
                cout << s << endl;
            fin.close();
        }
    }
    else
    {
        ofstream fout("config.ini", ios_base::app);
        string s;
        if (fout)
        {
            cout << "Enter any text! ctrl^z and ctrl^c for finish ";
            while (getline(cin, s))
                fout << s << endl;
            fout.close();
        }
    }
}

int main() {
    string ifon;
    cout << "enter mode in - for input, out - for print: ";
    cin >> ifon;
    cin.get();
    ielsef(ifon);
    cin.get();
    system("pause");
}