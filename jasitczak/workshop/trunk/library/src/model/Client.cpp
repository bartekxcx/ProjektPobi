#include <iostream>
#include "Client.hpp"

class Client{
	Client()
    {
        std::cout<<"\nKonstruktor został wywołany";   

    }
    
    ~Client()
    {
        std::cout<<"\nDestruktor został wywołany";
    }
	
};
