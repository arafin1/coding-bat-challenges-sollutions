#include<iostream>
#include <string.h>
using namespace std;

int main(){

 string s;
 cout<<"Enter String: ";
 cin>>s;
 string res="";
 char char_array[50];
 int coutner = 0;


 int n = s.size();
 for(int i = 0; i<n;i++){
    for(int j = 1; j<= n -i;j++){
        cout<<s.substr(i,j)<<" "<<endl;
        res+=s.substr(i,j);


    }
 }

if(res[0]== res[res.length() - 1]){
            res = res.substr(0,res.length() - 1);
}

strcpy(char_array, res.c_str());


for(int i = 0; char_array[i]!='\0'; ++i){
    if(char_array[i]=='a' || char_array[i]=='e' || char_array[i]=='i' ||
           char_array[i]=='o' || char_array[i]=='u'){
            ++coutner;
    }
}

cout<<endl;
cout<<"++++++++++++++"<<endl;
cout<<"Total Vowel: "<<coutner;

}
