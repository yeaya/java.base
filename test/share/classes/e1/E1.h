#ifndef _e1_E1_h_
#define _e1_E1_h_
//$ class e1.E1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace e1 {

class $export E1 : public ::java::lang::Object {
	$class(E1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	E1();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
};

} // e1

#endif // _e1_E1_h_