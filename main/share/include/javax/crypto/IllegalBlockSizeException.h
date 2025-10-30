#ifndef _javax_crypto_IllegalBlockSizeException_h_
#define _javax_crypto_IllegalBlockSizeException_h_
//$ class javax.crypto.IllegalBlockSizeException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace javax {
	namespace crypto {

class $import IllegalBlockSizeException : public ::java::security::GeneralSecurityException {
	$class(IllegalBlockSizeException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	IllegalBlockSizeException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xE4BA67348F4EB2D8;
	IllegalBlockSizeException(const IllegalBlockSizeException& e);
	virtual void throw$() override;
	inline IllegalBlockSizeException* operator ->() {
		return (IllegalBlockSizeException*)throwing$;
	}
};

	} // crypto
} // javax

#endif // _javax_crypto_IllegalBlockSizeException_h_