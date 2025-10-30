#include <com/sun/crypto/provider/KeyWrapCipher$AES256_KWP_NoPadding.h>

#include <com/sun/crypto/provider/AESKeyWrapPadded.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/KeyWrapCipher.h>
#include <com/sun/crypto/provider/Padding.h>
#include <jcpp.h>

using $AESKeyWrapPadded = ::com::sun::crypto::provider::AESKeyWrapPadded;
using $FeedbackCipher = ::com::sun::crypto::provider::FeedbackCipher;
using $KeyWrapCipher = ::com::sun::crypto::provider::KeyWrapCipher;
using $Padding = ::com::sun::crypto::provider::Padding;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _KeyWrapCipher$AES256_KWP_NoPadding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyWrapCipher$AES256_KWP_NoPadding::*)()>(&KeyWrapCipher$AES256_KWP_NoPadding::init$))},
	{}
};

$InnerClassInfo _KeyWrapCipher$AES256_KWP_NoPadding_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyWrapCipher$AES256_KWP_NoPadding", "com.sun.crypto.provider.KeyWrapCipher", "AES256_KWP_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyWrapCipher$AES256_KWP_NoPadding_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyWrapCipher$AES256_KWP_NoPadding",
	"com.sun.crypto.provider.KeyWrapCipher",
	nullptr,
	nullptr,
	_KeyWrapCipher$AES256_KWP_NoPadding_MethodInfo_,
	nullptr,
	nullptr,
	_KeyWrapCipher$AES256_KWP_NoPadding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyWrapCipher"
};

$Object* allocate$KeyWrapCipher$AES256_KWP_NoPadding($Class* clazz) {
	return $of($alloc(KeyWrapCipher$AES256_KWP_NoPadding));
}

void KeyWrapCipher$AES256_KWP_NoPadding::init$() {
	$KeyWrapCipher::init$($$new($AESKeyWrapPadded), nullptr, 32);
}

KeyWrapCipher$AES256_KWP_NoPadding::KeyWrapCipher$AES256_KWP_NoPadding() {
}

$Class* KeyWrapCipher$AES256_KWP_NoPadding::load$($String* name, bool initialize) {
	$loadClass(KeyWrapCipher$AES256_KWP_NoPadding, name, initialize, &_KeyWrapCipher$AES256_KWP_NoPadding_ClassInfo_, allocate$KeyWrapCipher$AES256_KWP_NoPadding);
	return class$;
}

$Class* KeyWrapCipher$AES256_KWP_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com