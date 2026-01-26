#include <com/sun/crypto/provider/GaloisCounterMode$AESGCM.h>

#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/GaloisCounterMode.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
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

$MethodInfo _GaloisCounterMode$AESGCM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GaloisCounterMode$AESGCM, init$, void)},
	{}
};

$InnerClassInfo _GaloisCounterMode$AESGCM_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.GaloisCounterMode$AESGCM", "com.sun.crypto.provider.GaloisCounterMode", "AESGCM", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _GaloisCounterMode$AESGCM_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.GaloisCounterMode$AESGCM",
	"com.sun.crypto.provider.GaloisCounterMode",
	nullptr,
	nullptr,
	_GaloisCounterMode$AESGCM_MethodInfo_,
	nullptr,
	nullptr,
	_GaloisCounterMode$AESGCM_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.GaloisCounterMode"
};

$Object* allocate$GaloisCounterMode$AESGCM($Class* clazz) {
	return $of($alloc(GaloisCounterMode$AESGCM));
}

void GaloisCounterMode$AESGCM::init$() {
	$GaloisCounterMode::init$(-1, $$new($AESCrypt));
}

GaloisCounterMode$AESGCM::GaloisCounterMode$AESGCM() {
}

$Class* GaloisCounterMode$AESGCM::load$($String* name, bool initialize) {
	$loadClass(GaloisCounterMode$AESGCM, name, initialize, &_GaloisCounterMode$AESGCM_ClassInfo_, allocate$GaloisCounterMode$AESGCM);
	return class$;
}

$Class* GaloisCounterMode$AESGCM::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com