
// Our Game Starts from here

#include <iostream>
#include<SFML/Graphics.hpp>
using namespace sf;

int main()
{
    //Creating Our Video Mode for 1920*1080 pixels
    VideoMode vm(1920, 1080);
    RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

    // Create a texture to hold a graphic on the GPU
    Texture textureBackground;
    // Load a graphic into the texture
    textureBackground.loadFromFile("graphics/background.png");
    // Create a sprite
    Sprite spriteBackground;
    // Attach the texture to the sprite
    spriteBackground.setTexture(textureBackground);
    // Set the spriteBackground to cover the screen
    spriteBackground.setPosition(0, 0);

    while (window.isOpen())
    {
        /*
 ****************************************
 Handle the players input
 ****************************************
 */
        if (Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
        /*
        ****************************************
        Update the scene
        ****************************************
        */
        /*
        ****************************************
        Draw the scene
        ****************************************
        */
        // Clear everything from the last frame
        window.clear();
        // Draw our game scene here // USING Double Buffering System
        window.draw(spriteBackground);
        // Show everything we just drew
        window.display();
    }
    std::cout << "Hello World!\n";
    return 0;
}
