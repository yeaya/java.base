#ifndef _sun_security_x509_X509Key_h_
#define _sun_security_x509_X509Key_h_
//$ class sun.security.x509.X509Key
//$ extends java.security.PublicKey

#include <java/lang/Array.h>
#include <java/security/PublicKey.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class BitArray;
			class DerOutputStream;
			class DerValue;
		}
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
		namespace x509 {

class $import X509Key : public ::java::security::PublicKey {
	$class(X509Key, $NO_CLASS_INIT, ::java::security::PublicKey)
public:
	X509Key();
	void init$();
	void init$(::sun::security::x509::AlgorithmId* algid, ::sun::security::util::BitArray* key);
	static ::java::security::PublicKey* buildX509Key(::sun::security::x509::AlgorithmId* algid, ::sun::security::util::BitArray* key);
	virtual void decode(::java::io::InputStream* in);
	virtual void decode($bytes* encodedKey);
	void encode(::sun::security::util::DerOutputStream* out);
	virtual $bytes* encode();
	static void encode(::sun::security::util::DerOutputStream* out, ::sun::security::x509::AlgorithmId* algid, ::sun::security::util::BitArray* key);
	virtual bool equals(Object$* obj) override;
	virtual $String* getAlgorithm() override;
	virtual ::sun::security::x509::AlgorithmId* getAlgorithmId();
	virtual $bytes* getEncoded() override;
	virtual $bytes* getEncodedInternal();
	virtual $String* getFormat() override;
	virtual ::sun::security::util::BitArray* getKey();
	virtual int32_t hashCode() override;
	static ::java::security::PublicKey* parse(::sun::security::util::DerValue* in);
	virtual void parseKeyBits();
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void setKey(::sun::security::util::BitArray* key);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* stream);
	static const int64_t serialVersionUID = (int64_t)0xB5A01DBE649A72A6;
	::sun::security::x509::AlgorithmId* algid = nullptr;
	$bytes* key = nullptr;
	int32_t unusedBits = 0;
	::sun::security::util::BitArray* bitStringKey = nullptr;
	$bytes* encodedKey = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_X509Key_h_