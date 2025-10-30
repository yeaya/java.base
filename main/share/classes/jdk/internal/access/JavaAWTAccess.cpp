#include <jdk/internal/access/JavaAWTAccess.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaAWTAccess_MethodInfo_[] = {
	{"getAppletContext", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _JavaAWTAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaAWTAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaAWTAccess_MethodInfo_
};

$Object* allocate$JavaAWTAccess($Class* clazz) {
	return $of($alloc(JavaAWTAccess));
}

$Class* JavaAWTAccess::load$($String* name, bool initialize) {
	$loadClass(JavaAWTAccess, name, initialize, &_JavaAWTAccess_ClassInfo_, allocate$JavaAWTAccess);
	return class$;
}

$Class* JavaAWTAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk