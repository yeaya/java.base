#ifndef _com_sun_crypto_provider_JceKeyStore$DeserializationChecker_h_
#define _com_sun_crypto_provider_JceKeyStore$DeserializationChecker_h_
//$ class com.sun.crypto.provider.JceKeyStore$DeserializationChecker
//$ extends java.io.ObjectInputFilter

#include <java/io/ObjectInputFilter.h>

namespace java {
	namespace io {
		class ObjectInputFilter$FilterInfo;
		class ObjectInputFilter$Status;
	}
}

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

class JceKeyStore$DeserializationChecker : public ::java::io::ObjectInputFilter {
	$class(JceKeyStore$DeserializationChecker, $NO_CLASS_INIT, ::java::io::ObjectInputFilter)
public:
	JceKeyStore$DeserializationChecker();
	void init$(int32_t fullLength);
	virtual ::java::io::ObjectInputFilter$Status* checkInput(::java::io::ObjectInputFilter$FilterInfo* info) override;
	int32_t fullLength = 0;
};

			} // provider
		} // crypto
	} // sun
} // com

#endif // _com_sun_crypto_provider_JceKeyStore$DeserializationChecker_h_