#ifndef _sun_security_util_RegisteredDomain_h_
#define _sun_security_util_RegisteredDomain_h_
//$ interface sun.security.util.RegisteredDomain
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Optional;
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

class $export RegisteredDomain : public ::java::lang::Object {
	$interface(RegisteredDomain, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static ::java::util::Optional* from($String* domain);
	virtual $String* name() {return nullptr;}
	virtual $String* publicSuffix() {return nullptr;}
	virtual ::sun::security::util::RegisteredDomain$Type* type() {return nullptr;}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_RegisteredDomain_h_