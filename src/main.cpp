#include <SFML/Graphics.hpp>

int main()
{
    // window size and name
    sf::RenderWindow window(sf::VideoMode(800, 600), "Conway in SFML");

    // create circle
    sf::RectangleShape square(sf::Vector2f(2.f, 2.f));

    // size between each square
    float size = 20.f;
    square.setSize(sf::Vector2f(size - 1.f, size - 1.f));

    // fill color
    square.setFillColor(sf::Color::Yellow);

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
        for(int r = 0; r < 10; ++r)
        {
            for(int c = 0; c < 10; ++c)
            {
                // grid like look
                square.setPosition(c * size, r * size);

                // draw square
                window.draw(square);
            }
        }

        // display window
        window.display();
    }

}
