#include <jdk/internal/access/JavaxCryptoSealedObjectAccess.h>

#include <java/io/ObjectInputStream.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/SealedObject.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cipher = ::javax::crypto::Cipher;
using $SealedObject = ::javax::crypto::SealedObject;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaxCryptoSealedObjectAccess_MethodInfo_[] = {
	{"getExtObjectInputStream", "(Ljavax/crypto/SealedObject;Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.crypto.BadPaddingException,javax.crypto.IllegalBlockSizeException,java.io.IOException"},
	{}
};

$ClassInfo _JavaxCryptoSealedObjectAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaxCryptoSealedObjectAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaxCryptoSealedObjectAccess_MethodInfo_
};

$Object* allocate$JavaxCryptoSealedObjectAccess($Class* clazz) {
	return $of($alloc(JavaxCryptoSealedObjectAccess));
}

$Class* JavaxCryptoSealedObjectAccess::load$($String* name, bool initialize) {
	$loadClass(JavaxCryptoSealedObjectAccess, name, initialize, &_JavaxCryptoSealedObjectAccess_ClassInfo_, allocate$JavaxCryptoSealedObjectAccess);
	return class$;
}

$Class* JavaxCryptoSealedObjectAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk