#ifndef _java_net_URLClassLoader$6_h_
#define _java_net_URLClassLoader$6_h_
//$ class java.net.URLClassLoader$6
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace net {

class URLClassLoader$6 : public ::java::security::PrivilegedAction {
	$class(URLClassLoader$6, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	URLClassLoader$6();
	void init$($Array<::java::net::URL>* val$urls, ::java::security::AccessControlContext* val$acc);
	virtual $Object* run() override;
	::java::security::AccessControlContext* val$acc = nullptr;
	$Array<::java::net::URL>* val$urls = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader$6_h_