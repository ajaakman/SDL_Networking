#include <iostream>

#include <SDL.h>

using namespace std;

int main(int argc, char** argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	cin.get();

	SDL_Quit();
	return 1;
}