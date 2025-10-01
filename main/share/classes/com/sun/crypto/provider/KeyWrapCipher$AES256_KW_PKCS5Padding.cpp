#include <com/sun/crypto/provider/KeyWrapCipher$AES256_KW_PKCS5Padding.h>

#include <com/sun/crypto/provider/AESKeyWrap.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/KeyWrapCipher.h>
#include <com/sun/crypto/provider/PKCS5Padding.h>
#include <com/sun/crypto/provider/Padding.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AESKeyWrap = ::com::sun::crypto::provider::AESKeyWrap;
using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $KeyWrapCipher = ::com::sun::crypto::provider::KeyWrapCipher;
using $PKCS5Padding = ::com::sun::crypto::provider::PKCS5Padding;
using $Padding = ::com::sun::crypto::provider::Padding;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _KeyWrapCipher$AES256_KW_PKCS5Padding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyWrapCipher$AES256_KW_PKCS5Padding::*)()>(&KeyWrapCipher$AES256_KW_PKCS5Padding::init$))},
	{}
};

$InnerClassInfo _KeyWrapCipher$AES256_KW_PKCS5Padding_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyWrapCipher$AES256_KW_PKCS5Padding", "com.sun.crypto.provider.KeyWrapCipher", "AES256_KW_PKCS5Padding", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyWrapCipher$AES256_KW_PKCS5Padding_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyWrapCipher$AES256_KW_PKCS5Padding",
	"com.sun.crypto.provider.KeyWrapCipher",
	nullptr,
	nullptr,
	_KeyWrapCipher$AES256_KW_PKCS5Padding_MethodInfo_,
	nullptr,
	nullptr,
	_KeyWrapCipher$AES256_KW_PKCS5Padding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyWrapCipher"
};

$Object* allocate$KeyWrapCipher$AES256_KW_PKCS5Padding($Class* clazz) {
	return $of($alloc(KeyWrapCipher$AES256_KW_PKCS5Padding));
}

void KeyWrapCipher$AES256_KW_PKCS5Padding::init$() {
	$var($FeedbackCipher, var$0, static_cast<$FeedbackCipher*>($new($AESKeyWrap)));
	$KeyWrapCipher::init$(var$0, $$new($PKCS5Padding, 16), 32);
}

KeyWrapCipher$AES256_KW_PKCS5Padding::KeyWrapCipher$AES256_KW_PKCS5Padding() {
}

$Class* KeyWrapCipher$AES256_KW_PKCS5Padding::load$($String* name, bool initialize) {
	$loadClass(KeyWrapCipher$AES256_KW_PKCS5Padding, name, initialize, &_KeyWrapCipher$AES256_KW_PKCS5Padding_ClassInfo_, allocate$KeyWrapCipher$AES256_KW_PKCS5Padding);
	return class$;
}

$Class* KeyWrapCipher$AES256_KW_PKCS5Padding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com