#include <com/sun/crypto/provider/KeyWrapCipher$AES256_KWP_NoPadding.h>
#include <com/sun/crypto/provider/AESKeyWrapPadded.h>
#include <com/sun/crypto/provider/KeyWrapCipher.h>
#include <com/sun/crypto/provider/Padding.h>
#include <jcpp.h>

using $AESKeyWrapPadded = ::com::sun::crypto::provider::AESKeyWrapPadded;
using $KeyWrapCipher = ::com::sun::crypto::provider::KeyWrapCipher;
using $Padding = ::com::sun::crypto::provider::Padding;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void KeyWrapCipher$AES256_KWP_NoPadding::init$() {
	$KeyWrapCipher::init$($$new($AESKeyWrapPadded), nullptr, 32);
}

KeyWrapCipher$AES256_KWP_NoPadding::KeyWrapCipher$AES256_KWP_NoPadding() {
}

$Class* KeyWrapCipher$AES256_KWP_NoPadding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyWrapCipher$AES256_KWP_NoPadding, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.KeyWrapCipher$AES256_KWP_NoPadding", "com.sun.crypto.provider.KeyWrapCipher", "AES256_KWP_NoPadding", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.KeyWrapCipher$AES256_KWP_NoPadding",
		"com.sun.crypto.provider.KeyWrapCipher",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.KeyWrapCipher"
	};
	$loadClass(KeyWrapCipher$AES256_KWP_NoPadding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyWrapCipher$AES256_KWP_NoPadding);
	});
	return class$;
}

$Class* KeyWrapCipher$AES256_KWP_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com