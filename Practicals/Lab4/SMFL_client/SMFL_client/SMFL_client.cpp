// SMFL_client.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "SFML\Network.hpp"


#define SERVERIP "127.0.0.1"

#define SERVERPORT 4444

#define MESSAGESIZE 40

using namespace sf;

int _tmain(int argc, _TCHAR* argv[])
{
	printf("This is the Client program\n");

	UdpSocket socket;

	if (socket.bind(SERVERPORT, SERVERIP) != Socket::Done)
	{
		getError("Socket error");
	}

	return 0;
}

void getError(std::string message)
{
	throw std::invalid_argument(message);
}

