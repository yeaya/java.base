#ifndef _Unnamed_h_
#define _Unnamed_h_
//$ class Unnamed
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

class $export Unnamed : public ::java::lang::Object {
	$class(Unnamed, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Unnamed();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* lookup();
};

#endif // _Unnamed_h_