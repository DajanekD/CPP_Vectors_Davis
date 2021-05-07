//Dajanek Davis
//People's weight Extra Credit

#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<double> weights;
   //variables
   int i;
   double weight;
   double total;
   double max;
   //5 iterations of weights collected from user
   for(i = 0; i < 5; ++i) {
       cout << "Enter weight " << (i+1) << ":\n";
       cin >> weight;
       weights.push_back(weight);
   }

   //calculations happens here after each weight has been entered. 

   max = weights[0];
   printf("You entered: ");
   for(i = 0; i < 5; ++i) {
       cout << " " << weights[i];
       total += weights[i];
       if(weights[i] > max) {
           max = weights[i];
       }
   }
   //displays total weight
   cout << "\n\nTotal weight: " << total << endl;
   //displays average weight by dividig total by 5
   cout << "Average weight: " << total/5 << endl;
   //displays max weight
   cout << "Max weight: " << max << endl;
   return 0;
}