#ifndef _d1_D1_h_
#define _d1_D1_h_
//$ class d1.D1
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace d1 {

class $export D1 : public ::java::lang::Object {
	$class(D1, $NO_CLASS_INIT, ::java::lang::Object)
public:
	D1();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
};

} // d1

#endif // _d1_D1_h_