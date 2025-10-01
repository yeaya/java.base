#include <com/sun/crypto/provider/GaloisCounterMode$AES128.h>

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

$MethodInfo _GaloisCounterMode$AES128_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GaloisCounterMode$AES128::*)()>(&GaloisCounterMode$AES128::init$))},
	{}
};

$InnerClassInfo _GaloisCounterMode$AES128_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.GaloisCounterMode$AES128", "com.sun.crypto.provider.GaloisCounterMode", "AES128", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GaloisCounterMode$AES128_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.GaloisCounterMode$AES128",
	"com.sun.crypto.provider.GaloisCounterMode",
	nullptr,
	nullptr,
	_GaloisCounterMode$AES128_MethodInfo_,
	nullptr,
	nullptr,
	_GaloisCounterMode$AES128_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.GaloisCounterMode"
};

$Object* allocate$GaloisCounterMode$AES128($Class* clazz) {
	return $of($alloc(GaloisCounterMode$AES128));
}

void GaloisCounterMode$AES128::init$() {
	$GaloisCounterMode::init$(16, $$new($AESCrypt));
}

GaloisCounterMode$AES128::GaloisCounterMode$AES128() {
}

$Class* GaloisCounterMode$AES128::load$($String* name, bool initialize) {
	$loadClass(GaloisCounterMode$AES128, name, initialize, &_GaloisCounterMode$AES128_ClassInfo_, allocate$GaloisCounterMode$AES128);
	return class$;
}

$Class* GaloisCounterMode$AES128::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com