#ifndef _java_net_URLClassLoader$5_h_
#define _java_net_URLClassLoader$5_h_
//$ class java.net.URLClassLoader$5
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
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

class URLClassLoader$5 : public ::java::security::PrivilegedAction {
	$class(URLClassLoader$5, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	URLClassLoader$5();
	void init$($Array<::java::net::URL>* val$urls, ::java::lang::ClassLoader* val$parent, ::java::security::AccessControlContext* val$acc);
	virtual $Object* run() override;
	::java::security::AccessControlContext* val$acc = nullptr;
	::java::lang::ClassLoader* val$parent = nullptr;
	$Array<::java::net::URL>* val$urls = nullptr;
};

	} // net
} // java

#endif // _java_net_URLClassLoader$5_h_