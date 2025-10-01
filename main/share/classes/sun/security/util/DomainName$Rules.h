#ifndef _sun_security_util_DomainName$Rules_h_
#define _sun_security_util_DomainName$Rules_h_
//$ class sun.security.util.DomainName$Rules
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class LinkedList;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipInputStream;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DomainName$Match;
			class DomainName$Rules$RuleSet;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DomainName$Rules : public ::java::lang::Object {
	$class(DomainName$Rules, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DomainName$Rules();
	void init$(::java::io::InputStream* is);
	static ::sun::security::util::DomainName$Rules* createRules($String* tld);
	static ::java::io::InputStream* getPubSuffixStream();
	::sun::security::util::DomainName$Rules$RuleSet* getRuleSet(int32_t index);
	static ::sun::security::util::DomainName$Rules* getRules($String* domain);
	static ::sun::security::util::DomainName$Rules* getRules($String* tld, ::java::util::zip::ZipInputStream* zis);
	static $String* getTopLevelDomain($String* domain);
	static ::sun::security::util::DomainName$Rules* lambda$getRules$0($String* tld, $String* k);
	virtual ::sun::security::util::DomainName$Match* match($String* domain);
	::java::util::LinkedList* ruleSets = nullptr;
	bool hasExceptions = false;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName$Rules_h_