/**
 * Super Reduced String
 * https://www.hackerrank.com/challenges/reduced-string/problem
 */
#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    string out = "";
    if(s.length() == 0 || s == "Empty String") {
        return "Empty String";
    }else if(s.length() == 1) {
        return s;
    }else{
        bool is_final = true;
        for(unsigned int i = 0; i < s.length() - 1; i++) {
            if(s[i] == s[i + 1]) {
                is_final = false;
                break;
            }
        }

        if(is_final == true) {
            return s;
        }else{
            bool reduce_flag = false;
            for(unsigned int i = 0; i < s.length(); i++) {
                if(reduce_flag == false) {
                    if(i+1 < s.length() && s[i] == s[i+1]) {
                        i = i+1;
                        reduce_flag = true;
                    }else{
                        out += s[i];
                    }
                }else{
                    out += s[i];
                }
            }
            out = super_reduced_string(out);
        }
    }

    if(out.length() == 0)
        return "Empty String";
    else
        return out;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}
