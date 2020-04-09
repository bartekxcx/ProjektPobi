#include <string>

class Client
{ 
   private:
    std::string firstName;
    std::string lastName;
    std::string personalID;
    std::string ClientInfo;
   public:
    void setfirstName (std::string);
    void setlastName (std::string); 
    void setClientInfo();
    std::string getClientInfo();
    
   public:
    Client();
    Client(std::string, std::string, std::string);
    ~Client();
};


