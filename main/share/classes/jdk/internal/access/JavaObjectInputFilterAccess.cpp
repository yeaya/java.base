#include <jdk/internal/access/JavaObjectInputFilterAccess.h>
#include <java/io/ObjectInputFilter.h>
#include <jcpp.h>

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaObjectInputFilterAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createFilter2", "(Ljava/lang/String;)Ljava/io/ObjectInputFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaObjectInputFilterAccess, createFilter2, $ObjectInputFilter*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaObjectInputFilterAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaObjectInputFilterAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaObjectInputFilterAccess);
	});
	return class$;
}

$Class* JavaObjectInputFilterAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk