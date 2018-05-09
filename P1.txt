
// Luiza Siqueira Vinhais 
// Matricula 11721EBI020

#include <stdio.h>



int main ()
{
    int i , estado=0,num, res;
    
    char bits[256];
    printf ("Seja bem vindo, digite uma sequencia de bits:");
    scanf ("%s", bits);
    
    
    for (i=0;bits[i]!='\0';i++)
    {
     if (estado==0 && bits[i]=='0')
     {
         res=0;
         
     }
     if (estado==0 && bits[i]=='1')
     {
         res= 1;
     }
     if(estado==1 && bits[i]=='0')
     {
         res=2;
        
     }
    if(estado==1 && bits[i]=='1')
    
    {
        res=0;
    }
    if (estado==2 && bits[i] == '0')
    {
        res=1;
        
    }
    if (estado==2 && bits[i]=='1')
    {
        res=2;
    }
    estado=res;
    res=0;
        }
   if(estado==0)
   {
    printf ("O numero eh multiplo de 3!");
    
   }
   else 
   {
       printf ("O numero nao eh multiplo de 3!");}
       
    return 0;
    
    }
