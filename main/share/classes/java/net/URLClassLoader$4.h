#ifndef _java_net_URLClassLoader$4_h_
#define _java_net_URLClassLoader$4_h_
//$ class java.net.URLClassLoader$4
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class SecurityManager;
	}
}
namespace java {
	namespace net {
		class URLClassLoader;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}

namespace java {
	namespace net {

class URLClassLoader$4 : public ::java::security::PrivilegedAction {
	$class(URLClassLoader$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	URLClassLoader$4();
	void init$(::java::net::URLClassLoader* this$0, ::java::lang::SecurityManager* val$sm, ::java::security::Permission* val$fp);
	virtual $Object* run() override;
	::java::net::URLClassLoader* this$0 = nullptr;
	::java::security::Permission* val$fp = nullptr;
	::java::lang::SecurityManager* val$sm = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader$4_h_