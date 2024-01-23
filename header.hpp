#ifndef HEADER_HPP // This should come first
#define HEADER_HPP

// Declare the add function here
int add(int a, int b);


class Dice{
    public:
        Dice(int n = 2);
        void diceInfo();
        //std::ostream& print(std::os);

    private:
        int diceNum;
        int *randumNumbers;
};


#endif // HEADER_HPP