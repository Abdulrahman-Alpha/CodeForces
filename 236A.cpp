#include <iostream>
#include <string>
#include<algorithm>
#include<cstring>

using namespace std;


int main(){

    char s[100];
    cin >> s;
    int l  = strlen(s);
	sort(s,s+l);
	 int count =0;
    for(int i=0; i<l; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }
    if (count%2 != 0){
     cout << "IGNORE HIM!"<<endl;
    }
    else{
        cout << "CHAT WITH HER!" << endl;
    }
}

