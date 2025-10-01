#ifndef _jdk_internal_access_JavaAWTAccess_h_
#define _jdk_internal_access_JavaAWTAccess_h_
//$ interface jdk.internal.access.JavaAWTAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaAWTAccess : public ::java::lang::Object {
	$interface(JavaAWTAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getAppletContext() {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaAWTAccess_h_