#include<iostream>
using namespace std;

 
void counting_sort(int a[],int n,int max)
{
     int count[50]={0},i,j;
     
     for(i=0;i<n;++i)
      count[a[i]]=count[a[i]]+1;
      
     cout<<"\n les elements apres le trie par comptage:";
     
     for(i=0;i<=max;++i)
      for(j=1;j<=count[i];++j)
       cout<<i;
}
 
int main()
{
    int a[50],n,i,max=0;
    cout<<"Entrer le nombre d'elements:";
    cin >>n;
    cout<<"\n\t\t*** Entrer les elements: ***"<<endl;
                  
    for(i=0;i<n;++i)
    {
     cout<<"Element n "<<i+1<<": ";
     cin >> a[i];
     if(a[i]>max)
      max=a[i];
    }
     
    counting_sort(a,n,max);
    return 0;
}
//Naoual smaili

