#include <jdk/internal/access/JavaxCryptoSpecAccess.h>

#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaxCryptoSpecAccess_MethodInfo_[] = {
	{"clearSecretKeySpec", "(Ljavax/crypto/spec/SecretKeySpec;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaxCryptoSpecAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaxCryptoSpecAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaxCryptoSpecAccess_MethodInfo_
};

$Object* allocate$JavaxCryptoSpecAccess($Class* clazz) {
	return $of($alloc(JavaxCryptoSpecAccess));
}

$Class* JavaxCryptoSpecAccess::load$($String* name, bool initialize) {
	$loadClass(JavaxCryptoSpecAccess, name, initialize, &_JavaxCryptoSpecAccess_ClassInfo_, allocate$JavaxCryptoSpecAccess);
	return class$;
}

$Class* JavaxCryptoSpecAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk