#ifndef _java_security_SignedObject_h_
#define _java_security_SignedObject_h_
//$ class java.security.SignedObject
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class PrivateKey;
		class PublicKey;
		class Signature;
	}
}

namespace java {
	namespace security {

class $export SignedObject : public ::java::io::Serializable {
	$class(SignedObject, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	SignedObject();
	void init$(::java::io::Serializable* object, ::java::security::PrivateKey* signingKey, ::java::security::Signature* signingEngine);
	$String* getAlgorithm();
	$Object* getObject();
	$bytes* getSignature();
	void readObject(::java::io::ObjectInputStream* s);
	void sign(::java::security::PrivateKey* signingKey, ::java::security::Signature* signingEngine);
	bool verify(::java::security::PublicKey* verificationKey, ::java::security::Signature* verificationEngine);
	static const int64_t serialVersionUID = (int64_t)0x09FFBD682A3CD5FF;
	$bytes* content = nullptr;
	$bytes* signature = nullptr;
	$String* thealgorithm = nullptr;
};

	} // security
} // java

#endif // _java_security_SignedObject_h_