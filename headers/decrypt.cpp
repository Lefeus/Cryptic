#include <iostream>
#include "decrypt.h"

using namespace std;

string decrypt128(string code) {
    for(int i = 0; (i < 99999999999999 && code[i] != '\0'); i++) 
    code[i] = code[i] - 2; 
    return code;
}

string decrypt256(string str) {
    
    for(int i = 0; (i < 99999999999999 && str[i] != '\0'); i++)
    str[i] = str[i] - 41;
    return str;
}

