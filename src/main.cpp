#include <iostream>
#include <std_msgs/msg/String.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std_msgs::msg::String msg;
    msg.data = "Hello, World!";

    return 0;
}