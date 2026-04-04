#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void SymmetricCipher::init$() {
}

SymmetricCipher::SymmetricCipher() {
}

$Class* SymmetricCipher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SymmetricCipher, init$, void)},
		{"decryptBlock", "([BI[BI)V", nullptr, $ABSTRACT, $virtualMethod(SymmetricCipher, decryptBlock, void, $bytes*, int32_t, $bytes*, int32_t)},
		{"encryptBlock", "([BI[BI)V", nullptr, $ABSTRACT, $virtualMethod(SymmetricCipher, encryptBlock, void, $bytes*, int32_t, $bytes*, int32_t)},
		{"getBlockSize", "()I", nullptr, $ABSTRACT, $virtualMethod(SymmetricCipher, getBlockSize, int32_t)},
		{"init", "(ZLjava/lang/String;[B)V", nullptr, $ABSTRACT, $virtualMethod(SymmetricCipher, init, void, bool, $String*, $bytes*), "java.security.InvalidKeyException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.crypto.provider.SymmetricCipher",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SymmetricCipher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SymmetricCipher);
	});
	return class$;
}

$Class* SymmetricCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com