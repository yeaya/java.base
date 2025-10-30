#include <jdk/internal/access/JavaObjectInputFilterAccess.h>

#include <java/io/ObjectInputFilter.h>
#include <jcpp.h>

using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaObjectInputFilterAccess_MethodInfo_[] = {
	{"createFilter2", "(Ljava/lang/String;)Ljava/io/ObjectInputFilter;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaObjectInputFilterAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaObjectInputFilterAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaObjectInputFilterAccess_MethodInfo_
};

$Object* allocate$JavaObjectInputFilterAccess($Class* clazz) {
	return $of($alloc(JavaObjectInputFilterAccess));
}

$Class* JavaObjectInputFilterAccess::load$($String* name, bool initialize) {
	$loadClass(JavaObjectInputFilterAccess, name, initialize, &_JavaObjectInputFilterAccess_ClassInfo_, allocate$JavaObjectInputFilterAccess);
	return class$;
}

$Class* JavaObjectInputFilterAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk