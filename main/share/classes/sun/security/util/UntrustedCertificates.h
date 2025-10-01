#ifndef _sun_security_util_UntrustedCertificates_h_
#define _sun_security_util_UntrustedCertificates_h_
//$ class sun.security.util.UntrustedCertificates
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALGORITHM_KEY")
#undef ALGORITHM_KEY

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Properties;
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

class $export UntrustedCertificates : public ::java::lang::Object {
	$class(UntrustedCertificates, 0, ::java::lang::Object)
public:
	UntrustedCertificates();
	void init$();
	static bool isUntrusted(::java::security::cert::X509Certificate* cert);
	static ::sun::security::util::Debug* debug;
	static $String* ALGORITHM_KEY;
	static ::java::util::Properties* props;
	static $String* algorithm;
};

		} // util
	} // security
} // sun

#pragma pop_macro("ALGORITHM_KEY")

#endif // _sun_security_util_UntrustedCertificates_h_