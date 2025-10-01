#ifndef _javax_crypto_CryptoPolicyParser$ParsingException_h_
#define _javax_crypto_CryptoPolicyParser$ParsingException_h_
//$ class javax.crypto.CryptoPolicyParser$ParsingException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace javax {
	namespace crypto {

class CryptoPolicyParser$ParsingException : public ::java::security::GeneralSecurityException {
	$class(CryptoPolicyParser$ParsingException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	CryptoPolicyParser$ParsingException();
	void init$($String* msg);
	void init$(int32_t line, $String* msg);
	void init$(int32_t line, $String* expect, $String* actual);
	static const int64_t serialVersionUID = (int64_t)0x63301A0B8E0455D6;
	CryptoPolicyParser$ParsingException(const CryptoPolicyParser$ParsingException& e);
	CryptoPolicyParser$ParsingException wrapper$();
	virtual void throwWrapper$() override;
};

	} // crypto
} // javax

#endif // _javax_crypto_CryptoPolicyParser$ParsingException_h_