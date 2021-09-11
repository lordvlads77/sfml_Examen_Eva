#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(300, 300, 500, 200, sf::Color::Yellow)};
Rectangle* rectangle1{new Rectangle(100, 100, 400, 200, sf::Color::Blue)};
Rectangle* rectangle2{new Rectangle(100, 100, 400, 300, sf::Color::Blue)};
Rectangle* rectangle3{new Rectangle(100, 100, 400, 400, sf::Color::Blue)};
Rectangle* rectangle4{new Rectangle(100, 100, 400, 500, sf::Color::Blue)};
Rectangle* rectangle5{new Rectangle(100, 100, 500, 500, sf::Color::Blue)};
Rectangle* rectangle6{new Rectangle(100, 100, 600, 500, sf::Color::Blue)};
Rectangle* rectangle7{new Rectangle(100, 100, 700, 500, sf::Color::Blue)};
Rectangle* rectangle8{new Rectangle(100, 100, 800, 500, sf::Color::Blue)};
Rectangle* rectangle9{new Rectangle(100, 100, 800, 400, sf::Color::Blue)};
Rectangle* rectangle10{new Rectangle(100, 100, 800, 300, sf::Color::Blue)};
Rectangle* rectangle11{new Rectangle(100, 100, 800, 200, sf::Color::Blue)};
Rectangle* rectangle12{new Rectangle(100, 100, 800, 100, sf::Color::Blue)};
Rectangle* rectangle13{new Rectangle(100, 100, 400, 100, sf::Color::Blue)};
Rectangle* rectangle14{new Rectangle(100, 100, 500, 100, sf::Color::Blue)};
Rectangle* rectangle15{new Rectangle(100, 100, 600, 100, sf::Color::Blue)};
Rectangle* rectangle16{new Rectangle(100, 100, 700, 100, sf::Color::Blue)};


Game::Game(/* args */)
{
    window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),GAME_NAME);
    event = new sf::Event();
}

Game::~Game()
{

}

//Starting things
void Game::Start()
{

}


void Game::Initialize()
{
    Start();
    MainLoop();
}

//Logic, animations, etc
void Game::Update()
{
    
}

void Game::MainLoop()
{
    while (window->isOpen())
    {
        //Request for closing the window
        while(window->pollEvent(*event))
        {
            if(event->type == sf::Event::Closed)
            {
                window->close();
            }
        }
        Input();
        Update();
        Render();  
    }
    Destroy();
}

void Game::Render()
{
    window->clear(sf::Color::Black);
    Draw();
    window->display();
}

//Drawing sprites or geometry.
void Game::Draw()
{
    window->draw(*rectangle->GetShape());
    window->draw(*rectangle1->GetShape());
    window->draw(*rectangle2->GetShape());
    window->draw(*rectangle3->GetShape());
    window->draw(*rectangle4->GetShape());
    window->draw(*rectangle5->GetShape());
    window->draw(*rectangle6->GetShape());
    window->draw(*rectangle7->GetShape());
    window->draw(*rectangle8->GetShape());
    window->draw(*rectangle9->GetShape());
    window->draw(*rectangle10->GetShape());
    window->draw(*rectangle11->GetShape());
    window->draw(*rectangle11->GetShape());
    window->draw(*rectangle12->GetShape());
    window->draw(*rectangle13->GetShape());
    window->draw(*rectangle14->GetShape());
    window->draw(*rectangle15->GetShape());
    window->draw(*rectangle16->GetShape());
}

//Keyboard, joysticks, etc.
void Game::Input()
{

}

void Game::Destroy()
{
    delete window;
    delete event;
}