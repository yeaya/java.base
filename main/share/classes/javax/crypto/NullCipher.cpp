#include <javax/crypto/NullCipher.h>

#include <javax/crypto/Cipher.h>
#include <javax/crypto/CipherSpi.h>
#include <javax/crypto/NullCipherSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cipher = ::javax::crypto::Cipher;
using $CipherSpi = ::javax::crypto::CipherSpi;
using $NullCipherSpi = ::javax::crypto::NullCipherSpi;

namespace javax {
	namespace crypto {

$MethodInfo _NullCipher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NullCipher, init$, void)},
	{}
};

$ClassInfo _NullCipher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.NullCipher",
	"javax.crypto.Cipher",
	nullptr,
	nullptr,
	_NullCipher_MethodInfo_
};

$Object* allocate$NullCipher($Class* clazz) {
	return $of($alloc(NullCipher));
}

void NullCipher::init$() {
	$Cipher::init$($$new($NullCipherSpi), nullptr);
}

NullCipher::NullCipher() {
}

$Class* NullCipher::load$($String* name, bool initialize) {
	$loadClass(NullCipher, name, initialize, &_NullCipher_ClassInfo_, allocate$NullCipher);
	return class$;
}

$Class* NullCipher::class$ = nullptr;

	} // crypto
} // javax