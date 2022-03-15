#include <iostream>

using namespace std;

int main()
{
  int i,j,k,n,c,s,u=1;

  while( u==1)
  {



    cout <<"    Entrez un nombre entier impair !" << endl;
    cin>>n;


    c=2*n-1;
    s=0;j=1;

    for(int i=1;i<=2*n - 1;i++)
    {
        if(i!=1)

      {
         k=1;
         while(k<=s)
         {
           cout <<" ";
           k=k+1;
         }

      }
      while (j<=c)
      {
      cout <<"*";
      j++;
      }
      j=1;
      if(i<n)
      {
       c=c-2;
       s=s+1;
      }
     else
  {

       c=c+2;
       s=s-1;
  }




    cout <<"\n";
}
cout <<"VOULEZ VOUS CONTINUER 1-oui 2-Non:";
cin >>u;
  }

    return 0;
}
