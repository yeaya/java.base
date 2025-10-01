#ifndef _jdk_internal_access_foreign_NativeLibraryProxy_h_
#define _jdk_internal_access_foreign_NativeLibraryProxy_h_
//$ interface jdk.internal.access.foreign.NativeLibraryProxy
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {

class $export NativeLibraryProxy : public ::java::lang::Object {
	$interface(NativeLibraryProxy, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t lookup($String* name) {return 0;}
};

			} // foreign
		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_foreign_NativeLibraryProxy_h_