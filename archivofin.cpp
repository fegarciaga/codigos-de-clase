#include <iostream>
#include <fstream>
#include <string>

void read_numbers (std::string name);

int main (void)
{
  read_numbers ("datosfout.txt");
  read_numbers ("datosfout2.txt");
}

void read_numbers  (std::string name)
{
  std::ifstream fin(name);
  int n;
  double x, sum=0;
  while (fin){
    fin >>n >> x;
    std::cout << n <<"\t" <<x<<std::endl;
    sum=sum+x;
  }
  std::cout<< sum <<std::endl;
  fin.close();
}
    
 
 
 
 
 
 
