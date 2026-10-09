
#include "Podcast.h"

#include <iostream>

// Constructor de Podcast
Podcast::Podcast(const std::string& titulo, int min, int seg,
                 const std::string& anfitrion, int numeroEpisodio)
    : Pista(titulo, min, seg),
      anfitrion(anfitrion),
      numeroEpisodio(numeroEpisodio)
{
}

// Obtener el anfitrión
std::string Podcast::getAnfitrion() const
{
    return anfitrion;
}

// Obtener el número del episodio
int Podcast::getNumeroEpisodio() const
{
    return numeroEpisodio;
}

// Mostrar la información del podcast
void Podcast::mostrar() const
{
    mostrarInfo();

    std::cout << "Anfitrión: " << anfitrion
              << " | Episodio: " << numeroEpisodio
              << std::endl;
}
