#ifndef _sun_security_rsa_SunRsaSign_h_
#define _sun_security_rsa_SunRsaSign_h_
//$ class sun.security.rsa.SunRsaSign
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace java {
	namespace util {
		class Iterator;
	}
}

namespace sun {
	namespace security {
		namespace rsa {

class $import SunRsaSign : public ::java::security::Provider {
	$class(SunRsaSign, $NO_CLASS_INIT, ::java::security::Provider)
public:
	SunRsaSign();
	using ::java::security::Provider::getProperty;
	void init$();
	using ::java::security::Provider::load;
	void putEntries(::java::util::Iterator* i);
	static const int64_t serialVersionUID = (int64_t)0x0C04CB0EFA3F06D5;
};

		} // rsa
	} // security
} // sun

#endif // _sun_security_rsa_SunRsaSign_h_