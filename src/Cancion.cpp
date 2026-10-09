
#include "Cancion.h"

#include <iostream>

// Constructor de Cancion
Cancion::Cancion(const std::string& titulo, int min, int seg,
                 const std::string& artista, const std::string& genero)
    : Pista(titulo, min, seg),
      artista(artista),
      genero(genero)
{
}

// Obtener el artista
std::string Cancion::getArtista() const
{
    return artista;
}

// Obtener el género
std::string Cancion::getGenero() const
{
    return genero;
}

// Mostrar la información de la canción
void Cancion::mostrar() const
{
    mostrarInfo();

    std::cout << "Artista: " << artista
              << " | Género: " << genero
              << std::endl;
}
