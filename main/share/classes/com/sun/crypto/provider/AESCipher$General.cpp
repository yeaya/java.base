#include <com/sun/crypto/provider/AESCipher$General.h>
#include <com/sun/crypto/provider/AESCipher.h>
#include <jcpp.h>

using $AESCipher = ::com::sun::crypto::provider::AESCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void AESCipher$General::init$() {
	$AESCipher::init$(-1);
}

AESCipher$General::AESCipher$General() {
}

$Class* AESCipher$General::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AESCipher$General, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.AESCipher$General", "com.sun.crypto.provider.AESCipher", "General", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.AESCipher$General",
		"com.sun.crypto.provider.AESCipher",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.AESCipher"
	};
	$loadClass(AESCipher$General, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AESCipher$General);
	});
	return class$;
}

$Class* AESCipher$General::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com