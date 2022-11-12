#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, x;
    x= 0;
    cin >> n;
    string inp ;
    while (n--){
        cin >> inp ;
        if (inp == "x++"||inp == "++x"||inp == "X++"||inp == "++X"){
            x++;
        }
        else if (inp == "x--"||inp == "--x"||inp == "X--"||inp == "--X"){
            x--;
        }
}
cout << x << endl;
}