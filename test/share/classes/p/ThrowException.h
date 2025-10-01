#ifndef _p_ThrowException_h_
#define _p_ThrowException_h_
//$ class p.ThrowException
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p {

class $export ThrowException : public ::java::lang::Object {
	$class(ThrowException, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ThrowException();
	void init$();
	static void throwError();
};

} // p

#endif // _p_ThrowException_h_