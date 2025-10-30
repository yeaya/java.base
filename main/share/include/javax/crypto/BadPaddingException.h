#ifndef _javax_crypto_BadPaddingException_h_
#define _javax_crypto_BadPaddingException_h_
//$ class javax.crypto.BadPaddingException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace javax {
	namespace crypto {

class $import BadPaddingException : public ::java::security::GeneralSecurityException {
	$class(BadPaddingException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	BadPaddingException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xB63D34D56BE10A85;
	BadPaddingException(const BadPaddingException& e);
	virtual void throw$() override;
	inline BadPaddingException* operator ->() {
		return (BadPaddingException*)throwing$;
	}
};

	} // crypto
} // javax

#endif // _javax_crypto_BadPaddingException_h_