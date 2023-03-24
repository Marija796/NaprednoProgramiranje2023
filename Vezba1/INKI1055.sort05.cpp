//insertion sort работи на принцип така што низата практично е поделена на подреден и несортиран дел
//Вредностите од несортираниот  дел се избираат и стават на правилната позиција во сортираниот дел
//во техниката на сортирање со вметнување, започнуваме од вториот елемент бидејќи претпоставуваме дека првиот елемент е секогаш подреден. 
//Потоа, од вториот елемент до последниот елемент, го споредуваме секој елемент со сите негови претходни елементи и го ставаме тој елемент во соодветна позиција.
//Insertion sort ја подредува низата по големина од најмал до најголем
#include<iostream>  
using namespace std;  
int main ()  
{    
    int myarray[25] = { 'M','a','r','i','j','a','M','i','h','a','j','l','o','v','s','k','a','I','N','K','I',1,0,5,5};   
       
    cout<<"\nInput list is \n";
    for(int i=0;i<25;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int k=1; k<25; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<25;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }  
}