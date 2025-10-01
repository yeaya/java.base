#ifndef _jdk_internal_access_JavaNetURLAccess_h_
#define _jdk_internal_access_JavaNetURLAccess_h_
//$ interface jdk.internal.access.JavaNetURLAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
		class URLStreamHandler;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaNetURLAccess : public ::java::lang::Object {
	$interface(JavaNetURLAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::net::URLStreamHandler* getHandler(::java::net::URL* u) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaNetURLAccess_h_