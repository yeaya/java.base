#ifndef _URItoURLTest_h_
#define _URItoURLTest_h_
//$ class URItoURLTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export URItoURLTest : public ::java::lang::Object {
	$class(URItoURLTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	URItoURLTest();
	void init$();
	static bool equalsComponents($String* method, $String* comp1, $String* comp2);
	static void main($StringArray* args);
};

#endif // _URItoURLTest_h_