#include <com/sun/crypto/provider/SymmetricCipher.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _SymmetricCipher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SymmetricCipher::*)()>(&SymmetricCipher::init$))},
	{"decryptBlock", "([BI[BI)V", nullptr, $ABSTRACT},
	{"encryptBlock", "([BI[BI)V", nullptr, $ABSTRACT},
	{"getBlockSize", "()I", nullptr, $ABSTRACT},
	{"init", "(ZLjava/lang/String;[B)V", nullptr, $ABSTRACT, nullptr, "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _SymmetricCipher_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.SymmetricCipher",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SymmetricCipher_MethodInfo_
};

$Object* allocate$SymmetricCipher($Class* clazz) {
	return $of($alloc(SymmetricCipher));
}

void SymmetricCipher::init$() {
}

SymmetricCipher::SymmetricCipher() {
}

$Class* SymmetricCipher::load$($String* name, bool initialize) {
	$loadClass(SymmetricCipher, name, initialize, &_SymmetricCipher_ClassInfo_, allocate$SymmetricCipher);
	return class$;
}

$Class* SymmetricCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com