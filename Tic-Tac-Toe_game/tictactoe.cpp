#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m,pos,p,row,col,flagr=0,flagc=0,flagcross=0;
    cout<<"enter the size nxn ie n is:";
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {   for(j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
     for(i=0;i<n;i++)
    {   for(j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    m=n*n;
    for(i=0;i<m;i++)
    {
        p=(i%2)+1;
        cin>>pos;
        row=pos/n;
        col=pos%n;
        arr[row][col]=p;
        flagr=0;
        flagc=0;
        flagcross=0;
        if(i>=(2*n-2))
        {
            for(j=0;j<n;j++)
            {
                if(arr[row][j]!=p)
                {   flagr=1;
                    break;
                }
                if(arr[j][col]!=p)
                {
                    flagc=1;
                    break;

                }
                if(row==col && arr[j][j]!=p)
                {
                    flagcross=1;
                    break;
                }
            }
            if(flagr==0 || flagc==0 || flagcross==0)
            {
                cout<<p<<"win"<<endl;
                break;
            }

        }



    }

    for(i=0;i<n;i++)
    {   for(j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
