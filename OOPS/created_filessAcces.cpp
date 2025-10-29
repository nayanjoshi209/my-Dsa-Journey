#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream newFile;
    newFile.open("myText.cpp");
    newFile << "#include<iostream> \n"
             << "using namespace std;\n"
             << "int main()\n"
             << "{\n"
             << "    string n;\n"
             << "   cout<<\"enter your string \"; \n"
             << "    getline(cin, n);\n"
             << "    cout << n;\n"
             << "}\n";
    newFile.close();
    return 0;
}
