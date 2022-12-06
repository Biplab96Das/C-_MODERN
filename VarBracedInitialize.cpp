#include<iostream>
using namespace std;
//Variable Brased Initialization
int main()
{
  int elephanr_count;
  int lion_count {};//Initialized to zero
  int dog_count {10};//initialized to 10
  int cat_count (15);//Initialized to 15
  //Can use expression as initializer
  cout<<lion_count<<endl;
  int domesticated_Animals {dog_count+cat_count};
  //won't compile,the expression in braces use undeclared variable
  int doesnt_exist1=0;
  double doesnt_exist2=0.0;
  int bad_initialization (doesnt_exist1+doesnt_exist2);
  cout<<domesticated_Animals<<" "<<bad_initialization<<endl;
  //2.9 is double with wider range than int.ERROR OR WARNING
  double narrowing_conversion {2.9};
  int narrowing_silently (2.6);
  cout<<narrowing_conversion<<" "<<narrowing_silently<<endl;
  return 0;
}