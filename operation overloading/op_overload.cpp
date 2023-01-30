#include <iostream>

class RatioNumber{
private:
    int p;
    int q;
public:
    RatioNumber(int p = 1, int q = 1)
    {
        this->p = p;
        this->q = q;
    }

    friend std::ostream& operator<<(std::ostream& os, const RatioNumber& obj);

    RatioNumber operator+(RatioNumber& obj)
    {
        RatioNumber res;
        res.p += obj.p;
        res.q += obj.q;
        return res;
    }

};

std::ostream& operator<<(std::ostream& os, const RatioNumber& obj){
    std::cout<<obj.p << " - " << obj.q << std::endl;
}

int main(void){

    RatioNumber r1(2,3), r2(4,6), r3;
    r3 = r1+r2;
    std::cout<<r3;
    return 0;
}