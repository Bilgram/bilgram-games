  
#ifndef GDTEST_HPP
#define GDTEST_HPP

#include <Godot.hpp>
#include <Node2D.hpp>

namespace godot {

class GDTest : public Node2D {
	GODOT_CLASS(GDTest, Node2D)

public:
	static void _register_methods();

	void _init();

	String a_method();

};

}

#endif /* !GDTEST_HPP */