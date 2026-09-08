#include <iostream>

class Gates {
public:
    bool a;
    bool b;
};

int main() {
    Gates andGate; // Changed 'and' to 'andGate'
    andGate.a = true;
    andGate.b = false;
    
    std::cout << andGate.a; // Added std:: prefix for cout
    return 0;
}
