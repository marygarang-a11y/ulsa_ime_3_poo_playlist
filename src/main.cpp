
#include <iostream>
#include "Playlist.h"

int main() {
    std::cout << "Practica 1: Playlist de musica" << std::endl;

    // TODO 5.1: Crear la biblioteca
    Cancion cancion1("Perfect", 4, 23, "Ed Sheeran", "Pop");
    Cancion cancion2("Imagine", 3, 7, "John Lennon", "Rock");
    Cancion cancion3("Halo", 4, 21, "Beyonce", "Pop");

    Podcast podcast1("Technology Today", 30, 0,
                     "John Smith", 1);

    // TODO 5.2: Crear dos playlists
    Playlist playlist1("Mis favoritas");
    Playlist playlist2("Musica para estudiar");

    // Agregar pistas a la primera playlist
    playlist1.agregarCancion(&cancion1);
    playlist1.agregarCancion(&cancion2);
    playlist1.agregarPodcast(&podcast1);

    // Agregar pistas a la segunda playlist
    playlist2.agregarCancion(&cancion1);  // Cancion compartida
    playlist2.agregarCancion(&cancion3);

    // TODO 5.3: Mostrar ambas playlists
    std::cout << "\n===== PLAYLIST 1 =====" << std::endl;
    playlist1.mostrar();

    std::cout << "\n===== PLAYLIST 2 =====" << std::endl;
    playlist2.mostrar();

    return 0;
}