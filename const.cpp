#include<iostream>
using namespace std;
int main()
{  //const can only go with "Declare and Initialize"
    const unsigned int earth_radius_km {6371};//in km
    const unsigned int earth_radius_km_1 (6371);//in km
    const unsigned int earth_radius_km_2 = 6371u;//in km
  //Modifying variable of const type is not possible
    //earth_radius_km=771;//Compilation error
    cout<<"Earth's radius = "<<earth_radius_km<<endl;
    int expanded_radius {3*earth_radius_km};
    cout<<"Three times of earth's radius = "<<expanded_radius<<endl;
 return 0;   
}
