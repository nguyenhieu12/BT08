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

void reverse(char a[], int len)
{
    for(int i = len - 1;i >= 0;i--)
    {
        cout << a[i];
    }
}

int main()
{
    char a[1000];
    cin >> a;
    int len = 0;
    strlen(a, len);
    reverse(a, len);

    return 0;
}
