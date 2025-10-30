#include <com/sun/crypto/provider/TlsPrfGenerator$V10.h>

#include <com/sun/crypto/provider/TlsPrfGenerator.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $TlsPrfGenerator = ::com::sun::crypto::provider::TlsPrfGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _TlsPrfGenerator$V10_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TlsPrfGenerator$V10::*)()>(&TlsPrfGenerator$V10::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TlsPrfGenerator$V10_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.TlsPrfGenerator$V10", "com.sun.crypto.provider.TlsPrfGenerator", "V10", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TlsPrfGenerator$V10_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.crypto.provider.TlsPrfGenerator$V10",
	"com.sun.crypto.provider.TlsPrfGenerator",
	nullptr,
	nullptr,
	_TlsPrfGenerator$V10_MethodInfo_,
	nullptr,
	nullptr,
	_TlsPrfGenerator$V10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.TlsPrfGenerator"
};

$Object* allocate$TlsPrfGenerator$V10($Class* clazz) {
	return $of($alloc(TlsPrfGenerator$V10));
}

void TlsPrfGenerator$V10::init$() {
	$TlsPrfGenerator::init$();
}

$SecretKey* TlsPrfGenerator$V10::engineGenerateKey() {
	return engineGenerateKey0(false);
}

TlsPrfGenerator$V10::TlsPrfGenerator$V10() {
}

$Class* TlsPrfGenerator$V10::load$($String* name, bool initialize) {
	$loadClass(TlsPrfGenerator$V10, name, initialize, &_TlsPrfGenerator$V10_ClassInfo_, allocate$TlsPrfGenerator$V10);
	return class$;
}

$Class* TlsPrfGenerator$V10::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com