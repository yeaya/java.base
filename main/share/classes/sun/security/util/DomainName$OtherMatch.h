#ifndef _sun_security_util_DomainName$OtherMatch_h_
#define _sun_security_util_DomainName$OtherMatch_h_
//$ class sun.security.util.DomainName$OtherMatch
//$ extends sun.security.util.DomainName$Match

#include <sun/security/util/DomainName$Match.h>

namespace java {
	namespace util {
		class LinkedList;
	}
}
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

class DomainName$OtherMatch : public ::sun::security::util::DomainName$Match {
	$class(DomainName$OtherMatch, $NO_CLASS_INIT, ::sun::security::util::DomainName$Match)
public:
	DomainName$OtherMatch();
	void init$(::sun::security::util::DomainName$Rule* rule, int32_t numLabels, ::java::util::LinkedList* target);
	$String* getSuffixes(int32_t n);
	virtual ::sun::security::util::RegisteredDomain* registeredDomain() override;
	virtual ::sun::security::util::DomainName$Rule$Type* type() override;
	::sun::security::util::DomainName$Rule* rule = nullptr;
	int32_t numLabels = 0;
	::java::util::LinkedList* target = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$OtherMatch_h_