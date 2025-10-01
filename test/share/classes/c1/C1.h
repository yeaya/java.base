#ifndef _c1_C1_h_
#define _c1_C1_h_
//$ class c1.C1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace c1 {

class $export C1 : public ::java::lang::Object {
	$class(C1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	C1();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
};

} // c1

#endif // _c1_C1_h_