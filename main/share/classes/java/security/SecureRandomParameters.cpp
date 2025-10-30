#include <java/security/SecureRandomParameters.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace security {

$ClassInfo _SecureRandomParameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.SecureRandomParameters"
};

$Object* allocate$SecureRandomParameters($Class* clazz) {
	return $of($alloc(SecureRandomParameters));
}

$Class* SecureRandomParameters::load$($String* name, bool initialize) {
	$loadClass(SecureRandomParameters, name, initialize, &_SecureRandomParameters_ClassInfo_, allocate$SecureRandomParameters);
	return class$;
}

$Class* SecureRandomParameters::class$ = nullptr;

	} // security
} // java