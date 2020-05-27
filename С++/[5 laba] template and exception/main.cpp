#include "stack.h"
#include "max.h"
#include "MyException.h"

int main() {

    int arr[] {1,2,5,6,7};
    std::cout << "Max: " << max(arr, 5) << "\n\n";

    try {
        Stack<3, int> stack;
        stack.push(3);
        stack.push(5);
//        stack.push(4);
//        stack.push(2);
//        stack.push(3);
        std::cout << "Stack's size: " << stack.get_size() << '\n';

        std::cout << "Stack: ";
        stack.printStack();
        std::cout << '\n';

        stack.pop();
        stack.pop();
        stack.pop();
        std::cout << "Stack after call x2 pop: ";
        stack.printStack();
        std::cout << '\n';

        std::cout << "Stack's top: " << stack.get_top();
    }
    catch (MyException &ex) {
        std::cout << "Message: " << ex.msg() << '\n' << "Error: " << ex.what() << ", code:" << ex.code();
    }
}