#include <com/sun/crypto/provider/KeyWrapCipher$AES_KW_PKCS5Padding.h>
#include <com/sun/crypto/provider/AESKeyWrap.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/KeyWrapCipher.h>
#include <com/sun/crypto/provider/PKCS5Padding.h>
#include <jcpp.h>

using $AESKeyWrap = ::com::sun::crypto::provider::AESKeyWrap;
using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $KeyWrapCipher = ::com::sun::crypto::provider::KeyWrapCipher;
using $PKCS5Padding = ::com::sun::crypto::provider::PKCS5Padding;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void KeyWrapCipher$AES_KW_PKCS5Padding::init$() {
	$useLocalObjectStack();
	$var($FeedbackCipher, var$0, $new($AESKeyWrap));
	$KeyWrapCipher::init$(var$0, $$new($PKCS5Padding, 16), -1);
}

KeyWrapCipher$AES_KW_PKCS5Padding::KeyWrapCipher$AES_KW_PKCS5Padding() {
}

$Class* KeyWrapCipher$AES_KW_PKCS5Padding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyWrapCipher$AES_KW_PKCS5Padding, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.KeyWrapCipher$AES_KW_PKCS5Padding", "com.sun.crypto.provider.KeyWrapCipher", "AES_KW_PKCS5Padding", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.KeyWrapCipher$AES_KW_PKCS5Padding",
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
	$loadClass(KeyWrapCipher$AES_KW_PKCS5Padding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyWrapCipher$AES_KW_PKCS5Padding);
	});
	return class$;
}

$Class* KeyWrapCipher$AES_KW_PKCS5Padding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com