#ifndef _sun_security_x509_NetscapeCertTypeExtension$MapEntry_h_
#define _sun_security_x509_NetscapeCertTypeExtension$MapEntry_h_
//$ class sun.security.x509.NetscapeCertTypeExtension$MapEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace x509 {

class NetscapeCertTypeExtension$MapEntry : public ::java::lang::Object {
	$class(NetscapeCertTypeExtension$MapEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NetscapeCertTypeExtension$MapEntry();
	void init$($String* name, int32_t position);
	$String* mName = nullptr;
	int32_t mPosition = 0;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_NetscapeCertTypeExtension$MapEntry_h_