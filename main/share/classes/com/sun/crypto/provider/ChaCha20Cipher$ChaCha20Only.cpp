#include <com/sun/crypto/provider/ChaCha20Cipher$ChaCha20Only.h>

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

$MethodInfo _ChaCha20Cipher$ChaCha20Only_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ChaCha20Cipher$ChaCha20Only::*)()>(&ChaCha20Cipher$ChaCha20Only::init$))},
	{}
};

$InnerClassInfo _ChaCha20Cipher$ChaCha20Only_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Only", "com.sun.crypto.provider.ChaCha20Cipher", "ChaCha20Only", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ChaCha20Cipher$ChaCha20Only_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Only",
	"com.sun.crypto.provider.ChaCha20Cipher",
	nullptr,
	nullptr,
	_ChaCha20Cipher$ChaCha20Only_MethodInfo_,
	nullptr,
	nullptr,
	_ChaCha20Cipher$ChaCha20Only_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.ChaCha20Cipher"
};

$Object* allocate$ChaCha20Cipher$ChaCha20Only($Class* clazz) {
	return $of($alloc(ChaCha20Cipher$ChaCha20Only));
}

void ChaCha20Cipher$ChaCha20Only::init$() {
	$ChaCha20Cipher::init$();
	this->mode = 0;
}

ChaCha20Cipher$ChaCha20Only::ChaCha20Cipher$ChaCha20Only() {
}

$Class* ChaCha20Cipher$ChaCha20Only::load$($String* name, bool initialize) {
	$loadClass(ChaCha20Cipher$ChaCha20Only, name, initialize, &_ChaCha20Cipher$ChaCha20Only_ClassInfo_, allocate$ChaCha20Cipher$ChaCha20Only);
	return class$;
}

$Class* ChaCha20Cipher$ChaCha20Only::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com