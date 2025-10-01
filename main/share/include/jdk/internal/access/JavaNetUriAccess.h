#ifndef _jdk_internal_access_JavaNetUriAccess_h_
#define _jdk_internal_access_JavaNetUriAccess_h_
//$ interface jdk.internal.access.JavaNetUriAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaNetUriAccess : public ::java::lang::Object {
	$interface(JavaNetUriAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::URI* create($String* scheme, $String* path) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaNetUriAccess_h_