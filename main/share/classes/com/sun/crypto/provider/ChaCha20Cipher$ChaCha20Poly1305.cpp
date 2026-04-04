#include <com/sun/crypto/provider/ChaCha20Cipher$ChaCha20Poly1305.h>
#include <com/sun/crypto/provider/ChaCha20Cipher.h>
#include <jcpp.h>

using $ChaCha20Cipher = ::com::sun::crypto::provider::ChaCha20Cipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void ChaCha20Cipher$ChaCha20Poly1305::init$() {
	$ChaCha20Cipher::init$();
	this->mode = 1;
	$set(this, authAlgName, "Poly1305"_s);
}

ChaCha20Cipher$ChaCha20Poly1305::ChaCha20Cipher$ChaCha20Poly1305() {
}

$Class* ChaCha20Cipher$ChaCha20Poly1305::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ChaCha20Cipher$ChaCha20Poly1305, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Poly1305", "com.sun.crypto.provider.ChaCha20Cipher", "ChaCha20Poly1305", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Poly1305",
		"com.sun.crypto.provider.ChaCha20Cipher",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.ChaCha20Cipher"
	};
	$loadClass(ChaCha20Cipher$ChaCha20Poly1305, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChaCha20Cipher$ChaCha20Poly1305);
	});
	return class$;
}

$Class* ChaCha20Cipher$ChaCha20Poly1305::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com