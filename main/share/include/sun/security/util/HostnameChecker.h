#ifndef _sun_security_util_HostnameChecker_h_
#define _sun_security_util_HostnameChecker_h_
//$ class sun.security.util.HostnameChecker
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TYPE_LDAP")
#undef TYPE_LDAP
#pragma push_macro("INSTANCE_LDAP")
#undef INSTANCE_LDAP
#pragma push_macro("ALTNAME_IP")
#undef ALTNAME_IP
#pragma push_macro("INSTANCE_TLS")
#undef INSTANCE_TLS
#pragma push_macro("TYPE_TLS")
#undef TYPE_TLS
#pragma push_macro("ALTNAME_DNS")
#undef ALTNAME_DNS

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class RegisteredDomain;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class X500Name;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import HostnameChecker : public ::java::lang::Object {
	$class(HostnameChecker, 0, ::java::lang::Object)
public:
	HostnameChecker();
	void init$(int8_t checkType);
	static ::sun::security::util::HostnameChecker* getInstance(int8_t checkType);
	static ::sun::security::x509::X500Name* getSubjectX500Name(::java::security::cert::X509Certificate* cert);
	static bool hasIllegalWildcard($String* template$, bool chainsToPublicCA);
	static bool isIpAddress($String* name);
	bool isMatched($String* name, $String* template$, bool chainsToPublicCA);
	static bool lambda$hasIllegalWildcard$0(::sun::security::util::RegisteredDomain* d);
	virtual void match($String* expectedName, ::java::security::cert::X509Certificate* cert, bool chainsToPublicCA);
	virtual void match($String* expectedName, ::java::security::cert::X509Certificate* cert);
	static bool matchAllWildcards($String* name, $String* template$);
	void matchDNS($String* expectedName, ::java::security::cert::X509Certificate* cert, bool chainsToPublicCA);
	static void matchIP($String* expectedIP, ::java::security::cert::X509Certificate* cert);
	static bool matchLeftmostWildcard($String* name, $String* template$);
	static bool matchWildCards($String* name, $String* template$);
	static const int8_t TYPE_TLS = 1;
	static ::sun::security::util::HostnameChecker* INSTANCE_TLS;
	static const int8_t TYPE_LDAP = 2;
	static ::sun::security::util::HostnameChecker* INSTANCE_LDAP;
	static const int32_t ALTNAME_DNS = 2;
	static const int32_t ALTNAME_IP = 7;
	int8_t checkType = 0;
};

		} // util
	} // security
} // sun

#pragma pop_macro("TYPE_LDAP")
#pragma pop_macro("INSTANCE_LDAP")
#pragma pop_macro("ALTNAME_IP")
#pragma pop_macro("INSTANCE_TLS")
#pragma pop_macro("TYPE_TLS")
#pragma pop_macro("ALTNAME_DNS")

#endif // _sun_security_util_HostnameChecker_h_