// Curso.cpp

#include "Curso.h"

Curso::Curso(): nombre_curso(""), calificacion(-1) {}

Curso::Curso(std::string n, int c):nombre_curso(n), calificacion(c) {}

std::string Curso::obtenerNombreCurso() {return nombre_curso;}

int Curso::obtenerCalificacionCurso() {return calificacion;}
