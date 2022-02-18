#include <iostream>
#include "TestHugeInteger.h"

using namespace std;

int main() {
    // when test failed, the size of number <= NUM_DISPLAY, display the number
    unsigned int num_display = 1000;
    // iterate the MAX_SIZE_ARRAY MAX_RUN times
    unsigned int max_run = 50;
    // use for generating invalid string for constructor 1 (with string input)
    unsigned int max_invalid_string = 5;
    // different size for test
    vector<int> max_size_array = {1,20,50,500};

    double totalMark = 0;

    string demoLab = "Lab2"; // set to Lab1 or Lab2

    HugeInteger x1("-8");
    HugeInteger x2("-8");
    HugeInteger x3=x1.multiply(x2);
    cout<<x3.toString()<<endl;
    cout<<x3.toString()<<endl;

    TestHugeInteger thi(num_display, max_run, max_invalid_string, max_size_array);

    if (demoLab == "Lab1"){
        totalMark += thi.testConstructorString();
        totalMark += thi.testConstructorNumber();
        totalMark += thi.testPositiveAddition();
    }else{
        totalMark += thi.testAdditionSubtraction();
        totalMark += thi.testCompareTo();
        totalMark += thi.testMultiplication();
    }

    cout << "******************************" << endl;
    cout << "*** FINAL TOTAL MARK IS " << totalMark << " ***" << endl;
    cout << "******************************" << endl;

	return 0;
}
