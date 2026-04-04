#include <jdk/internal/access/JavaUtilCollectionAccess.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaUtilCollectionAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"listFromTrustedArray", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilCollectionAccess, listFromTrustedArray, $List*, $ObjectArray*)},
		{"listFromTrustedArrayNullsAllowed", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilCollectionAccess, listFromTrustedArrayNullsAllowed, $List*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaUtilCollectionAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaUtilCollectionAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaUtilCollectionAccess);
	});
	return class$;
}

$Class* JavaUtilCollectionAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk