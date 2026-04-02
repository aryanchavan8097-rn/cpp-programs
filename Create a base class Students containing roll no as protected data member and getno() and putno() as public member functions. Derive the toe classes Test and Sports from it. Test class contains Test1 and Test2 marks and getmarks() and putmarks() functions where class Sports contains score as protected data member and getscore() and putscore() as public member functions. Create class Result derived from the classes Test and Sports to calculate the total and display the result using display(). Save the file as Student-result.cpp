#include <iostream>
using namespace std;

class student {
protected:
    int roll_no;

public:
    void getno() {
        cout << "enter your roll number ";
        cin >> roll_no;
    }

    void putno() {
        cout << "my roll number is " << roll_no << endl;
    }
};

class test : public student {
public:
    int test1, test2;

    void getmark() {
        cout << "enter test 1" << endl;
        cin >> test1;
        cout << "enter test 2" << endl;
        cin >> test2;
    }

    void putmark() {
        cout << "test1 mark is " << test1 << endl;
        cout << "test2 mark is " << test2 << endl;
    }
};

// ✔️ FIX: sport inherits from student
class sport : public student {
protected:
    int score;

public:
    void getscore() {
        cout << "enter sport score ";
        cin >> score;
    }

    void putscore() {
        cout << "sport score is " << score << endl;
    }
};

class result : public test, public sport {
public:
    int total;

    void display() {
        total = test1 + test2 + score;

        test::putno();   // ⚠️ important (avoid ambiguity)
        putmark();
        putscore();

        cout << "total score is " << total << endl;
    }
};

int main() {
    result r;

    r.test::getno();   // ⚠️ important
    r.getmark();
    r.getscore();

    r.display();

    return 0;
}
