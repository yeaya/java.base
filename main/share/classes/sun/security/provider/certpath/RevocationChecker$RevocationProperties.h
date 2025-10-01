#ifndef _sun_security_provider_certpath_RevocationChecker$RevocationProperties_h_
#define _sun_security_provider_certpath_RevocationChecker$RevocationProperties_h_
//$ class sun.security.provider.certpath.RevocationChecker$RevocationProperties
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class RevocationChecker$RevocationProperties : public ::java::lang::Object {
	$class(RevocationChecker$RevocationProperties, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RevocationChecker$RevocationProperties();
	void init$();
	bool onlyEE = false;
	bool ocspEnabled = false;
	bool crlDPEnabled = false;
	$String* ocspUrl = nullptr;
	$String* ocspSubject = nullptr;
	$String* ocspIssuer = nullptr;
	$String* ocspSerial = nullptr;
	bool ocspNonce = false;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_RevocationChecker$RevocationProperties_h_