#include <sun/security/util/MessageDigestSpi2.h>

#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _MessageDigestSpi2_MethodInfo_[] = {
	{"engineUpdate", "(Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _MessageDigestSpi2_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.MessageDigestSpi2",
	nullptr,
	nullptr,
	nullptr,
	_MessageDigestSpi2_MethodInfo_
};

$Object* allocate$MessageDigestSpi2($Class* clazz) {
	return $of($alloc(MessageDigestSpi2));
}

$Class* MessageDigestSpi2::load$($String* name, bool initialize) {
	$loadClass(MessageDigestSpi2, name, initialize, &_MessageDigestSpi2_ClassInfo_, allocate$MessageDigestSpi2);
	return class$;
}

$Class* MessageDigestSpi2::class$ = nullptr;

		} // util
	} // security
} // sun