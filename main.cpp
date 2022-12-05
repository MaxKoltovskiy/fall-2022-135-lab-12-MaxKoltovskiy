#include "funcs.h"
#include "main.h"
#include <iostream>
int main() 
{
    const int n = 10;
    std::vector<int> sequence = makeVector(n);
    std::cout<< "Made a vector with "<< n<< " integers that range from 0 to "<< n-1<< ":\n";
    print(sequence);
    std::cout<< "\n";

    std::cout<< "\n-------------------------------------------------\n";

    std::vector<int> original{-1,1,-6,4,9,-32,7,10};
    std::vector<int> positive = goodVibes(original);

    std::cout<< "Return only positives from vector ";
    print(original);

    std::cout<< "\nTurning it into ";
    print(positive);
    std::cout<< "\n";

    std::cout<< "\n-------------------------------------------------\n";

    std::vector<int> first{1,2,3,4};
    std::vector<int> second{1,3,5};

    std::cout<< "Combined vector ";
    print(first);
    std::cout<< "and vector ";
    print(second);

    gogeta(first,second);

    std::cout<< "\nMade vector ";
    print(first);
    std::cout<< "\n";

    std::cout<< "\n-------------------------------------------------\n";
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};

    std::cout<< "Pairwise sum of vector ";
    print(v1);
    std::cout<< " and vector ";
    print(v2);
    std::cout<< "\nis vector ";
    print(sumPairWise(v1,v2));
    std::cout<< "\n";
    
    return 0;
}

void print(std::vector<int> v) {
    for(int i = 0; i< v.size(); i++) {
        std::cout<< v[i]<< " ";
    }
}