#include <string>

class Contact {
    public:
        void        setFirstName(std::string firstName);
        void        setLastName(std::string lastName);
        void        setNickName(std::string nickname);
        void        setPhoneNumber(std::string phoneNumber);
        void        setDarkestSecret(std::string darkestSecret);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;
};

class PhoneBook {
    public:
        void add(void);
        void search(void);
        void phonebookExit(void);
    private:
        int _size;
        int _oldestIndex;
        Contact _contacts[8];
};