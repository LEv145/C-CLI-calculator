#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input, com, out;



    do{
        cout << "Введите пример: ";
        getline(cin,input);

        if (input == "exit"){
                break;
            }
        com = "set /a " + input;
        const char *command = com .c_str();

        out = system(command);
        cout << out << endl;
    }while (true);
    return 0;
}
