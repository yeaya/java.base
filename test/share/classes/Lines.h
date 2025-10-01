#ifndef _Lines_h_
#define _Lines_h_
//$ class Lines
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export Lines : public ::java::lang::Object {
	$class(Lines, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Lines();
	void init$();
	static void main($StringArray* arg);
	static void testLines();
	static void testString($String* string);
};

#endif // _Lines_h_