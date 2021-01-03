#include <string>
#include <iostream>
using namespace std;

string pigLatinfy (string s){
    if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u'){
        return s + "way";
    }
    else{
        if (s[0] == 'q'){
            string ns = "";
            for (int i = 0; i < s.length(); i++){
                if (i!=0 && i!= 1){
                    ns += s[i];
                }
            }
            return ns + "quay";
        }
        else{
            string ns = "";
            for (int i = 0; i < s.length(); i++){
                if (i!=0){
                    ns += s[i];
                }
            }
            return ns + s[0] + "ay";
        }
        }
}

int main (){
    cout << pigLatinfy ("question") << "\n";

    while (cin) {//Baba wrote this loop
        string word;
        cin >> word;
        cout << word << " -> " << pigLatinfy(word) << "\n";
    }
}           
        