#ifndef _PublicConstructor_h_
#define _PublicConstructor_h_
//$ class PublicConstructor
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export PublicConstructor : public ::java::lang::Object {
	$class(PublicConstructor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PublicConstructor();
	void init$();
	static void assertEquals($String* s, $String* expected);
	static void main($StringArray* args);
	static void testConstructor();
	static void testConstructorWithModule();
};

#endif // _PublicConstructor_h_