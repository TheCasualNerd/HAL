#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
class Database {
public:
    vector<string> questio; 
    static constexpr string erthings[] = {'who', 'what', 'when', 'where', 'why', 'how', 'is', 'which', 'whose', 'whom', '\0'};
    //string persona[9] = {'Dave', 'HAL', 'David Bowman', 'ship', 'Tycho', 'TMA', 'Frank', 'Frank Poole', 'Dr. Chandra', '\0'};
};
int main() {

    Database datab;
    datab.questio.insert(datab.questio.end(), datab.erthings, 10);
    cout << datab.questio[0];
}