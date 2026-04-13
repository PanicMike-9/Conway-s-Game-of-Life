#include <SFML/Graphics.hpp>

constexpr const int WIN_WIDTH = 800;
constexpr const int WIN_HEIGHT = 600;
constexpr const int GRID_SIZE = 10;

int main()
{
    // window size and name
    sf::RenderWindow window(sf::VideoMode(800, 600), "Conway's Game of Life");

    // cell size
    int cell_size = WIN_WIDTH / GRID_SIZE;

    // create cells
    sf::RectangleShape cell(sf::Vector2f(cell_size, cell_size));

    // size between each square
    float size = 20.f;
    cell.setSize(sf::Vector2f(size - 1.f, size - 1.f));

    // fill color
    cell.setFillColor(sf::Color::Blue);

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
        window.clear();

        // draw the square shapes in window
        for(int r = 0; r < GRID_SIZE; ++r)
        {
            for(int c = 0; c < GRID_SIZE; ++c)
            {
                // grid 
                cell.setPosition(c * size, r * size);

                // draw square
                window.draw(cell);
            }
        }

        // display window
        window.display();
    }
}
