#ifndef _sun_security_util_DomainName$CommonMatch_h_
#define _sun_security_util_DomainName$CommonMatch_h_
//$ class sun.security.util.DomainName$CommonMatch
//$ extends sun.security.util.DomainName$Match

#include <sun/security/util/DomainName$Match.h>

namespace sun {
	namespace security {
		namespace util {
			class DomainName$Rule;
			class DomainName$Rule$Type;
			class RegisteredDomain;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DomainName$CommonMatch : public ::sun::security::util::DomainName$Match {
	$class(DomainName$CommonMatch, $NO_CLASS_INIT, ::sun::security::util::DomainName$Match)
public:
	DomainName$CommonMatch();
	void init$($String* domain, ::sun::security::util::DomainName$Rule* rule, int32_t publicSuffix);
	virtual ::sun::security::util::RegisteredDomain* registeredDomain() override;
	virtual ::sun::security::util::DomainName$Rule$Type* type() override;
	$String* domain = nullptr;
	int32_t publicSuffix = 0;
	int32_t registeredDomain$ = 0;
	::sun::security::util::DomainName$Rule* rule = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$CommonMatch_h_