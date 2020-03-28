#include <iostream>
#include "Client.h"

class Client{
public:
	Client()
    {
        std::cout<<"\nKonstruktor został wywołany";   

    }
    
    ~Client()
    {
        std::cout<<"\nDestruktor został wywołany";
    }
	
};
