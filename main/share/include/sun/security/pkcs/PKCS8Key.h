#ifndef _sun_security_pkcs_PKCS8Key_h_
#define _sun_security_pkcs_PKCS8Key_h_
//$ class sun.security.pkcs.PKCS8Key
//$ extends java.security.PrivateKey

#include <java/lang/Array.h>
#include <java/security/PrivateKey.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class $import PKCS8Key : public ::java::security::PrivateKey {
	$class(PKCS8Key, $NO_CLASS_INIT, ::java::security::PrivateKey)
public:
	PKCS8Key();
	void init$();
	void init$($bytes* input);
	virtual void clear();
	void decode(::java::io::InputStream* is);
	virtual bool equals(Object$* object) override;
	virtual $String* getAlgorithm() override;
	virtual ::sun::security::x509::AlgorithmId* getAlgorithmId();
	virtual $bytes* getEncoded() override;
	$bytes* getEncodedInternal();
	virtual $String* getFormat() override;
	virtual int32_t hashCode() override;
	static ::java::security::PrivateKey* parseKey($bytes* encoded);
	void readObject(::java::io::ObjectInputStream* stream);
	virtual $Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xCAC0A0C88C95426C;
	::sun::security::x509::AlgorithmId* algid = nullptr;
	$bytes* key = nullptr;
	$bytes* encodedKey = nullptr;
	static const int32_t V1 = 0;
	static const int32_t V2 = 1;
};

		} // pkcs
	} // security
} // sun

#endif // _sun_security_pkcs_PKCS8Key_h_