#include <iostream>

#include <SDL.h>
#include <SDL_net.h>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDLNet_Init();

	IPaddress ip;
	SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
		
	TCPsocket client = SDLNet_TCP_Open(&ip);

	char text[100];
	SDLNet_TCP_Recv(client, text, 100);
	cout << text;
	

	SDLNet_TCP_Close(client);

	cin.get();

	SDLNet_Quit();
	SDL_Quit();
	return 1;
}