#include <iostream>

using namespace std;

void strlen(char *a, int& len)
{
    int i = 0;
    while(a[i] != '\0')
    {
        len++;
        i++;
    }
}

bool is_palindrome(char a[], int len)
{
     for(int i = 0;i < len/2;i++)
     {
         if(a[i] != a[len - 1 - i]) return false;
     }
     return true;
}

int main()
{
    char a[1000];
    cin >> a;
    int len = 0;
    strlen(a, len);
    if(is_palindrome(a, len)) cout << "true";
    else cout << "no";
    return 0;
}
