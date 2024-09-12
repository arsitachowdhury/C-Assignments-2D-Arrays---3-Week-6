#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int rows,cols;
   cout<<"Enter the no of rows : ";
   cin>>rows;
   cout<<"Enter the no of cols : ";
   cin>>cols;
   vector<vector<int>>v(rows,vector<int>(cols));
   for(int i=0;i<rows;i++)
   {
    for(int j=0;j<cols;j++)
    {
          cin>>v[i][j];
    }
   }
   // print matrix
//    for(int i=0;i<rows;i++)
//    {
//     for(int j=0;j<cols;j++)
//     {
//           cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
//    }
   cout<<endl;
   vector<bool>rowv(rows,false);
   vector<bool>colv(cols,false);
   for(int i=0;i<rows;i++)
   {
    for(int j=0;j<cols;j++)
    {
        if(v[i][j]==0)
        {
            rowv[i]=true;
            colv[j]=true;
        }
    }
   }
   // row change in 0s
   for(int i=0;i<rows;i++)
   {
    if(rowv[i]==true)
    {
          for(int k=0;k<cols;k++)
          {
            v[i][k]=0;
          }
    }
   }
   // column change in 0s
   for(int i=0;i<cols;i++)
   {
    if(colv[i]==true)
    {
          for(int k=0;k<rows;k++)
          {
            v[k][i]=0;
          }
    }
   }
   // print matrix
   for(int i=0;i<rows;i++)
   {
    for(int j=0;j<cols;j++)
    {
          cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}