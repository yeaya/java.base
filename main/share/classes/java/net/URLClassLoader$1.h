#ifndef _java_net_URLClassLoader$1_h_
#define _java_net_URLClassLoader$1_h_
//$ class java.net.URLClassLoader$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace net {
		class URLClassLoader;
	}
}

namespace java {
	namespace net {

class URLClassLoader$1 : public ::java::security::PrivilegedExceptionAction {
	$class(URLClassLoader$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	URLClassLoader$1();
	void init$(::java::net::URLClassLoader* this$0, $String* val$name);
	virtual $Object* run() override;
	::java::net::URLClassLoader* this$0 = nullptr;
	$String* val$name = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader$1_h_