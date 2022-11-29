#include "suffix.h"

SuffixAutomata::SuffixAutomata(int size) {
    // this->transitionsCount = 0;
    // this->sink = SOURCE;
    this->inputSize = size;
    this->states.emplace_back();
}


int SuffixAutomata::addState() {
    if (this->states.size() > this->inputSize &&
            this->states.capacity() == this->states.size()) {
        this->states.reserve(this->states.capacity() + (this->inputSize / 2));
    }
    this->states.emplace_back();
    return this->states.size() - 1;
}

void SuffixAutomata::addTransition(int from, int index, int to, bool primary) {
    this->states[from].next.set(index, to);
    this->states[from].primary[index] = primary;
    this->transitionsCount++;
}