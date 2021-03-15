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

void pad_right(char a[], int n, int len)
{
    if(len < n)
    {
        for(int i = len;i <= n;i++)
        {
            a[i] = ' ';
        }
        for(int i = 0;i <= n;i++)
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
    pad_right(a, n, len);
    return 0;
}
