#include <jdk/internal/access/JavaNetUriAccess.h>

#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaNetUriAccess_MethodInfo_[] = {
	{"create", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaNetUriAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaNetUriAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaNetUriAccess_MethodInfo_
};

$Object* allocate$JavaNetUriAccess($Class* clazz) {
	return $of($alloc(JavaNetUriAccess));
}

$Class* JavaNetUriAccess::load$($String* name, bool initialize) {
	$loadClass(JavaNetUriAccess, name, initialize, &_JavaNetUriAccess_ClassInfo_, allocate$JavaNetUriAccess);
	return class$;
}

$Class* JavaNetUriAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk