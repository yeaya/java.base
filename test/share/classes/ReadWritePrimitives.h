#ifndef _ReadWritePrimitives_h_
#define _ReadWritePrimitives_h_
//$ class ReadWritePrimitives
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export ReadWritePrimitives : public ::java::lang::Object {
	$class(ReadWritePrimitives, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReadWritePrimitives();
	void init$();
	static void main($StringArray* args);
	static void testChar();
	static void testInt();
	static void testLong();
	static void testShort();
};

#endif // _ReadWritePrimitives_h_