#ifndef _sun_security_util_ManifestEntryVerifier$SunProviderHolder_h_
#define _sun_security_util_ManifestEntryVerifier$SunProviderHolder_h_
//$ class sun.security.util.ManifestEntryVerifier$SunProviderHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Provider;
	}
}

namespace sun {
	namespace security {
		namespace util {

class ManifestEntryVerifier$SunProviderHolder : public ::java::lang::Object {
	$class(ManifestEntryVerifier$SunProviderHolder, 0, ::java::lang::Object)
public:
	ManifestEntryVerifier$SunProviderHolder();
	void init$();
	static ::java::security::Provider* instance;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ManifestEntryVerifier$SunProviderHolder_h_