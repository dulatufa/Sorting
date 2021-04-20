/**
 * @file main.cpp
 * @brief This is sorting.
 * @details This is the long brief at the top of main.cpp.
 * @author Bona Tufa
 * @date 4/19/2021
 * 
 */
/**
 * Add two integers (brief)
 * 
 * Adds a and b, two integers (long description)
 * @param a integer
 * @param b integer
 * @returns integer sum of a and b
 */

#include <iostream>
#include <vector>
using namespace std;
void quickSort(vector<int> &a, int i, int n) {   
    if (n <= 1) return;
    int x = a[i + rand()%n];
    int p = i-1, j = i, q = i+n;
while (j < q) {
    int comp = a[j] - x;
    if (comp < 0) { // move to beginning of array
    swap(a[j++], a[++p]); 
} else if (comp > 0) {
swap(a[j], a[--q]); // move to end of array
} else {
j++; // keep in the middle
}
}


quickSort(a, i, p-i+1);

quickSort(a, q, n-(q-i));
}


int main(){
    vector<int> fag{5, 6, 2, 1, 27, 3};
    for (int i = 0; i < fag.size(); i++) {
        std::cout << fag.at(i) << ' ';
    }
    quickSort(fag, 0, fag.size());
    cout << endl;
    for (int i = 0; i < fag.size(); i++) {
        std::cout << fag.at(i) << ' ';
    }
  cout << "done!";  
}