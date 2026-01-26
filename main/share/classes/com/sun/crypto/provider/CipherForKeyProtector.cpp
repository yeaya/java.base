#include <com/sun/crypto/provider/CipherForKeyProtector.h>

#include <java/security/Provider.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/CipherSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Cipher = ::javax::crypto::Cipher;
using $CipherSpi = ::javax::crypto::CipherSpi;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _CipherForKeyProtector_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/CipherSpi;Ljava/security/Provider;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CipherForKeyProtector, init$, void, $CipherSpi*, $Provider*, $String*)},
	{}
};

$ClassInfo _CipherForKeyProtector_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.CipherForKeyProtector",
	"javax.crypto.Cipher",
	nullptr,
	nullptr,
	_CipherForKeyProtector_MethodInfo_
};

$Object* allocate$CipherForKeyProtector($Class* clazz) {
	return $of($alloc(CipherForKeyProtector));
}

void CipherForKeyProtector::init$($CipherSpi* cipherSpi, $Provider* provider, $String* transformation) {
	$Cipher::init$(cipherSpi, provider, transformation);
}

CipherForKeyProtector::CipherForKeyProtector() {
}

$Class* CipherForKeyProtector::load$($String* name, bool initialize) {
	$loadClass(CipherForKeyProtector, name, initialize, &_CipherForKeyProtector_ClassInfo_, allocate$CipherForKeyProtector);
	return class$;
}

$Class* CipherForKeyProtector::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com