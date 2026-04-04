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

$Class* JavaxCryptoSealedObjectAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExtObjectInputStream", "(Ljavax/crypto/SealedObject;Ljavax/crypto/Cipher;)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxCryptoSealedObjectAccess, getExtObjectInputStream, $ObjectInputStream*, $SealedObject*, $Cipher*), "javax.crypto.BadPaddingException,javax.crypto.IllegalBlockSizeException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaxCryptoSealedObjectAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaxCryptoSealedObjectAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaxCryptoSealedObjectAccess);
	});
	return class$;
}

$Class* JavaxCryptoSealedObjectAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk