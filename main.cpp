#include <iostream>
#include <map>
#include <vector>

class Contact {
  private:
    std::string name;
    std::string number;
  public:
    void setName (std::string &in_name) {
        name = in_name;
    }

    void setNumber (std::string &in_number) {
        number = in_number;
    }

    std::string getNumber () {
        return number;
    }

    std::string getName () {
        return name;
    }
};

class Phone {
  private:
    std::vector<Contact> contacts;
  public:
    int add () {
        Contact* contact = new Contact;
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
        contact->setNumber(num);
        for (int i = 0;i < contacts.size();i++)  {
            if (contacts[i].getNumber() == num) {
                std::cout << "This number already exists" << std::endl;
                return 0;
            }
        }
        std::cout << "Enter the subscriber's name: ";
        std::cin.ignore();
        std::getline(std::cin,name);
        contact->setName(name);
        contacts.push_back(*contact);
        std::cout << "The entry was successful" << std::endl;
        delete contact;
        return 1;
  }
    int call () {
        std::string buffer;
        std::cout << "Enter the subscriber's number or name: ";
        std::cin.ignore();
        std::getline(std::cin,buffer);
        for (int i = 0;i < contacts.size();i++) {
            if (contacts[i].getNumber() == buffer) {
                std::cout << "CALL" << std::endl;
                std::cout << buffer << std::endl;
                return 0;
            } else if (contacts[i].getName() == buffer) {
                std::cout << "CALL" << std::endl;
                std::cout << contacts[i].getNumber() << std::endl;
                return 1;
            }
        }
        std::cout << "There is no such subscriber" << std::endl;
        return 2;
    }
    int sms () {
        std::string buffer;
        std::string message;
        std::cout << "Enter the subscriber's number or name to send sms: ";
        std::cin.ignore();
        std::getline(std::cin,buffer);
        for (int i = 0;i < contacts.size();i++) {
            if (contacts[i].getNumber() == buffer) {
                std::cout << "Enter your message:" << std::endl;
                std::cin.ignore();
                std::getline(std::cin, message);
                std::cout << "Your message was send to " << buffer << std::endl;
                return 0;
            } else if (contacts[i].getName() == buffer) {
                std::cout << "Enter your message:" << std::endl;
                std::cin.ignore();
                std::getline(std::cin, message);
                std::cout << "Your message was send to " << contacts[i].getNumber() << std::endl;
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
            myPhone->add();
        } else if (command == "call") {
            myPhone->call();
        } else if (command == "sms") {
            myPhone->sms();
        } else if (command == "exit") {
            delete myPhone;
            return 0;
        } else {
            std::cout << "Input error! Try again" << std::endl;
        }
    }
}
