#ifndef _sun_invoke_util_ValueConversions$Handles_h_
#define _sun_invoke_util_ValueConversions$Handles_h_
//$ class sun.invoke.util.ValueConversions$Handles
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CAST_REFERENCE")
#undef CAST_REFERENCE
#pragma push_macro("IGNORE")
#undef IGNORE
#pragma push_macro("EMPTY")
#undef EMPTY

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class ValueConversions$Handles : public ::java::lang::Object {
	$class(ValueConversions$Handles, 0, ::java::lang::Object)
public:
	ValueConversions$Handles();
	void init$();
	static ::java::lang::invoke::MethodHandle* CAST_REFERENCE;
	static ::java::lang::invoke::MethodHandle* IGNORE;
	static ::java::lang::invoke::MethodHandle* EMPTY;
};

		} // util
	} // invoke
} // sun

#pragma pop_macro("CAST_REFERENCE")
#pragma pop_macro("IGNORE")
#pragma pop_macro("EMPTY")

#endif // _sun_invoke_util_ValueConversions$Handles_h_