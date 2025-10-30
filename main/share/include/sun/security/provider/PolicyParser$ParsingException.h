#ifndef _sun_security_provider_PolicyParser$ParsingException_h_
#define _sun_security_provider_PolicyParser$ParsingException_h_
//$ class sun.security.provider.PolicyParser$ParsingException
//$ extends java.security.GeneralSecurityException

#include <java/lang/Array.h>
#include <java/security/GeneralSecurityException.h>

namespace sun {
	namespace security {
		namespace util {
			class LocalizedMessage;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $import PolicyParser$ParsingException : public ::java::security::GeneralSecurityException {
	$class(PolicyParser$ParsingException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	PolicyParser$ParsingException();
	void init$($String* msg);
	void init$($String* msg, ::sun::security::util::LocalizedMessage* localizedMsg, $ObjectArray* source);
	void init$(int32_t line, $String* msg);
	void init$(int32_t line, $String* expect, $String* actual);
	virtual $String* getNonlocalizedMessage();
	static const int64_t serialVersionUID = (int64_t)0xC3E649F1A4029708;
	$String* i18nMessage = nullptr;
	::sun::security::util::LocalizedMessage* localizedMsg = nullptr;
	$ObjectArray* source = nullptr;
	PolicyParser$ParsingException(const PolicyParser$ParsingException& e);
	virtual void throw$() override;
	inline PolicyParser$ParsingException* operator ->() {
		return (PolicyParser$ParsingException*)throwing$;
	}
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyParser$ParsingException_h_