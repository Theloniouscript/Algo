#include <iostream>

using namespace std;

class klass {
    int k[100];
    public:
    int sloc, rloc;
    public:
    void init();
    void kput(int i);
    int kget();
};
klass Q1, Q2;

void klass::kput(int i) {
    if(sloc ==100) {
        std::cout << "Queue overflow.\n" << std::endl;
        return;
    }

    sloc ++;
    k[sloc] = i;
}
klass ob1, ob2;

class myclass {
    int a;
    public:
    int b;
    void setab(int i);
    int geta();
    void reset();
};

void myclass::setab(int i) {
    a = i;
    b = i * i;
}

int myclass::geta() {
    return a;
}

void myclass::reset() {
    setab(0);
}




int main() {

    myclass ob;
    ob.setab(5);
    std::cout << "Object ob after calling setab(5) function: " <<
                ob.geta() << ' ' << ob.b << '\n' << std::endl;
    ob.b = 20;
    std::cout << "Object ob after setting ob.b = 20: " <<
                ob.geta() << ' ' << ob.b << '\n' << std::endl;

    ob.reset();
    std::cout << "Object ob after calling ob.reset() function: " <<
                ob.geta() << ' ' << ob.b << '\n' << std::endl;



    std::cout << Q1.sloc << std::endl;
    ob1.kput(5);
    //klass::kput(5);

    return 0;
}
