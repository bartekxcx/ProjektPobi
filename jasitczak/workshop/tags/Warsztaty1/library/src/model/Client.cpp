#include <iostream>
#include <string>
#include "model/Client.hpp"

Client::Client(std::string imie, std::string nazwisko, std::string pesel)
	{	
        firstName=imie;
        lastName=nazwisko;
        personalID=pesel;
        std::string ClientInfo;
    }

void Client::setfirstName(std::string imie)
{   if(imie!="") firstName=imie;
}
void Client::setlastName(std::string nazwisko)
{   if(nazwisko!="") lastName=nazwisko;
}
void Client::setClientInfo()
{   
    ClientInfo="\n"+firstName+", "+lastName+", "+personalID+"\n";
}

std::string Client::getClientInfo()
    {   
        return ClientInfo;
    }






Client::~Client()
	{	
	}

