#ifndef _sun_security_ssl_CertStatusExtension$CertStatusRequestType_h_
#define _sun_security_ssl_CertStatusExtension$CertStatusRequestType_h_
//$ class sun.security.ssl.CertStatusExtension$CertStatusRequestType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("OCSP")
#undef OCSP
#pragma push_macro("OCSP_MULTI")
#undef OCSP_MULTI

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$CertStatusRequestType : public ::java::lang::Enum {
	$class(CertStatusExtension$CertStatusRequestType, 0, ::java::lang::Enum)
public:
	CertStatusExtension$CertStatusRequestType();
	static $Array<::sun::security::ssl::CertStatusExtension$CertStatusRequestType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int8_t id, $String* name);
	static $String* nameOf(int8_t id);
	static ::sun::security::ssl::CertStatusExtension$CertStatusRequestType* valueOf($String* name);
	static ::sun::security::ssl::CertStatusExtension$CertStatusRequestType* valueOf(int8_t id);
	static $Array<::sun::security::ssl::CertStatusExtension$CertStatusRequestType>* values();
	static ::sun::security::ssl::CertStatusExtension$CertStatusRequestType* OCSP;
	static ::sun::security::ssl::CertStatusExtension$CertStatusRequestType* OCSP_MULTI;
	static $Array<::sun::security::ssl::CertStatusExtension$CertStatusRequestType>* $VALUES;
	int8_t id = 0;
	$String* name$ = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("OCSP")
#pragma pop_macro("OCSP_MULTI")

#endif // _sun_security_ssl_CertStatusExtension$CertStatusRequestType_h_