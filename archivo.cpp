#include <iostream>
#include <fstream>
#include <string>

void print_numbers (int nmax, std::string name);

int main (void)
{
  print_numbers (100, "datosfout.txt");
  print_numbers (200, "datosfout2.txt");
}

void print_numbers (int nmax, std::string name)
{
  std::ofstream fout(name);
  fout.precision (16);
  fout.setf(std::ios::scientific);
  for(int n=1; n<=nmax; ++n)
    {  
      fout<<n<<"\t"<<1.0 /n<<"\n";
    }
  fout.close();
}
