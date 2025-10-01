#include <java/security/SecureRandomParameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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