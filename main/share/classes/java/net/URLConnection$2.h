#ifndef _java_net_URLConnection$2_h_
#define _java_net_URLConnection$2_h_
//$ class java.net.URLConnection$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URLConnection;
	}
}

namespace java {
	namespace net {

class URLConnection$2 : public ::java::security::PrivilegedAction {
	$class(URLConnection$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	URLConnection$2();
	void init$(::java::net::URLConnection* this$0, $String* val$contentType);
	virtual $Object* run() override;
	::java::net::URLConnection* this$0 = nullptr;
	$String* val$contentType = nullptr;
};

	} // net
} // java

#endif // _java_net_URLConnection$2_h_