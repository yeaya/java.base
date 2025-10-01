#include <com/sun/crypto/provider/AESCipher$AES192_ECB_NoPadding.h>

#include <com/sun/crypto/provider/AESCipher$OidImpl.h>
#include <com/sun/crypto/provider/AESCipher.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AESCipher = ::com::sun::crypto::provider::AESCipher;
using $AESCipher$OidImpl = ::com::sun::crypto::provider::AESCipher$OidImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _AESCipher$AES192_ECB_NoPadding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AESCipher$AES192_ECB_NoPadding::*)()>(&AESCipher$AES192_ECB_NoPadding::init$))},
	{}
};

$InnerClassInfo _AESCipher$AES192_ECB_NoPadding_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.AESCipher$AES192_ECB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES192_ECB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$OidImpl", "com.sun.crypto.provider.AESCipher", "OidImpl", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AESCipher$AES192_ECB_NoPadding_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.AESCipher$AES192_ECB_NoPadding",
	"com.sun.crypto.provider.AESCipher$OidImpl",
	nullptr,
	nullptr,
	_AESCipher$AES192_ECB_NoPadding_MethodInfo_,
	nullptr,
	nullptr,
	_AESCipher$AES192_ECB_NoPadding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.AESCipher"
};

$Object* allocate$AESCipher$AES192_ECB_NoPadding($Class* clazz) {
	return $of($alloc(AESCipher$AES192_ECB_NoPadding));
}

void AESCipher$AES192_ECB_NoPadding::init$() {
	$AESCipher$OidImpl::init$(24, "ECB"_s, "NOPADDING"_s);
}

AESCipher$AES192_ECB_NoPadding::AESCipher$AES192_ECB_NoPadding() {
}

$Class* AESCipher$AES192_ECB_NoPadding::load$($String* name, bool initialize) {
	$loadClass(AESCipher$AES192_ECB_NoPadding, name, initialize, &_AESCipher$AES192_ECB_NoPadding_ClassInfo_, allocate$AESCipher$AES192_ECB_NoPadding);
	return class$;
}

$Class* AESCipher$AES192_ECB_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com