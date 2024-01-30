//
// Created by vertog on 30.01.2024.
//

#include "Lesson64_MoveConstructor.h"

#include <utility>
#include "iostream"
#include "vector"

class Message
{
private:
    char* text;
    unsigned size;

    unsigned id;
    static inline unsigned counter{};

public:
    // standard constructor
    Message(const char* data, unsigned count)
    {
        size = count;

        text = new char[size];  // malloc
        for(unsigned i = 0; i < size; i++)
        {
            text[i] = data[i];
        }

        id = ++counter;
        std::cout << "Create Message " << id << std::endl;
    }

    // copy constructor
    Message(const Message& copy) : Message{copy.getText(), copy.size }  // standard
    {
        std::cout << "Copy Message " << copy.id << " to " << id << std::endl;
    }
    // move constructor called with std::move
    Message(Message&& moved) noexcept {
        id = ++counter;
        std::cout << "Create Message " << id << std::endl;

        text = moved.text;
        size = moved.size;
        moved.text = nullptr; // remember nullified variable
        std::cout << "Move Message " << moved.id << " to " << id << std::endl;
    }

    // destructor
    ~Message()
    {
        std::cout << "Delete Message "  << id << std::endl;
        delete[] text;  // remember: free memory
    }
    [[nodiscard]] char* getText() const { return text; }
    [[nodiscard]] unsigned getSize() const { return size; }
    [[nodiscard]] unsigned getId() const { return id; }
};

class Messenger
{
private:
    Message message;

public:
    //Messenger(const Message& mes): message{mes} { } // allocate copy
    Messenger(Message mes): message{std::move(mes)} { }
    void sendMessage() const
    {
        std::cout << "Send message " <<  message.getId() << " : ";
        auto size = message.getSize();
        auto text = message.getText();
        for (unsigned i = 0; i < size; i++)
            std::cout << text[i];
        std::cout << std::endl;
    }
};

void Lesson64_MoveConstructor::main() {
    Message message { "Hi", 2 };
    Messenger messenger { message };
    messenger.sendMessage();

    std::cout << std::endl << std::endl;
    std::vector<Message> messages { };
    messages.emplace_back("Hello world", 12);

    std::cout << std::endl << std::endl;
    std::vector<Message> messages2 { };
    messages2.emplace_back(message);

    std::cout << std::endl << std::endl;
}
