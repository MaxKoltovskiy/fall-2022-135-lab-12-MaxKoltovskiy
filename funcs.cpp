#include "funcs.h"

std::vector<int> makeVector(int n) {
    std::vector<int> nums;
    for(int i = 0; i< n; i++) {
        nums.push_back(i);
    }

    return nums;
}

std::vector<int> goodVibes(const std::vector<int>& v) {
    std::vector<int> positives;
    for(int i = 0; i< v.size(); i++) {
        if(v[i] > 0) {
            positives.push_back(v[i]);
        }
    }
    return positives;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) {
    for(int i = 0; i< vegeta.size(); i++) {
        goku.push_back(vegeta[i]);
    }
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
    std::vector<int> pairwise;
    int n = v1.size();

    for(int i = 0; i< n; i++) {
        int one, two;
        if(i>= v1.size()) {
            one = 0;
        }
        else {
            one = v1[i];
        }

        if(i>= v2.size()) {
            two = 0;
        }
        else {
            two = v2[i];
        }
        pairwise.push_back(one+two);
    }

    return pairwise;
}