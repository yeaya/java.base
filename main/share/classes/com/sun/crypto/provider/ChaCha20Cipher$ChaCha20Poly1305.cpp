#include <com/sun/crypto/provider/ChaCha20Cipher$ChaCha20Poly1305.h>

#include <com/sun/crypto/provider/ChaCha20Cipher.h>
#include <jcpp.h>

using $ChaCha20Cipher = ::com::sun::crypto::provider::ChaCha20Cipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _ChaCha20Cipher$ChaCha20Poly1305_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ChaCha20Cipher$ChaCha20Poly1305, init$, void)},
	{}
};

$InnerClassInfo _ChaCha20Cipher$ChaCha20Poly1305_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Poly1305", "com.sun.crypto.provider.ChaCha20Cipher", "ChaCha20Poly1305", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ChaCha20Cipher$ChaCha20Poly1305_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Poly1305",
	"com.sun.crypto.provider.ChaCha20Cipher",
	nullptr,
	nullptr,
	_ChaCha20Cipher$ChaCha20Poly1305_MethodInfo_,
	nullptr,
	nullptr,
	_ChaCha20Cipher$ChaCha20Poly1305_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.ChaCha20Cipher"
};

$Object* allocate$ChaCha20Cipher$ChaCha20Poly1305($Class* clazz) {
	return $of($alloc(ChaCha20Cipher$ChaCha20Poly1305));
}

void ChaCha20Cipher$ChaCha20Poly1305::init$() {
	$ChaCha20Cipher::init$();
	this->mode = 1;
	$set(this, authAlgName, "Poly1305"_s);
}

ChaCha20Cipher$ChaCha20Poly1305::ChaCha20Cipher$ChaCha20Poly1305() {
}

$Class* ChaCha20Cipher$ChaCha20Poly1305::load$($String* name, bool initialize) {
	$loadClass(ChaCha20Cipher$ChaCha20Poly1305, name, initialize, &_ChaCha20Cipher$ChaCha20Poly1305_ClassInfo_, allocate$ChaCha20Cipher$ChaCha20Poly1305);
	return class$;
}

$Class* ChaCha20Cipher$ChaCha20Poly1305::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com