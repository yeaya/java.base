#include <com/sun/crypto/provider/KeyWrapCipher$AES_KW_NoPadding.h>
#include <com/sun/crypto/provider/AESKeyWrap.h>
#include <com/sun/crypto/provider/KeyWrapCipher.h>
#include <com/sun/crypto/provider/Padding.h>
#include <jcpp.h>

using $AESKeyWrap = ::com::sun::crypto::provider::AESKeyWrap;
using $KeyWrapCipher = ::com::sun::crypto::provider::KeyWrapCipher;
using $Padding = ::com::sun::crypto::provider::Padding;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void KeyWrapCipher$AES_KW_NoPadding::init$() {
	$KeyWrapCipher::init$($$new($AESKeyWrap), nullptr, -1);
}

KeyWrapCipher$AES_KW_NoPadding::KeyWrapCipher$AES_KW_NoPadding() {
}

$Class* KeyWrapCipher$AES_KW_NoPadding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyWrapCipher$AES_KW_NoPadding, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.KeyWrapCipher$AES_KW_NoPadding", "com.sun.crypto.provider.KeyWrapCipher", "AES_KW_NoPadding", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.KeyWrapCipher$AES_KW_NoPadding",
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
	$loadClass(KeyWrapCipher$AES_KW_NoPadding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyWrapCipher$AES_KW_NoPadding);
	});
	return class$;
}

$Class* KeyWrapCipher$AES_KW_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com