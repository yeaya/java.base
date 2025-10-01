#ifndef _sun_security_util_DomainName$Rules$1_h_
#define _sun_security_util_DomainName$Rules$1_h_
//$ class sun.security.util.DomainName$Rules$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace security {
		namespace util {

class DomainName$Rules$1 : public ::java::security::PrivilegedAction {
	$class(DomainName$Rules$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DomainName$Rules$1();
	void init$();
	virtual $Object* run() override;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$Rules$1_h_