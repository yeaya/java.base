#ifndef _Tricky$Nested_h_
#define _Tricky$Nested_h_
//$ class Tricky$Nested
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Tricky;

class Tricky$Nested : public ::java::lang::Object {
	$class(Tricky$Nested, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Tricky$Nested();
	void init$();
	::Tricky* t = nullptr;
};

#endif // _Tricky$Nested_h_