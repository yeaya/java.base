#include <jdk/internal/access/JavaxCryptoSpecAccess.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaxCryptoSpecAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clearSecretKeySpec", "(Ljavax/crypto/spec/SecretKeySpec;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaxCryptoSpecAccess, clearSecretKeySpec, void, $SecretKeySpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaxCryptoSpecAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaxCryptoSpecAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaxCryptoSpecAccess);
	});
	return class$;
}

$Class* JavaxCryptoSpecAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk