// PDS_Detection_System.cpp: definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include "TCPServer.h"

int main()
{
	try {
		TCPServer tcp_server;
	}
	catch (std::exception& e) {
		std::cout << "AN EXCEPTION OCCURRED, TERMINATE APPLICATION" << e.what() << std::endl;
		exit(-1);
	}
}
