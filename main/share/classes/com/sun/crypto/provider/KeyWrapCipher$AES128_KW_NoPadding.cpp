#include <com/sun/crypto/provider/KeyWrapCipher$AES128_KW_NoPadding.h>

#include <com/sun/crypto/provider/AESKeyWrap.h>
#include <com/sun/crypto/provider/FeedbackCipher.h>
#include <com/sun/crypto/provider/KeyWrapCipher.h>
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
using $Padding = ::com::sun::crypto::provider::Padding;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _KeyWrapCipher$AES128_KW_NoPadding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyWrapCipher$AES128_KW_NoPadding::*)()>(&KeyWrapCipher$AES128_KW_NoPadding::init$))},
	{}
};

$InnerClassInfo _KeyWrapCipher$AES128_KW_NoPadding_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.KeyWrapCipher$AES128_KW_NoPadding", "com.sun.crypto.provider.KeyWrapCipher", "AES128_KW_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _KeyWrapCipher$AES128_KW_NoPadding_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyWrapCipher$AES128_KW_NoPadding",
	"com.sun.crypto.provider.KeyWrapCipher",
	nullptr,
	nullptr,
	_KeyWrapCipher$AES128_KW_NoPadding_MethodInfo_,
	nullptr,
	nullptr,
	_KeyWrapCipher$AES128_KW_NoPadding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.KeyWrapCipher"
};

$Object* allocate$KeyWrapCipher$AES128_KW_NoPadding($Class* clazz) {
	return $of($alloc(KeyWrapCipher$AES128_KW_NoPadding));
}

void KeyWrapCipher$AES128_KW_NoPadding::init$() {
	$KeyWrapCipher::init$($$new($AESKeyWrap), nullptr, 16);
}

KeyWrapCipher$AES128_KW_NoPadding::KeyWrapCipher$AES128_KW_NoPadding() {
}

$Class* KeyWrapCipher$AES128_KW_NoPadding::load$($String* name, bool initialize) {
	$loadClass(KeyWrapCipher$AES128_KW_NoPadding, name, initialize, &_KeyWrapCipher$AES128_KW_NoPadding_ClassInfo_, allocate$KeyWrapCipher$AES128_KW_NoPadding);
	return class$;
}

$Class* KeyWrapCipher$AES128_KW_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com