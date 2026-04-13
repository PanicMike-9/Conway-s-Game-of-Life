#include <SFML/Graphics.hpp>

constexpr const int WIN_WIDTH = 800;
constexpr const int WIN_HEIGHT = 600;
constexpr const int GRID_SIZE = 10;

int main()
{
    // window size and name
    sf::RenderWindow window(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "Conway's Game of Life");

    // game loop start
    while(window.isOpen())
    {
        // handle events
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed) window.close();
        }

        // clear window
        window.clear(sf::Color::White);

        int cell_size = WIN_WIDTH / GRID_SIZE;

        sf::RectangleShape cell(sf::Vector2f(cell_size - 1.0f, cell_size - 1.0f));
        cell.setFillColor(sf::Color::Black);

        // display window
        window.display();
    }
}
