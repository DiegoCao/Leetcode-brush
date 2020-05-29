#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="CMXCIV";
    int cnt=0;
    int pos=0;
    if(str.find("IX")!=str.npos){
        str.erase(str.find("IX"),2);
        cnt+=9;
    }
    if(str.find("IV")!=str.npos){
        str.erase(str.find("IV"),2);
        cnt+=4;
    }
    if(str.find("XL")!=str.npos){
        str.erase(str.find("XL"),2);
        cnt+=40;
    }
    if(str.find("XC")!=str.npos){
        str.erase(str.find("XC"),2);
        cnt+=90;
    }
    if(str.find("CD")!=str.npos){
        str.erase(str.find("CD"),2);
        cnt+=400;
    }
    if(str.find("CM")!=str.npos){
        str.erase(str.find("CM"),2);
        cnt+=900;
    }
    cnt+=count(str.begin(),str.end(),'I');
    cnt+=5*count(str.begin(),str.end(),'V');
    cnt+=10*count(str.begin(),str.end(),'X');
    cnt+=50*count(str.begin(),str.end(),'L');
    cnt+=100*count(str.begin(),str.end(),'C');
    cnt+=500*count(str.begin(),str.end(),'D');
    cnt+=1000*count(str.begin(),str.end(),'M');
    cout<<cnt<<endl;
    return 0;
}
