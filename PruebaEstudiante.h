#ifndef PRUEBAESTUDIANTE_H
#define PRUEBAESTUDIANTE_H
#include <cppunit/extensions/HelperMacros.h>
#include "Estudiante.h"
#include "Curso.h"

class PruebaEstudiante : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(PruebaEstudiante);
    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testRatings);
    CPPUNIT_TEST_SUITE_END();
public:
    void setUp();
    void tearDown();
    void testConstructor();
    void testRatings();
};
#endif /* PRUEBAESTUDIANTE_H */
