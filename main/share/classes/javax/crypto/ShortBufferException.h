#ifndef _javax_crypto_ShortBufferException_h_
#define _javax_crypto_ShortBufferException_h_
//$ class javax.crypto.ShortBufferException
//$ extends java.security.GeneralSecurityException

#include <java/security/GeneralSecurityException.h>

namespace javax {
	namespace crypto {

class $export ShortBufferException : public ::java::security::GeneralSecurityException {
	$class(ShortBufferException, $NO_CLASS_INIT, ::java::security::GeneralSecurityException)
public:
	ShortBufferException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x74f54573adc91683;
	ShortBufferException(const ShortBufferException& e);
	virtual void throw$() override;
	inline ShortBufferException* operator ->() const {
		return (ShortBufferException*)throwing$;
	}
	inline operator ShortBufferException*() const {
		return (ShortBufferException*)throwing$;
	}
};

	} // crypto
} // javax

#endif // _javax_crypto_ShortBufferException_h_