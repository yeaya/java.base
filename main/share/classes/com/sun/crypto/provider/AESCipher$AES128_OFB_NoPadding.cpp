#include <com/sun/crypto/provider/AESCipher$AES128_OFB_NoPadding.h>

#include <com/sun/crypto/provider/AESCipher$OidImpl.h>
#include <com/sun/crypto/provider/AESCipher.h>
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

$MethodInfo _AESCipher$AES128_OFB_NoPadding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AESCipher$AES128_OFB_NoPadding::*)()>(&AESCipher$AES128_OFB_NoPadding::init$))},
	{}
};

$InnerClassInfo _AESCipher$AES128_OFB_NoPadding_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.AESCipher$AES128_OFB_NoPadding", "com.sun.crypto.provider.AESCipher", "AES128_OFB_NoPadding", $PUBLIC | $STATIC | $FINAL},
	{"com.sun.crypto.provider.AESCipher$OidImpl", "com.sun.crypto.provider.AESCipher", "OidImpl", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AESCipher$AES128_OFB_NoPadding_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.AESCipher$AES128_OFB_NoPadding",
	"com.sun.crypto.provider.AESCipher$OidImpl",
	nullptr,
	nullptr,
	_AESCipher$AES128_OFB_NoPadding_MethodInfo_,
	nullptr,
	nullptr,
	_AESCipher$AES128_OFB_NoPadding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.AESCipher"
};

$Object* allocate$AESCipher$AES128_OFB_NoPadding($Class* clazz) {
	return $of($alloc(AESCipher$AES128_OFB_NoPadding));
}

void AESCipher$AES128_OFB_NoPadding::init$() {
	$AESCipher$OidImpl::init$(16, "OFB"_s, "NOPADDING"_s);
}

AESCipher$AES128_OFB_NoPadding::AESCipher$AES128_OFB_NoPadding() {
}

$Class* AESCipher$AES128_OFB_NoPadding::load$($String* name, bool initialize) {
	$loadClass(AESCipher$AES128_OFB_NoPadding, name, initialize, &_AESCipher$AES128_OFB_NoPadding_ClassInfo_, allocate$AESCipher$AES128_OFB_NoPadding);
	return class$;
}

$Class* AESCipher$AES128_OFB_NoPadding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com