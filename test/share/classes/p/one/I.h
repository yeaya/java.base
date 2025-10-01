#ifndef _p_one_I_h_
#define _p_one_I_h_
//$ interface p.one.I
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace p {
	namespace one {

class $export I : public ::java::lang::Object {
	$interface(I, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t m();
	virtual void run() {}
};

	} // one
} // p

#endif // _p_one_I_h_