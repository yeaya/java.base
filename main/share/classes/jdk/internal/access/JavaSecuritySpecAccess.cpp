#include <jdk/internal/access/JavaSecuritySpecAccess.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaSecuritySpecAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"clearEncodedKeySpec", "(Ljava/security/spec/EncodedKeySpec;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaSecuritySpecAccess, clearEncodedKeySpec, void, $EncodedKeySpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaSecuritySpecAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaSecuritySpecAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaSecuritySpecAccess);
	});
	return class$;
}

$Class* JavaSecuritySpecAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk