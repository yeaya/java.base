#ifndef _Factory_h_
#define _Factory_h_
//$ class Factory
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Factory : public ::java::lang::Object {
	$class(Factory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Factory();
	void init$();
	static void main($StringArray* args);
};

#endif // _Factory_h_