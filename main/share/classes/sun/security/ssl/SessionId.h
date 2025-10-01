#ifndef _sun_security_ssl_SessionId_h_
#define _sun_security_ssl_SessionId_h_
//$ class sun.security.ssl.SessionId
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_LENGTH")
#undef MAX_LENGTH

namespace java {
	namespace security {
		class SecureRandom;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SessionId : public ::java::lang::Object {
	$class(SessionId, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SessionId();
	void init$(bool isRejoinable, ::java::security::SecureRandom* generator);
	void init$($bytes* sessionId);
	void checkLength(int32_t protocolVersion);
	virtual bool equals(Object$* obj) override;
	$bytes* getId();
	virtual int32_t hashCode() override;
	int32_t length();
	virtual $String* toString() override;
	static const int32_t MAX_LENGTH = 32;
	$bytes* sessionId = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("MAX_LENGTH")

#endif // _sun_security_ssl_SessionId_h_