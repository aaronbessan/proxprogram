#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n,u=1;

    while(u==1)
  {

    cout << "Entrez un nombre entier impair!" << endl;
    cin>>n;

    int c=1;   //le nombre d'asteriste
    int s=n-1; //nombre d'espace

     for(i=1;i<=2*n-1;i++)
     {
       if(i!=n)
       {
         k=1;//espace
        while(k<=s)
        {
         cout <<" ";
         k=k+1;
        }
        k=1;
       }


       for( j=1; j<=c;j++)
       {
         cout << "*";
       }
        j=1;
       if(i<n)
       {
         c=c+2;
         s=s-1;
       }
       else
       {
         c=c-2;
         s=s+1;
       }
     cout <<"\n";
     }
cout <<"voulez vous continuer 1-oui 2-non:";
cin>>u;
}
  return 0;
}

