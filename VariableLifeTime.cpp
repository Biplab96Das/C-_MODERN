#include<iostream>
using namespace std;
int static var2 {80};//Static duration : Ennds when program dies
void some_function()
{
    int local_var3 {30};//Local(Automatic)duration : dies at the end of the block
    static int static_var1 {40};//Static duration : dies when program ends
    int dynamic_var1 {50};//You decide when it dies
}
int main()
{
   int local_var1 {10};//Dies at the end of the block
   int dynamic_var2 {60};//You decide when it dies
   {
    int local_var2 {20};//Local(Automatic)duration : dies at the end of the block
    int dynamic_var3 {70};//ou decide when it dies
   } 
  return 0; 
}