// Curso.h

#ifndef Curso_h
#define Curso_h

#include <string>

class Curso
{
 public:
  Curso();
  Curso(std::string n, int c);
  std::string obtenerNombreCurso();
  int obtenerCalificacionCurso();
 private:
  std::string nombre_curso;
  int calificacion;
};

#endif
