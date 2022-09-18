#include <iostream>
#include <windows.h>
#include <algorithm>
#include <string>

#include "headers/logo.h"
#include "headers/encrypt.h"
#include "headers/decrypt.h"

using namespace std;

int main() {
    SetConsoleTitleW(L"WieszakWare Cryptic | 1.0.0 | Windows | https://github.com/WieszakWare/Cryptic | https://wieszakware.42web.io |");

    //Handle Console
    HANDLE h = GetStdHandle( STD_OUTPUT_HANDLE );

    //Change Text Color
    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    //Print Logo | With | text color 
    logo();

    SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "[ CRYPTIC ] Welcome to Cryptic!" << endl;

    

    SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    cout << R"(
|--------------------------------------------------------------------------|
| [ 1.1 ] Encrypt (128) | [ 1.3 ] Encrypt (256) | [ 1.5 ] Hash [ SHA256 ]  |
| [ 1.2 ] Decrypt (128) | [ 1.4 ] Decrypt (256) | [ 1.6 ] COOMING SOON     |
|--------------------------------------------------------------------------|
                 [ -> ] Enter action number <: )";

    //Variables
    string action;

    getline(cin, action);

    //Options [ACTION]
    
    
    if (action == "1.1") {
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "[ INPUT ] Enter text to encrypt [ 128 ENCRYPTION ] :>" << endl;
            string string_to_encode;
            getline(cin, string_to_encode);
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "[ DONE ] Encrypted TEXT" << endl;
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << encrypt128(string_to_encode) << endl;
    }

    else if (action == "1.2") {
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "[ INPUT ] Enter text to decrypt [ 128 DECRYPTION ] :>" << endl;
            string string_to_decode;
            getline(cin, string_to_decode);
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "[ DONE ] Decrypted TEXT" << endl;
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << decrypt128(string_to_decode) << endl;
    }

    else if (action == "1.3") {
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "[ INPUT ] Enter text to encrypt [ 256 ENCRYPTION ] :>" << endl;
            string string_to_encode;
            getline(cin, string_to_encode);
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "[ DONE ] Encrypted TEXT" << endl;
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << encrypt256(string_to_encode) << endl;
    }

    else if (action == "1.4") {
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "[ INPUT ] Enter text to decrypt [ 256 DECRYPTION ] :>" << endl;
            string string_to_decode;
            getline(cin, string_to_decode);
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "[ DONE ] Decrypted TEXT" << endl;
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << decrypt256(string_to_decode) << endl;
    }

    else if (action == "1.5") {
            SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout << "[ INPUT ] Enter text to hash [ SHA256] :>" << endl;
            string string_to_hash;
            getline(cin, string_to_hash);
            SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            cout << "[ DONE ] Hashed TEXT" << endl;
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << hashv1(string_to_hash) << endl;
    }

    else if (action == "1.6") {
            cout << "[ COOMING SOON ] Cooming Soon!";
    }

    else {
            SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "[ ERROR ] Invalid Input" << endl;
    }
    cin.get(); //Pause
    return 0;
}