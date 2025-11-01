#ifndef _TestASIF_h_
#define _TestASIF_h_
//$ interface TestASIF
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}

class TestASIF : public ::java::lang::Object {
	$interface(TestASIF, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::CharSequence* get() {return nullptr;}
};

#endif // _TestASIF_h_