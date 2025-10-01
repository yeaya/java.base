#ifndef _jdk_internal_access_JavaxCryptoSealedObjectAccess_h_
#define _jdk_internal_access_JavaxCryptoSealedObjectAccess_h_
//$ interface jdk.internal.access.JavaxCryptoSealedObjectAccess
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace crypto {
		class Cipher;
		class SealedObject;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaxCryptoSealedObjectAccess : public ::java::lang::Object {
	$interface(JavaxCryptoSealedObjectAccess, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::ObjectInputStream* getExtObjectInputStream(::javax::crypto::SealedObject* sealed, ::javax::crypto::Cipher* cipher) {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaxCryptoSealedObjectAccess_h_