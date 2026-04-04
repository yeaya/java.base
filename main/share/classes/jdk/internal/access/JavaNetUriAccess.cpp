#include <jdk/internal/access/JavaNetUriAccess.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaNetUriAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"create", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNetUriAccess, create, $URI*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaNetUriAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaNetUriAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaNetUriAccess);
	});
	return class$;
}

$Class* JavaNetUriAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk