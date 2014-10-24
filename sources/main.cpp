#include <iostream>
#include <SDL/SDL.h>

using namespace std;

int main (int argc, char *args[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	
	SDL_Window* window = NULL;

	//SDL_Surface* screenSurface = NULL;

	window = SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 768, SDL_WINDOW_SHOWN);


	cout << "Hello World!";
	return 0;
}
