#ifndef _NonPublicStaticInitializer_h_
#define _NonPublicStaticInitializer_h_
//$ class NonPublicStaticInitializer
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export NonPublicStaticInitializer : public ::java::lang::Object {
	$class(NonPublicStaticInitializer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NonPublicStaticInitializer();
	void init$();
	static void main($StringArray* args);
};

#endif // _NonPublicStaticInitializer_h_