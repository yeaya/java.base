#ifndef _sun_security_util_DomainName$RegisteredDomainImpl_h_
#define _sun_security_util_DomainName$RegisteredDomainImpl_h_
//$ class sun.security.util.DomainName$RegisteredDomainImpl
//$ extends sun.security.util.RegisteredDomain

#include <sun/security/util/RegisteredDomain.h>

namespace sun {
	namespace security {
		namespace util {
			class RegisteredDomain$Type;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DomainName$RegisteredDomainImpl : public ::sun::security::util::RegisteredDomain {
	$class(DomainName$RegisteredDomainImpl, $NO_CLASS_INIT, ::sun::security::util::RegisteredDomain)
public:
	DomainName$RegisteredDomainImpl();
	void init$($String* name, ::sun::security::util::RegisteredDomain$Type* type, $String* publicSuffix);
	virtual $String* name() override;
	virtual $String* publicSuffix() override;
	virtual ::sun::security::util::RegisteredDomain$Type* type() override;
	$String* name$ = nullptr;
	::sun::security::util::RegisteredDomain$Type* type$ = nullptr;
	$String* publicSuffix$ = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$RegisteredDomainImpl_h_