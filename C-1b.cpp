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

void delete_char(char a[], char c, int &len)
{
    for(int i = 0; i < len;i++)
    {
        if(a[i] == c)
        {
            for(int j = i;j < len - 1;j++)
            {
                a[j] = a[j+1];
            }
            len--;
        }
        i = 0;
    }
    for(int i = 0;i < len;i++)
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
    char c;
    cin >> c;
    delete_char(a, c, len);
    return 0;
}
