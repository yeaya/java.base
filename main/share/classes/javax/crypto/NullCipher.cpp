#include <javax/crypto/NullCipher.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/NullCipherSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cipher = ::javax::crypto::Cipher;
using $NullCipherSpi = ::javax::crypto::NullCipherSpi;

namespace javax {
	namespace crypto {

void NullCipher::init$() {
	$Cipher::init$($$new($NullCipherSpi), nullptr);
}

NullCipher::NullCipher() {
}

$Class* NullCipher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullCipher, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.NullCipher",
		"javax.crypto.Cipher",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NullCipher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullCipher);
	});
	return class$;
}

$Class* NullCipher::class$ = nullptr;

	} // crypto
} // javax