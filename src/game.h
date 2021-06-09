#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#include "./entity.h"
#include "./component.h"
#include "./entityManager.h"
#include "./assetManager.h"

class AssetManager;

class Game {
    private:
        bool isRunning;
        SDL_Window *window;
       // SDL_Renderer *renderer; 
    public:
        Game();
        ~Game();
        int ticksLastFrame = 0;
        bool IsRunning() const;
		static AssetManager* assetManager;
		static SDL_Renderer *renderer;
		void LoadLevel(int levelNumber);
        void Initialize(int width, int height);
        void ProcessInput();
        void Update();
        void Render();
        void Destroy();
};

#endif
