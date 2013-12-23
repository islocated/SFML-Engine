#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML-Engine");

    while(window.isOpen()){
        sf::Event event;

        //Do event loop
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        window.clear(sf::Color::Black);

        window.display();
    }

    return 0;
}
