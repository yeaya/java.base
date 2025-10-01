#ifndef _e1_NonPublic_h_
#define _e1_NonPublic_h_
//$ class e1.NonPublic
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace e1 {

class NonPublic : public ::java::lang::Object {
	$class(NonPublic, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NonPublic();
	void init$();
	static void publicStatic();
};

} // e1

#endif // _e1_NonPublic_h_