#include "Estudiante.h"

Estudiante::Estudiante(std::string n, std::string num):nombre(n), numero(num)
{
  numero_cursos = 0;
}

std::string Estudiante::obtenerNombreEstudiante() {return nombre;}

std::string Estudiante::obtenerNumeroEstudiante() {return numero;}

void Estudiante::asignarCalificacion(std::string curso, int calif)
{
  if (numero_cursos == MAXNUMCURSOSPORESTUDIANTE)
  {
    std::cout << "¡Has superado el numero maximo de cursos!\n"; 
    return;
  }

  Curso c(curso, calif);
  curso_calificaciones[numero_cursos++] = c;
}

int Estudiante::obtenerCalificacion(std::string curso)
{
  int i = 0;
  
  while (i < numero_cursos)
  {
    if (curso_calificaciones[i].obtenerNombreCurso() == curso)  
      return (curso_calificaciones[i].obtenerCalificacionCurso());
    i++;
  }

  return -1;
}
