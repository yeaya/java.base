#include <sun/security/timestamp/Timestamper.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/timestamp/TSRequest.h>
#include <sun/security/timestamp/TSResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TSRequest = ::sun::security::timestamp::TSRequest;
using $TSResponse = ::sun::security::timestamp::TSResponse;

namespace sun {
	namespace security {
		namespace timestamp {

$MethodInfo _Timestamper_MethodInfo_[] = {
	{"generateTimestamp", "(Lsun/security/timestamp/TSRequest;)Lsun/security/timestamp/TSResponse;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Timestamper_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.timestamp.Timestamper",
	nullptr,
	nullptr,
	nullptr,
	_Timestamper_MethodInfo_
};

$Object* allocate$Timestamper($Class* clazz) {
	return $of($alloc(Timestamper));
}

$Class* Timestamper::load$($String* name, bool initialize) {
	$loadClass(Timestamper, name, initialize, &_Timestamper_ClassInfo_, allocate$Timestamper);
	return class$;
}

$Class* Timestamper::class$ = nullptr;

		} // timestamp
	} // security
} // sun