#include <jdk/internal/access/JavaNetURLAccess.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaNetURLAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getHandler", "(Ljava/net/URL;)Ljava/net/URLStreamHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaNetURLAccess, getHandler, $URLStreamHandler*, $URL*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaNetURLAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaNetURLAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaNetURLAccess);
	});
	return class$;
}

$Class* JavaNetURLAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk