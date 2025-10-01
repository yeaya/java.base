#ifndef _jdk_internal_access_JavaNetHttpCookieAccess_h_
#define _jdk_internal_access_JavaNetHttpCookieAccess_h_
//$ interface jdk.internal.access.JavaNetHttpCookieAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaNetHttpCookieAccess : public ::java::lang::Object {
	$interface(JavaNetHttpCookieAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* header(::java::net::HttpCookie* cookie) {return nullptr;}
	virtual ::java::util::List* parse($String* header) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaNetHttpCookieAccess_h_