#include "suffix.h"

SuffixAutomata::SuffixAutomata(int size) {
    // this->transitionsCount = 0;
    // this->sink = SOURCE;
    this->inputSize = size;
    this->states.emplace_back();
}
