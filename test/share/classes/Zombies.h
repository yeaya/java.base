#ifndef _Zombies_h_
#define _Zombies_h_
//$ class Zombies
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Zombies : public ::java::lang::Object {
	$class(Zombies, 0, ::java::lang::Object)
public:
	Zombies();
	void init$();
	static void main($StringArray* args);
	static $String* os;
	static $String* TrueCommand;
};

#endif // _Zombies_h_