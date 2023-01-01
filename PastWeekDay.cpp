/*You'll write a program that lets the user type in the current day [1 : Monday,...,  7 : Sunday], and a day difference. Your program will then go that day difference in the past and say which day of the week we hit.
For example if today is a 3 [Wednesday] and we want to go 10 days in the past, we would hit a Sunday. The program should also do some basic error checking in that it wouldn't for example accept 8 as the current day. Only days from 1 to 7 are acceptable.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
  cout<<"Which day is today[1 : Monday,..., 7 : Sunday]"<<endl;
  int n,p,q;
  cin>>n;
  cout<<"How many days have passed up to today :"<<endl;
  cin>>p;
  q=p;
  if(p>7)
  { static int i=1;
    p-=7*i;
  }
  string today;
  switch(n)
  {
    case 1 :
       cout<<"Today is Monday";
       today="Monday";
    break;
    case 2 :
       cout<<"Today is Tuesday";
       today="Tuesday";
    break;       
    case 3 :
       cout<<"Today is Wednesday";
       today="Wednesday";
    break;
    case 4 :
       cout<<"Today is Thrusday";
       today="Thrusday";
    break;  
    case 5 :
       cout<<"Today is Friday";
       today="Friday";
    break;
    case 6 :
       cout<<"Today is Saturday";
       today="Saturday";
    break; 
    case 7 :
       cout<<"Today is Sunday";
       today="Sunday";
    break;
    default :
       cout<<n<<" is not a valid day. Bye!";
       return 0;                
  }
  cout<<endl;

  if(p==7)
    cout<<"If we went "<<q<<" days in the past we would hit a "<<today;
  else
    {  
      n=n-p;
   if(n==0)
       n+=7;  
   while(n<0){
        static int i=1;
        n+=7*i;
        i++;}
       switch(n)
  {
    case 1 :
       cout<<"If we went "<<q<<" days in the past we would hit a Monday"; 
    break;
    case 2 :
       cout<<"If we went "<<q<<" days in the past we would hit a Tuesday";
    break;       
    case 3 :
       cout<<"If we went "<<q<<" days in the past we would hit a Wednesday";
    break;
    case 4 :
       cout<<"If we went "<<q<<" days in the past we would hit a Thrusday";
    break;  
    case 5 :
       cout<<"If we went "<<q<<" days in the past we would hit a Friday";
    break;
    case 6 :
       cout<<"If we went "<<q<<" days in the past we would hit a Saturday";
    break; 
    case 7 :
       cout<<"If we went "<<q<<" days in the past we would hit a Sunday";
    break;
    default :
       cout<<n<<" is not a valid day. Bye!";
       return 0;                
  } 
    } 
}