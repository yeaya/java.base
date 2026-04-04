#include <sun/security/util/MessageDigestSpi2.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;

namespace sun {
	namespace security {
		namespace util {

$Class* MessageDigestSpi2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"engineUpdate", "(Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MessageDigestSpi2, engineUpdate, void, $SecretKey*), "java.security.InvalidKeyException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.util.MessageDigestSpi2",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MessageDigestSpi2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MessageDigestSpi2);
	});
	return class$;
}

$Class* MessageDigestSpi2::class$ = nullptr;

		} // util
	} // security
} // sun