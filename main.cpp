#include <iostream>
#include <map>

class Phone {
  private:
    std::map<std::string, std::string> phonebook;
  public:
    static int add (Phone* myPhone) {
        std::string num = "+7";
        std::string name;
        std::string buffer;
        std::cout << "Enter the subscriber's number: " << num;
        std::cin >> buffer;
        for (int i = 0;i < buffer.size();i++) {
            if (buffer[i] < '0' || buffer[i] > '9' || buffer.size() > 10) {
                std::cout << "Input error! Try again" << std::endl;
                std::cout << "Enter the subscriber's number: " << num;
                std::cin >> buffer;
                i = -1;
            }
        }
        num += buffer;
        std::map<std::string, std::string>::iterator it = myPhone->phonebook.find(num);
        if (it->first == num) {
            std::cout << "This number already exists" << std::endl;
            return 0;
        }
        std::cout << "Enter the subscriber's name: ";
        std::cin.ignore();
        std::getline(std::cin,name);
        myPhone->phonebook.insert(std::pair<std::string, std::string>(num, name));
        std::cout << "The entry was successful" << std::endl;
        return 1;
  }
    static int call (Phone* myPhone) {
        std::string buffer;
        std::cout << "Enter the subscriber's number or name: ";
        std::cin.ignore();
        std::getline(std::cin,buffer);
        for (std::map<std::string, std::string>::iterator it = myPhone->phonebook.begin();it != myPhone->phonebook.end();it++) {
            if (it->first == buffer) {
                std::cout << "CALL" << std::endl;
                std::cout << buffer << std::endl;
                return 0;
            } else if (it->second == buffer) {
                std::cout << "CALL" << std::endl;
                std::cout << it->first << std::endl;
                return 1;
            }
        }
        std::cout << "There is no such subscriber" << std::endl;
        return 2;
    }
    static int sms (Phone* myPhone) {
        std::string buffer;
        std::string message;
        std::cout << "Enter the subscriber's number or name to send sms: ";
        std::cin.ignore();
        std::getline(std::cin,buffer);
        for (std::map<std::string, std::string>::iterator it = myPhone->phonebook.begin();it != myPhone->phonebook.end();it++) {
            if (it->first == buffer) {
                std::cout << "Enter your message:" << std::endl;
                std::cin.ignore();
                std::getline(std::cin, message);
                std::cout << "Your message was send to " << buffer << std::endl;
                return 0;
            } else if (it->second == buffer) {
                std::cout << "Enter your message:" << std::endl;
                std::cin.ignore();
                std::getline(std::cin, message);
                std::cout << "Your message was send to " << it->first << std::endl;
                return 1;
            }
        }
        std::cout << "There is no such subscriber" << std::endl;
        return 2;
    }
};

int main() {
    Phone* myPhone = new Phone;
    while (true) {
        std::string command;
        std::cout << "Enter command: ";
        std::cin >> command;
        if (command == "add") {
            Phone::add(myPhone);
        } else if (command == "call") {
            Phone::call(myPhone);
        } else if (command == "sms") {
            Phone::sms(myPhone);
        } else if (command == "exit") {
            delete myPhone;
            return 0;
        } else {
            std::cout << "Input error! Try again" << std::endl;
        }
    }
}
