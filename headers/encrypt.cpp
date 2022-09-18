#include <iostream>
#include <random>
#include "sha256.h"
#include "encrypt.h"

using namespace std;

string encrypt128(string str) {
    
    for(int i = 0; (i < 99999999999999 && str[i] != '\0'); i++)
    str[i] = str[i] + 2;
    return str;
}

string encrypt256(string str) {
    
    for(int i = 0; (i < 99999999999999 && str[i] != '\0'); i++)
    str[i] = str[i] + 41;
    return str;
}

string hashv1(string str) {
    string hashed = sha256(str);
    return hashed;

}
