#include "PruebaEstudiante.h"


CPPUNIT_TEST_SUITE_REGISTRATION(PruebaEstudiante);

void PruebaEstudiante::setUp() {
}

void PruebaEstudiante::tearDown() {
}



void PruebaEstudiante::testConstructor() {
    const std::string nombre = "Juan";
    const std::string numero = "12345";
    Estudiante e(nombre, numero);
    CPPUNIT_ASSERT(e.obtenerNombreEstudiante() == nombre);
    CPPUNIT_ASSERT(e.obtenerNumeroEstudiante() == numero);
    
}



void PruebaEstudiante::testRatings() {
    const std::string nombre = "Juan";
    const std::string numero = "12345";
    Estudiante e(nombre, numero);
    e.asignarCalificacion("Matematicas", 9);
    e.asignarCalificacion("Fisica", 8);
    e.asignarCalificacion("Quimica", 7);
    CPPUNIT_ASSERT(e.obtenerCalificacion("Matematicas") == 9);
    CPPUNIT_ASSERT(e.obtenerCalificacion("Fisica") == 8);
    CPPUNIT_ASSERT(e.obtenerCalificacion("Quimica") == 7);
    CPPUNIT_ASSERT(e.obtenerCalificacion("Programacion") == -1);
}