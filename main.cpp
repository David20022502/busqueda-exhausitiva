#include <iostream>
using namespace std;
int main() 
{
  char cadena[100], buscar[100]; 
  char cad,x='a', pal='a';
  int y=0,j=0,z,k=0,l;
  cout << "ingrece la cadena de texto(x para terminar): ";
  while(cad!='x')
  {
    cin>>cad;
    if(cad!='x')
    {
      cadena[y]=cad;
      y++;
    }
  }
  cout << endl;
  for (int i=0;i<=y;i++)
  {
    cout <<cadena[i];
  }
  cout << endl;
  cout<< " palabra a buscar(x para terminar): ";
  while(pal!='x')
  {
    cin>>pal;
    if(pal!='x')
    {
      buscar[j]=pal;
      j++;
    }
  }
  
  for (int i=0;i<=j;i++)
  {
    cout <<buscar[i];
  }
  for (int i=0;i<=y;i++)
  {
    z=i;
    if(buscar[0]==cadena[i])
    {
      for(int s=1; s<=j;s++)
      {
        z=z+1;
        if(buscar[s]==cadena[z])
        {
          k=k+1;
          l=k;
        }
        else
        {
          k=l;
        }
      }
    }
  }
  cout << endl;
  if(k+1==j)
  {
    cout << "elemento en la cadena";
  }
  else
  {
    cout << "elemento no esta en la cadena";
  }
}
