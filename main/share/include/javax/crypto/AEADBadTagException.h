#ifndef _javax_crypto_AEADBadTagException_h_
#define _javax_crypto_AEADBadTagException_h_
//$ class javax.crypto.AEADBadTagException
//$ extends javax.crypto.BadPaddingException

#include <javax/crypto/BadPaddingException.h>

namespace javax {
	namespace crypto {

class $import AEADBadTagException : public ::javax::crypto::BadPaddingException {
	$class(AEADBadTagException, $NO_CLASS_INIT, ::javax::crypto::BadPaddingException)
public:
	AEADBadTagException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xf93a10d72dee19fb;
	AEADBadTagException(const AEADBadTagException& e);
	virtual void throw$() override;
	inline AEADBadTagException* operator ->() const {
		return (AEADBadTagException*)throwing$;
	}
	inline operator AEADBadTagException*() const {
		return (AEADBadTagException*)throwing$;
	}
};

	} // crypto
} // javax

#endif // _javax_crypto_AEADBadTagException_h_