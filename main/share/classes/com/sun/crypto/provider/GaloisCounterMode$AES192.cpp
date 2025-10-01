#include <com/sun/crypto/provider/GaloisCounterMode$AES192.h>

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

$MethodInfo _GaloisCounterMode$AES192_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GaloisCounterMode$AES192::*)()>(&GaloisCounterMode$AES192::init$))},
	{}
};

$InnerClassInfo _GaloisCounterMode$AES192_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.GaloisCounterMode$AES192", "com.sun.crypto.provider.GaloisCounterMode", "AES192", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GaloisCounterMode$AES192_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.GaloisCounterMode$AES192",
	"com.sun.crypto.provider.GaloisCounterMode",
	nullptr,
	nullptr,
	_GaloisCounterMode$AES192_MethodInfo_,
	nullptr,
	nullptr,
	_GaloisCounterMode$AES192_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.GaloisCounterMode"
};

$Object* allocate$GaloisCounterMode$AES192($Class* clazz) {
	return $of($alloc(GaloisCounterMode$AES192));
}

void GaloisCounterMode$AES192::init$() {
	$GaloisCounterMode::init$(24, $$new($AESCrypt));
}

GaloisCounterMode$AES192::GaloisCounterMode$AES192() {
}

$Class* GaloisCounterMode$AES192::load$($String* name, bool initialize) {
	$loadClass(GaloisCounterMode$AES192, name, initialize, &_GaloisCounterMode$AES192_ClassInfo_, allocate$GaloisCounterMode$AES192);
	return class$;
}

$Class* GaloisCounterMode$AES192::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com