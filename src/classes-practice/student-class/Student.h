#include <string>


class Student
{
private:
    int sid;
    std::string fName;
    std::string lName;
    std::string address;
    int phoneNumber;

public:
    explicit Student(int sid, std::string fName, std::string LName, std::string address, int phone);

    int getSID();
    std::string getFName();
    std::string getLName();
    std::string getAddress();
    int getPhone();
    void getStudent();

    void setSID(int sid);
    void setFName(std::string aFName);
    void setLName(std::string aLName);
    void setAddress(std::string anAddr);
    void setPhone(int aPhone);
    void setStudent();
    void setStudent1();


};