#ifndef _javax_crypto_NoSuchPaddingException_h_
#define _javax_crypto_NoSuchPaddingException_h_
//$ class javax.crypto.NoSuchPaddingException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace javax {
	namespace crypto {

class $export NoSuchPaddingException : public ::java::security::GeneralSecurityException {
	$class(NoSuchPaddingException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	NoSuchPaddingException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xC089D9233FD2A696;
	NoSuchPaddingException(const NoSuchPaddingException& e);
	virtual void throw$() override;
	inline NoSuchPaddingException* operator ->() {
		return (NoSuchPaddingException*)throwing$;
	}
};

	} // crypto
} // javax

#endif // _javax_crypto_NoSuchPaddingException_h_