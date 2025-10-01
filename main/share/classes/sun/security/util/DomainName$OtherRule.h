#ifndef _sun_security_util_DomainName$OtherRule_h_
#define _sun_security_util_DomainName$OtherRule_h_
//$ class sun.security.util.DomainName$OtherRule
//$ extends sun.security.util.DomainName$Rule

#include <sun/security/util/DomainName$Rule.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class DomainName$OtherRule : public ::sun::security::util::DomainName$Rule {
	$class(DomainName$OtherRule, $NO_CLASS_INIT, ::sun::security::util::DomainName$Rule)
public:
	DomainName$OtherRule();
	void init$($String* domain, ::sun::security::util::RegisteredDomain$Type* auth, ::java::util::List* labels);
	::java::util::List* labels = nullptr;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$OtherRule_h_