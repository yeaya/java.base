#ifndef _sun_security_util_AnchorCertificates_h_
#define _sun_security_util_AnchorCertificates_h_
//$ class sun.security.util.AnchorCertificates
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HASH")
#undef HASH

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export AnchorCertificates : public ::java::lang::Object {
	$class(AnchorCertificates, 0, ::java::lang::Object)
public:
	AnchorCertificates();
	void init$();
	static bool contains(::java::security::cert::X509Certificate* cert);
	static bool issuerOf(::java::security::cert::X509Certificate* cert);
	static ::sun::security::util::Debug* debug;
	static $String* HASH;
	static ::java::util::Set* certs;
	static ::java::util::Set* certIssuers;
};

		} // util
	} // security
} // sun

#pragma pop_macro("HASH")

#endif // _sun_security_util_AnchorCertificates_h_