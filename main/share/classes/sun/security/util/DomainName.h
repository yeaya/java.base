#ifndef _sun_security_util_DomainName_h_
#define _sun_security_util_DomainName_h_
//$ class sun.security.util.DomainName
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DomainName$Match;
			class RegisteredDomain;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class DomainName : public ::java::lang::Object {
	$class(DomainName, 0, ::java::lang::Object)
public:
	DomainName();
	void init$();
	static ::sun::security::util::DomainName$Match* getMatch($String* domain);
	static ::sun::security::util::RegisteredDomain* registeredDomain($String* domain);
	static ::java::util::Map* cache;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DomainName_h_