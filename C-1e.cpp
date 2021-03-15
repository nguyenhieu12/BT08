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

void truncate(char a[], int n, int len)
{
    if(len > n)
    {
        for(int i = n;i < len;i++)
        {
            a[i] = '\0';
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
    truncate(a, n, len);
    for(int i = 0;i < n;i++)
    {
        cout << a[i];
    }
    return 0;
}
