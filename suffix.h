#include <iostream>
#include <map>
#include <vector>
struct state{
    int len;
    std::map<char, int> ptr;
};


struct SuffixAutomaton{
    std::vector<State> states;
    int inputSize;
    SuffixAutomata(int size);
    
};