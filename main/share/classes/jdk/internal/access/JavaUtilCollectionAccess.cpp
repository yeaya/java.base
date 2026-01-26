#include <jdk/internal/access/JavaUtilCollectionAccess.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaUtilCollectionAccess_MethodInfo_[] = {
	{"listFromTrustedArray", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilCollectionAccess, listFromTrustedArray, $List*, $ObjectArray*)},
	{"listFromTrustedArrayNullsAllowed", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaUtilCollectionAccess, listFromTrustedArrayNullsAllowed, $List*, $ObjectArray*)},
	{}
};

$ClassInfo _JavaUtilCollectionAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaUtilCollectionAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaUtilCollectionAccess_MethodInfo_
};

$Object* allocate$JavaUtilCollectionAccess($Class* clazz) {
	return $of($alloc(JavaUtilCollectionAccess));
}

$Class* JavaUtilCollectionAccess::load$($String* name, bool initialize) {
	$loadClass(JavaUtilCollectionAccess, name, initialize, &_JavaUtilCollectionAccess_ClassInfo_, allocate$JavaUtilCollectionAccess);
	return class$;
}

$Class* JavaUtilCollectionAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk