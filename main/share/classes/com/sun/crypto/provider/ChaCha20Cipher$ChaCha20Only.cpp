#include <com/sun/crypto/provider/ChaCha20Cipher$ChaCha20Only.h>
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

void ChaCha20Cipher$ChaCha20Only::init$() {
	$ChaCha20Cipher::init$();
	this->mode = 0;
}

ChaCha20Cipher$ChaCha20Only::ChaCha20Cipher$ChaCha20Only() {
}

$Class* ChaCha20Cipher$ChaCha20Only::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ChaCha20Cipher$ChaCha20Only, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Only", "com.sun.crypto.provider.ChaCha20Cipher", "ChaCha20Only", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Only",
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
	$loadClass(ChaCha20Cipher$ChaCha20Only, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ChaCha20Cipher$ChaCha20Only);
	});
	return class$;
}

$Class* ChaCha20Cipher$ChaCha20Only::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com