#include<iostream>
#include<cstring>
#include<list>
#define NO_OF_CHARS 256
using namespace std;
void bubble(char *str, int size)
{
char temp;
int i,j;
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(str[i]>str[j])
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
}
} }}

bool areAnagram(string str1, string str2)
{
    k1=strlen(str1);
    k2=strlen(str2);
    bubble(str1,k1);
    bubble(str2,k2);
    if (k1!=k2)
      return false;
    else
    {

    }
    for(i=0;i<k1;i++)
    {
    if(str1[i]!=str2[i])
    {

        return false;
        break;
    }
}
    // Create two count arrays and initialize all values as 0
    int count[NO_OF_CHARS] = {0};
    int i;

    // For each character in input strings, increment count in
    // the corresponding count array
    for (i = 0; str1[i] && str2[i];  i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    // If both strings are of different length. Removing this condition
    // will make the program fail for strings like "aaca" and "aca"
    if (str1[i] || str2[i])
      return false;

    // See if there is any non-zero value in count array
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return false;
     return true;
}



void findAllAnagrams(string arr[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (areAnagram(arr[i], arr[j]))
                cout << arr[i] << " is anagram of " << arr[j] << endl;
}


int main()
{
    char name[20];
    int len,i,j=0;
    list<string> mylist;
    cin.getline(name,80);
    len=strlen(name);
    //char words[10][80];
    for(i=0;i<len;i++)
    {
        name[i]=tolower(name[i]);
    }
    char mat[10][80];
    cout<<"size is:"<<len<<endl;
    string words[5];
    int k=0;
    int ch;
    for(i=0;i<len;i++)
    {
        ch=(int)name[i];
        if(ch<97 || ch>122)
        {

            k++;
        }
        else
        {
            words[k]=words[k]+name[i];
        }

    }

int n = sizeof(words)/sizeof(words[0]);
    findAllAnagrams(words, n);



    //if(name[i]>=97)
    cout<<name;

}
