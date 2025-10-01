#include <com/sun/crypto/provider/GaloisCounterMode$AES256.h>

#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/GaloisCounterMode.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AESCrypt = ::com::sun::crypto::provider::AESCrypt;
using $GaloisCounterMode = ::com::sun::crypto::provider::GaloisCounterMode;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _GaloisCounterMode$AES256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GaloisCounterMode$AES256::*)()>(&GaloisCounterMode$AES256::init$))},
	{}
};

$InnerClassInfo _GaloisCounterMode$AES256_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.GaloisCounterMode$AES256", "com.sun.crypto.provider.GaloisCounterMode", "AES256", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GaloisCounterMode$AES256_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.GaloisCounterMode$AES256",
	"com.sun.crypto.provider.GaloisCounterMode",
	nullptr,
	nullptr,
	_GaloisCounterMode$AES256_MethodInfo_,
	nullptr,
	nullptr,
	_GaloisCounterMode$AES256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.GaloisCounterMode"
};

$Object* allocate$GaloisCounterMode$AES256($Class* clazz) {
	return $of($alloc(GaloisCounterMode$AES256));
}

void GaloisCounterMode$AES256::init$() {
	$GaloisCounterMode::init$(32, $$new($AESCrypt));
}

GaloisCounterMode$AES256::GaloisCounterMode$AES256() {
}

$Class* GaloisCounterMode$AES256::load$($String* name, bool initialize) {
	$loadClass(GaloisCounterMode$AES256, name, initialize, &_GaloisCounterMode$AES256_ClassInfo_, allocate$GaloisCounterMode$AES256);
	return class$;
}

$Class* GaloisCounterMode$AES256::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com