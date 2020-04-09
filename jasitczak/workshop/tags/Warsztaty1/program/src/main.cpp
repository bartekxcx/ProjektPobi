#include <iostream>
#include <memory>
#include "model/Client.hpp"

using namespace std;

int main()
{ 
	Client Przemo("Przemo", "Loczek", "990610408");
    /*Przemo.firstName = "Przemo";
    Przemo.lastName = "Loczek";
    Przemo.personalID = "990610408";*/

    Przemo.setfirstName("Przemo");
    Przemo.setlastName("Loczek");
    Przemo.setClientInfo();
    cout<<Przemo.getClientInfo();
    
	Client * Jacek = new Client ("Jacek", "Kowalski", "940612434");
    /*Jacek->firstName = "Jacek";
    Jacek->lastName = "Kowalski";
    Jacek->personalID = "940612434";*/
    
    Jacek->setfirstName("Jacek");
    Jacek->setlastName("Kowalski");
    Jacek->setClientInfo();
    cout<<Jacek->getClientInfo();

    
    
    delete Jacek;

	
		return 0;
}
