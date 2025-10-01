#ifndef _sun_security_util_DomainName$Match_h_
#define _sun_security_util_DomainName$Match_h_
//$ interface sun.security.util.DomainName$Match
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class DomainName$Rule$Type;
			class RegisteredDomain;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DomainName$Match : public ::java::lang::Object {
	$interface(DomainName$Match, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::security::util::RegisteredDomain* registeredDomain() {return nullptr;}
	virtual ::sun::security::util::DomainName$Rule$Type* type() {return nullptr;}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$Match_h_