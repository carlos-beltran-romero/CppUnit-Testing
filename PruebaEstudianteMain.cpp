#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

int main(int argc, char* argv[]) {
CppUnit::Test* suite = CppUnit::TestFactoryRegistry::getRegistry().makeTest(); // We add test cases to the test suite
CppUnit::TextUi::TestRunner runner;
runner.addTest(suite); // We change the default output to the error output.
runner.setOutputter(new CppUnit::CompilerOutputter(&runner.result(), std::cerr)); // We run the tests
bool wasSuccessful = runner.run(); // If at least one of test cases fails, we return 1
return !wasSuccessful;

}

