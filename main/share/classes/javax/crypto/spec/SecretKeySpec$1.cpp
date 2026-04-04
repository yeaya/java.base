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

void SecretKeySpec$1::init$() {
}

void SecretKeySpec$1::clearSecretKeySpec($SecretKeySpec* keySpec) {
	$nc(keySpec)->clear();
}

SecretKeySpec$1::SecretKeySpec$1() {
}

$Class* SecretKeySpec$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SecretKeySpec$1, init$, void)},
		{"clearSecretKeySpec", "(Ljavax/crypto/spec/SecretKeySpec;)V", nullptr, $PUBLIC, $virtualMethod(SecretKeySpec$1, clearSecretKeySpec, void, $SecretKeySpec*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.crypto.spec.SecretKeySpec",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.spec.SecretKeySpec$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.crypto.spec.SecretKeySpec$1",
		"java.lang.Object",
		"jdk.internal.access.JavaxCryptoSpecAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.crypto.spec.SecretKeySpec"
	};
	$loadClass(SecretKeySpec$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecretKeySpec$1);
	});
	return class$;
}

$Class* SecretKeySpec$1::class$ = nullptr;

		} // spec
	} // crypto
} // javax