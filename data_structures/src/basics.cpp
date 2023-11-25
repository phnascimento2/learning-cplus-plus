/**
 * A class for simulating an integer memory cell.
*/

#include <iostream>

class InteCell
{
private:
    int storedValue;

public:
    InteCell() { storedValue = 0; }
    InteCell(int initialValue) { storedValue = initialValue; }
    
    int read() { return storedValue; }

    void write( int x ) { storedValue = x; }
};

int main() {
    InteCell intCell = InteCell();
    std::cout << "Returning the value of the default constructor: " << intCell.read() << std::endl;
}


