#include <iostream>

struct inv_type {
            char item[40];
            double cost;
            double retail;
            int on_hand;
            int lead_time;             
            };

    void test() {
    
        inv_type inv_var;

        inv_var.cost = 10.39;
        std::cout << inv_var.cost << std::endl;
    

        int t;
        //for (t = 0; inv_var.item[t]; t++)
        // std::cout << inv_var.item[t] << std::endl;

        inv_type invtry[1000];
        std::cout << invtry[2].on_hand << std::endl;
    }
        



struct sample {
    int a;
    char ch;
}; 

void f1(sample parm); 

struct stype{
    int a, b;
};


struct bal {
    float balance;
    char name[80];
}
person;
bal *p;

void test2() {p = &person;
p->balance;
std::cout << p << std::endl;}


struct mystruct {
    int a; int b;
};
mystruct &f(mystruct &var);

mystruct &f(mystruct &var)
{
    var.a = var.a * var.a;
    var.b = var.b / var.b;
    return var;
}


union utype {
    short int i;
    char ch;
};
utype u_var;
//func1 (&u_var);


void fund(utype *un)
{
    un->i = 10;
    std::cout << un << std::endl;
}

class MyClass {
public:
    int a = 10;

    void Print() {
        std::cout << a << std::endl;
    }
};

struct MyStruct {
    int b = 22;

    void Print() {
        std::cout << b << std::endl;
    }
};

class MyClass2 : public MyClass
{

};

struct MyStruct2 : MyStruct
{

};

int main() {

    MyClass m;
    MyStruct ms;
    MyClass2 m2;
    MyStruct2 ms2;

    ms2.Print();

    m2.Print();

    m.Print();

    ms.b;
    ms.Print();

    u_var.ch = 'A';
   


    mystruct x, y;
    x.a = 10; x.b = 20;
    y = f(x);

    std::cout << "Modified fields x.a and x.b: " << x.a << ' ' << x.b << '\n' << std::endl;
    std::cout << "Modified fields y.a and y.b: " << y.a << ' ' << y.b << '\n' << std::endl;

    test2();

    /*stype svar1, svar2;
    svar1.a = svar1.b = 10;
    svar2.a = svar2.b = 20;
    svar2 = svar1;
    std::cout << "Structures after assignment: \n" << std::endl;
    std::cout << "svar1: " << svar1.a << ' ' << svar1.b << " \n" << std::endl;
    std::cout << "svar2: " << svar2.a << ' ' << svar2.b << " \n" << std::endl;
    */

    struct sample arg;
    arg.a = 1000;
    arg.ch = 'x';
    f1(arg);
    

    test();
    return 0;
}


    void f1(sample parm) {
        std::cout << parm.a << " " << parm.ch << "\n" << std::endl;
    }
    





