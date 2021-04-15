#include <iostream>
#include <algorithm>
#include <string>

// created by luka

using namespace std;

int main(int argc, char *argv[]) {

    string text;
    cout << "Input text: "<<endl;
    getline(cin,text);



    string loWer = text, upper = text;

    // transforms text to lower case
    transform(loWer.begin(), loWer.end(), loWer.begin(), ::tolower);

    cout << "This is lower case: " << loWer << endl;

    // transforms text to upper case
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);

    cout << "This is upper case: " << upper << endl;


    return 0;
}
