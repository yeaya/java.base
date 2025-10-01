#ifndef _java_net_URLClassLoader$3$1_h_
#define _java_net_URLClassLoader$3$1_h_
//$ class java.net.URLClassLoader$3$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URLClassLoader$3;
	}
}

namespace java {
	namespace net {

class URLClassLoader$3$1 : public ::java::security::PrivilegedAction {
	$class(URLClassLoader$3$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	URLClassLoader$3$1();
	void init$(::java::net::URLClassLoader$3* this$1);
	virtual $Object* run() override;
	::java::net::URLClassLoader$3* this$1 = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader$3$1_h_