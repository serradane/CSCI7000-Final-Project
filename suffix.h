#include <iostream>
#include <map>
#include <vector>

struct State{
    int len;
    std::map<char, int> ptr;
};


struct SuffixAutomaton{
    std::vector<State> states;
    int inputSize;
    SuffixAutomata(int size);
    int addState();
    void addTransition(int from, int index, int to, bool primary);
};