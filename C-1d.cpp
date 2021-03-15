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

void pad_left(char a[], int n, int len)
{
    if(len < n)
    {
        while(len <= n)
        {
            a = ' ' + a;
        }
        for(int i = 0;i < n;i++)
        {
            cout << a[i];
        }
    }
}

int main()
{
    char a[1000];
    cin >> a;
    int len = 0;
    strlen(a, len);
    int n;
    cin >> n;
    pad_left(a, n, len);
    return 0;
}
