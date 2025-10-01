#ifndef _java_net_URLClassLoader$2_h_
#define _java_net_URLClassLoader$2_h_
//$ class java.net.URLClassLoader$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URLClassLoader;
	}
}

namespace java {
	namespace net {

class URLClassLoader$2 : public ::java::security::PrivilegedAction {
	$class(URLClassLoader$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	URLClassLoader$2();
	void init$(::java::net::URLClassLoader* this$0, $String* val$name);
	virtual $Object* run() override;
	::java::net::URLClassLoader* this$0 = nullptr;
	$String* val$name = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader$2_h_