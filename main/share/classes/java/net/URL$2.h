#ifndef _java_net_URL$2_h_
#define _java_net_URL$2_h_
//$ class java.net.URL$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {

class URL$2 : public ::java::security::PrivilegedAction {
	$class(URL$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	URL$2();
	void init$($String* val$protocol);
	virtual $Object* run() override;
	$String* val$protocol = nullptr;
};

	} // net
} // java

#endif // _java_net_URL$2_h_