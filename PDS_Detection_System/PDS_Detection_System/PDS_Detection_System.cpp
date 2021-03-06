// PDS_Detection_System.cpp: definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include "TCPServer.h"

int main(int argc, char **argv)
{
	try {
		if (argc <= 2) {
			throw std::exception("Bad arg list");
		}
		else {
			long int db_erase = strtol(argv[1], nullptr, 10);
			long int espn = strtol(argv[2], nullptr, 10);
			std::vector<long int> coord;
			for (int i = 0; i < espn*2; i+=2) {
				coord.push_back(strtol(argv[3 + i], nullptr, 10));
				coord.push_back(strtol(argv[4 + i], nullptr, 10));
			}
			TCPServer tcp_server(db_erase, espn, coord);
		}
		
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		std::cout << "AN EXCEPTION OCCURRED, TERMINATE APPLICATION " << std::endl;
		exit(-1);
	}
}
