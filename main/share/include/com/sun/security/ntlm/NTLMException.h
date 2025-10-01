#ifndef _com_sun_security_ntlm_NTLMException_h_
#define _com_sun_security_ntlm_NTLMException_h_
//$ class com.sun.security.ntlm.NTLMException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

#pragma push_macro("AUTH_FAILED")
#undef AUTH_FAILED
#pragma push_macro("BAD_VERSION")
#undef BAD_VERSION
#pragma push_macro("PROTOCOL")
#undef PROTOCOL
#pragma push_macro("PACKET_READ_ERROR")
#undef PACKET_READ_ERROR
#pragma push_macro("NO_DOMAIN_INFO")
#undef NO_DOMAIN_INFO
#pragma push_macro("USER_UNKNOWN")
#undef USER_UNKNOWN

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

class $import NTLMException : public ::java::security::GeneralSecurityException {
	$class(NTLMException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	NTLMException();
	void init$(int32_t errorCode, $String* msg);
	int32_t errorCode();
	static const int64_t serialVersionUID = (int64_t)0xD2393BCB41A1466A;
	static const int32_t PACKET_READ_ERROR = 1;
	static const int32_t NO_DOMAIN_INFO = 2;
	static const int32_t USER_UNKNOWN = 3;
	static const int32_t AUTH_FAILED = 4;
	static const int32_t BAD_VERSION = 5;
	static const int32_t PROTOCOL = 6;
	int32_t errorCode$ = 0;
	NTLMException(const NTLMException& e);
	NTLMException wrapper$();
	virtual void throwWrapper$() override;
};

			} // ntlm
		} // security
	} // sun
} // com

#pragma pop_macro("AUTH_FAILED")
#pragma pop_macro("BAD_VERSION")
#pragma pop_macro("PROTOCOL")
#pragma pop_macro("PACKET_READ_ERROR")
#pragma pop_macro("NO_DOMAIN_INFO")
#pragma pop_macro("USER_UNKNOWN")

#endif // _com_sun_security_ntlm_NTLMException_h_