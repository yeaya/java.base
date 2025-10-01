#ifndef _pkg2_NonPublicClass_h_
#define _pkg2_NonPublicClass_h_
//$ class pkg2.NonPublicClass
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace pkg2 {

class NonPublicClass : public ::java::lang::Object {
	$class(NonPublicClass, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NonPublicClass();
	void init$();
};

} // pkg2

#endif // _pkg2_NonPublicClass_h_