#include <string>
#include <iostream>
using namespace std;

string d (string s){
    if (s[0] in 'aeiou'){
        return s + "way";
    }
    else{
        if s[0] == 'q'{
            string ns = "";
            for (int i = 0; i < sizeof(s); i++){
                if (i!=0 && i!= 1){
                    ns += s[i];
                }
            }
            s = ns;
            return s + 'quay';
        }
        else{
            string ns = "";
            for (int i = 0; i < sizeof(s); i++){
                if (i!=0){
                    ns += s[i];
                }
            }
            s = ns;
            return s + s[0] + 'ay';
        }
        }
    }
}

int main (){
    return 0
}