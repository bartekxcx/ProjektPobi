#include <iostream>
#include <memory>
#include "model/Client.hpp"

int main()
{
	Client Przemo;

    Client *Jacek = new Client();
    
    delete Jacek;

    std::unique_ptr<Client> henryk(new Client());
	
		return 0;
}
