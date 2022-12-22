// 1. Write a C++ Program to print the following using cout and
// manupulators(endl,left,right,setw)
//    S.No. City District Province Population
// 	 1. KATHMANDU Kathmandu Bagmati 500000
// 	 2. Pokhara Kaski Gandaki 50000
// 	 3. Butwal Rupendehi Lumbini 100000
// 	 4. Dharan Sunsari Prov 1 80000

#include <iomanip>
#include <iostream>
using namespace std;

void print_all(char i[], char city[], char district[], char province[],
               char population[]) {
  cout << left << setw(15) << i << left << setw(15) << city << left << setw(15)
       << district << left << setw(15) << province << right << setw(15)
       << population << endl;
}

int main() {
  print_all("S.No", "City", "District", "Province", "Population");
  print_all("1.", "kathmandu", "kathmandu", "bagmati", "500000");
  print_all("2.", "pokhara", "kaski", "gandaki", "50000");
  print_all("3.", "butwal", "rupendehi", "lumbini", "100000");
  print_all("4.", "dharan", "sunsari", "prov1", "80000");
}


//this program is not as per as C++ standard. ISO C++ 11  doesnot allow converting 
//string literals into char pointer. BUT hey, it works!!
//its better to use 'string city' than 'char city[]' in this condition.
