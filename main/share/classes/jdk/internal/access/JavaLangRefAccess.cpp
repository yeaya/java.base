#include <jdk/internal/access/JavaLangRefAccess.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaLangRefAccess_MethodInfo_[] = {
	{"runFinalization", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"waitForReferenceProcessing", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException"},
	{}
};

$ClassInfo _JavaLangRefAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaLangRefAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaLangRefAccess_MethodInfo_
};

$Object* allocate$JavaLangRefAccess($Class* clazz) {
	return $of($alloc(JavaLangRefAccess));
}

$Class* JavaLangRefAccess::load$($String* name, bool initialize) {
	$loadClass(JavaLangRefAccess, name, initialize, &_JavaLangRefAccess_ClassInfo_, allocate$JavaLangRefAccess);
	return class$;
}

$Class* JavaLangRefAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk