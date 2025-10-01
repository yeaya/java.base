#ifndef _sun_misc_Test4misc_h_
#define _sun_misc_Test4misc_h_
//$ class sun.misc.Test4misc
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOOKUP")
#undef LOOKUP

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandles$Lookup;
		}
	}
}

namespace sun {
	namespace misc {

class $export Test4misc : public ::java::lang::Object {
	$class(Test4misc, 0, ::java::lang::Object)
public:
	Test4misc();
	void init$();
	static ::java::lang::invoke::MethodHandles$Lookup* LOOKUP;
};

	} // misc
} // sun

#pragma pop_macro("LOOKUP")

#endif // _sun_misc_Test4misc_h_