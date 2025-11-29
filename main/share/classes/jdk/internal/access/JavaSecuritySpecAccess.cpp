#include <jdk/internal/access/JavaSecuritySpecAccess.h>

#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaSecuritySpecAccess_MethodInfo_[] = {
	{"clearEncodedKeySpec", "(Ljava/security/spec/EncodedKeySpec;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaSecuritySpecAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaSecuritySpecAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaSecuritySpecAccess_MethodInfo_
};

$Object* allocate$JavaSecuritySpecAccess($Class* clazz) {
	return $of($alloc(JavaSecuritySpecAccess));
}

$Class* JavaSecuritySpecAccess::load$($String* name, bool initialize) {
	$loadClass(JavaSecuritySpecAccess, name, initialize, &_JavaSecuritySpecAccess_ClassInfo_, allocate$JavaSecuritySpecAccess);
	return class$;
}

$Class* JavaSecuritySpecAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk