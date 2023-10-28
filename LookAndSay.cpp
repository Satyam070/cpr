#include<bits/stdc++.h> 
using namespace std;

class Solution
{
public:
    string lookandsay(int n) {
        if(n == 1){
            return "1";
        }
        
        string s = lookandsay(n-1);
        string res = "";
        int counter = 0;
        for(int i = 0; i < s.length(); i++)
        {
            counter++;
            if(i == s.length()-1 || s[i] != s[i+1])
            {
                res = res + to_string(counter) + string(1, s[i]);// string(size,value)-method to create string
                //s[i] was character initially
                counter = 0;
            }
        }
        return res;
    }   
};

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.lookandsay(n) << endl;
    }
    return 0;
}
