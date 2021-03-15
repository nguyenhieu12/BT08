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

void trim_right(char a[], int len, int pos)
{
    for(int i = 0;i < len;i++)
    {
        if(a[i] != ' ') pos++;
    }
    for(int i = 0;i < pos;i++)
    {
        cout << a[i];
    }
}

int main()
{
    char a[1000];
    cin >> a;
    int len = 0, pos = 0;
    strlen(a, len);
    trim_right(a, len, pos);
    return 0;
}
