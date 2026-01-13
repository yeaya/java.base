#ifndef _sun_security_validator_EndEntityChecker_h_
#define _sun_security_validator_EndEntityChecker_h_
//$ class sun.security.validator.EndEntityChecker
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("KU_KEY_AGREEMENT")
#undef KU_KEY_AGREEMENT
#pragma push_macro("KU_KEY_ENCIPHERMENT")
#undef KU_KEY_ENCIPHERMENT
#pragma push_macro("KU_SERVER_ENCRYPTION")
#undef KU_SERVER_ENCRYPTION
#pragma push_macro("KU_SERVER_KEY_AGREEMENT")
#undef KU_SERVER_KEY_AGREEMENT
#pragma push_macro("KU_SERVER_SIGNATURE")
#undef KU_SERVER_SIGNATURE
#pragma push_macro("KU_SIGNATURE")
#undef KU_SIGNATURE
#pragma push_macro("NSCT_CODE_SIGNING")
#undef NSCT_CODE_SIGNING
#pragma push_macro("NSCT_SSL_CLIENT")
#undef NSCT_SSL_CLIENT
#pragma push_macro("NSCT_SSL_SERVER")
#undef NSCT_SSL_SERVER
#pragma push_macro("OID_EKU_ANY_USAGE")
#undef OID_EKU_ANY_USAGE
#pragma push_macro("OID_EKU_CODE_SIGNING")
#undef OID_EKU_CODE_SIGNING
#pragma push_macro("OID_EKU_MS_SGC")
#undef OID_EKU_MS_SGC
#pragma push_macro("OID_EKU_NS_SGC")
#undef OID_EKU_NS_SGC
#pragma push_macro("OID_EKU_TIME_STAMPING")
#undef OID_EKU_TIME_STAMPING
#pragma push_macro("OID_EKU_TLS_CLIENT")
#undef OID_EKU_TLS_CLIENT
#pragma push_macro("OID_EKU_TLS_SERVER")
#undef OID_EKU_TLS_SERVER
#pragma push_macro("OID_EXTENDED_KEY_USAGE")
#undef OID_EXTENDED_KEY_USAGE
#pragma push_macro("OID_SUBJECT_ALT_NAME")
#undef OID_SUBJECT_ALT_NAME

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace validator {

class EndEntityChecker : public ::java::lang::Object {
	$class(EndEntityChecker, 0, ::java::lang::Object)
public:
	EndEntityChecker();
	void init$($String* type, $String* variant);
	virtual void check($Array<::java::security::cert::X509Certificate>* chain, Object$* parameter, bool checkUnresolvedCritExts);
	void checkCodeSigning(::java::security::cert::X509Certificate* cert, ::java::util::Set* exts);
	bool checkEKU(::java::security::cert::X509Certificate* cert, ::java::util::Set* exts, $String* expectedEKU);
	bool checkKeyUsage(::java::security::cert::X509Certificate* cert, int32_t bit);
	void checkRemainingExtensions(::java::util::Set* exts);
	void checkTLSClient(::java::security::cert::X509Certificate* cert, ::java::util::Set* exts);
	void checkTLSServer(::java::security::cert::X509Certificate* cert, $String* parameter, ::java::util::Set* exts);
	void checkTSAServer(::java::security::cert::X509Certificate* cert, ::java::util::Set* exts);
	::java::util::Set* getCriticalExtensions(::java::security::cert::X509Certificate* cert);
	static ::sun::security::validator::EndEntityChecker* getInstance($String* type, $String* variant);
	static $String* OID_EXTENDED_KEY_USAGE;
	static $String* OID_EKU_TLS_SERVER;
	static $String* OID_EKU_TLS_CLIENT;
	static $String* OID_EKU_CODE_SIGNING;
	static $String* OID_EKU_TIME_STAMPING;
	static $String* OID_EKU_ANY_USAGE;
	static $String* OID_EKU_NS_SGC;
	static $String* OID_EKU_MS_SGC;
	static $String* OID_SUBJECT_ALT_NAME;
	static $String* NSCT_SSL_CLIENT;
	static $String* NSCT_SSL_SERVER;
	static $String* NSCT_CODE_SIGNING;
	static const int32_t KU_SIGNATURE = 0;
	static const int32_t KU_KEY_ENCIPHERMENT = 2;
	static const int32_t KU_KEY_AGREEMENT = 4;
	static ::java::util::Collection* KU_SERVER_SIGNATURE;
	static ::java::util::Collection* KU_SERVER_ENCRYPTION;
	static ::java::util::Collection* KU_SERVER_KEY_AGREEMENT;
	$String* variant = nullptr;
	$String* type = nullptr;
};

		} // validator
	} // security
} // sun

#pragma pop_macro("KU_KEY_AGREEMENT")
#pragma pop_macro("KU_KEY_ENCIPHERMENT")
#pragma pop_macro("KU_SERVER_ENCRYPTION")
#pragma pop_macro("KU_SERVER_KEY_AGREEMENT")
#pragma pop_macro("KU_SERVER_SIGNATURE")
#pragma pop_macro("KU_SIGNATURE")
#pragma pop_macro("NSCT_CODE_SIGNING")
#pragma pop_macro("NSCT_SSL_CLIENT")
#pragma pop_macro("NSCT_SSL_SERVER")
#pragma pop_macro("OID_EKU_ANY_USAGE")
#pragma pop_macro("OID_EKU_CODE_SIGNING")
#pragma pop_macro("OID_EKU_MS_SGC")
#pragma pop_macro("OID_EKU_NS_SGC")
#pragma pop_macro("OID_EKU_TIME_STAMPING")
#pragma pop_macro("OID_EKU_TLS_CLIENT")
#pragma pop_macro("OID_EKU_TLS_SERVER")
#pragma pop_macro("OID_EXTENDED_KEY_USAGE")
#pragma pop_macro("OID_SUBJECT_ALT_NAME")

#endif // _sun_security_validator_EndEntityChecker_h_