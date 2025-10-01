#ifndef _jdk_internal_loader_NativeLibrary_h_
#define _jdk_internal_loader_NativeLibrary_h_
//$ interface jdk.internal.loader.NativeLibrary
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace loader {

class $export NativeLibrary : public ::java::lang::Object {
	$interface(NativeLibrary, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t find($String* name) {return 0;}
	virtual int64_t lookup($String* name);
	virtual $String* name() {return nullptr;}
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_NativeLibrary_h_