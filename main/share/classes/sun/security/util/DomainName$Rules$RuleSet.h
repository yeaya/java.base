#ifndef _sun_security_util_DomainName$Rules$RuleSet_h_
#define _sun_security_util_DomainName$Rules$RuleSet_h_
//$ class sun.security.util.DomainName$Rules$RuleSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AUTHS")
#undef AUTHS

namespace java {
	namespace util {
		class LinkedList;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DomainName$Match;
			class DomainName$Rule;
			class RegisteredDomain$Type;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DomainName$Rules$RuleSet : public ::java::lang::Object {
	$class(DomainName$Rules$RuleSet, 0, ::java::lang::Object)
public:
	DomainName$Rules$RuleSet();
	void init$(int32_t n);
	virtual void addRule(int32_t auth, $String* rule);
	static int32_t labels($String* s, int32_t n);
	virtual ::sun::security::util::DomainName$Match* match($String* domain);
	::sun::security::util::DomainName$Match* matchException($String* domain, ::sun::security::util::DomainName$Rule* rule);
	::sun::security::util::DomainName$Match* matchNormal($String* domain, ::sun::security::util::DomainName$Rule* rule);
	::sun::security::util::DomainName$Match* matchOther($String* domain, ::sun::security::util::DomainName$Rule* rule);
	::sun::security::util::DomainName$Match* matchWildcard($String* domain, ::sun::security::util::DomainName$Rule* rule);
	static int32_t numLabels($String* rule);
	static ::java::util::LinkedList* split($String* rule);
	int32_t numLabels$ = 0;
	::java::util::Set* rules = nullptr;
	bool hasExceptions = false;
	static $Array<::sun::security::util::RegisteredDomain$Type>* AUTHS;
};

		} // util
	} // security
} // sun

#pragma pop_macro("AUTHS")

#endif // _sun_security_util_DomainName$Rules$RuleSet_h_