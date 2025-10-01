#ifndef _jdk_internal_access_JavaLangRefAccess_h_
#define _jdk_internal_access_JavaLangRefAccess_h_
//$ interface jdk.internal.access.JavaLangRefAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaLangRefAccess : public ::java::lang::Object {
	$interface(JavaLangRefAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void runFinalization() {}
	virtual bool waitForReferenceProcessing() {return false;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaLangRefAccess_h_