#ifndef _jdk_internal_misc_OSEnvironment_h_
#define _jdk_internal_misc_OSEnvironment_h_
//$ class jdk.internal.misc.OSEnvironment
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace misc {

class $export OSEnvironment : public ::java::lang::Object {
	$class(OSEnvironment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OSEnvironment();
	void init$();
	static void initialize();
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_OSEnvironment_h_