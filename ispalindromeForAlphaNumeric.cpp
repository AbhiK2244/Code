#include<iostream>
#include<string>
using namespace std;

bool valid(char a)
{
    if( (a>='A' && a<='Z') || (a>='a' && a<='z') || (a >='0' && a <= '9') )
        return true;  //only alpha numeric values are to be considered
    return false;
}

char tolowercase( char a )
{
    if((a>='a' && a<='z') || (a >='0' && a <= '9'))
    return a;
    else
    a = a - 'A' + 'a';       //both upper and lower cases are treated as same

    return a;
}

bool ispalindrome(string a)
{
    int s=0;
    int e= a.length() - 1;
    while ( s<=e )
    {
        if( tolowercase(a[s]) != tolowercase(a[e]))
        return false;
        else{
            s++; e--;
        }
    }
    return true;
    
}

int main()
{
    string a= "1race car1";

    string temp="";
    
    for(int i=0 ; i < a.length(); i++)
    {
        if (valid(a[i]))
            temp.push_back(a[i]);
    }

    cout << "palindrome or not: " << ispalindrome(temp) << endl;



}
