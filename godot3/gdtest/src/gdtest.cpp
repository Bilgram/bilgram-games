#include "gdtest.hpp"

using namespace godot;

void GDTest::_register_methods() {
	register_method("a_method", &GDTest::a_method);
}

void GDTest::_init() {

}

String GDTest::a_method(){
	return "Hello world";
}