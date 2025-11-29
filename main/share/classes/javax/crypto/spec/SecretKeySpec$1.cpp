#include <javax/crypto/spec/SecretKeySpec$1.h>

#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;

namespace javax {
	namespace crypto {
		namespace spec {

$MethodInfo _SecretKeySpec$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SecretKeySpec$1::*)()>(&SecretKeySpec$1::init$))},
	{"clearSecretKeySpec", "(Ljavax/crypto/spec/SecretKeySpec;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SecretKeySpec$1_EnclosingMethodInfo_ = {
	"javax.crypto.spec.SecretKeySpec",
	nullptr,
	nullptr
};

$InnerClassInfo _SecretKeySpec$1_InnerClassesInfo_[] = {
	{"javax.crypto.spec.SecretKeySpec$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecretKeySpec$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.spec.SecretKeySpec$1",
	"java.lang.Object",
	"jdk.internal.access.JavaxCryptoSpecAccess",
	nullptr,
	_SecretKeySpec$1_MethodInfo_,
	nullptr,
	&_SecretKeySpec$1_EnclosingMethodInfo_,
	_SecretKeySpec$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.spec.SecretKeySpec"
};

$Object* allocate$SecretKeySpec$1($Class* clazz) {
	return $of($alloc(SecretKeySpec$1));
}

void SecretKeySpec$1::init$() {
}

void SecretKeySpec$1::clearSecretKeySpec($SecretKeySpec* keySpec) {
	$nc(keySpec)->clear();
}

SecretKeySpec$1::SecretKeySpec$1() {
}

$Class* SecretKeySpec$1::load$($String* name, bool initialize) {
	$loadClass(SecretKeySpec$1, name, initialize, &_SecretKeySpec$1_ClassInfo_, allocate$SecretKeySpec$1);
	return class$;
}

$Class* SecretKeySpec$1::class$ = nullptr;

		} // spec
	} // crypto
} // javax