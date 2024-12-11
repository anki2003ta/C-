/*Write a simple calculator program in C++. Have as many operations as you can. Every such operation (add, multiply etc) should be in a separate file. Have a header file too. Needless to say, the program should be structured in classes.*/
class calculator
{
    private:
        int a;
        int b;
    public:
        calculator(int x,int y):a(x),b(y){}
        void add();
        void subtract();
        void multiply();
        void divide();
        void modulo();
        void exponent();
};
