#ifndef _sun_security_util_DomainName$Rule_h_
#define _sun_security_util_DomainName$Rule_h_
//$ class sun.security.util.DomainName$Rule
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {
			class DomainName$Rule$Type;
			class RegisteredDomain$Type;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DomainName$Rule : public ::java::lang::Object {
	$class(DomainName$Rule, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DomainName$Rule();
	void init$($String* domain, ::sun::security::util::DomainName$Rule$Type* type, ::sun::security::util::RegisteredDomain$Type* auth);
	$String* domain = nullptr;
	::sun::security::util::DomainName$Rule$Type* type = nullptr;
	::sun::security::util::RegisteredDomain$Type* auth = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$Rule_h_