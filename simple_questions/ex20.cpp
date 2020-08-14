#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.empty())return true;
        if(s.length()%2==1)return false;
        stack <char> temp;
        for(char ch: s){
            if(ch=='('||ch=='['||ch=='{'){
                temp.push(ch);
            }
            else if(ch==')'||ch==']'||ch=='}'){
                if(temp.empty())return false;
                switch (ch){
                    case ')':
                        if(temp.top()=='('){
                            temp.pop();
                        }
                        else return false;
                        break;
                    case ']':
                        if(temp.top()=='['){
                            temp.pop();
                        }
                        else return false;
                        break;
                    case '}':
                        if(temp.top()=='{'){
                            
                            temp.pop();
                        }
                        else return false;
                        break;
                }   
            }

        }
        return temp.empty();
    }
};