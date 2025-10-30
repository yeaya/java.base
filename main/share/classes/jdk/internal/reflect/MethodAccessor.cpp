#include <jdk/internal/reflect/MethodAccessor.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _MethodAccessor_MethodInfo_[] = {
	{"invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
	{"*invokeSpecial", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 1},
	{"*invokev", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 1},
	{}
};

$ClassInfo _MethodAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.reflect.MethodAccessor",
	nullptr,
	nullptr,
	nullptr,
	_MethodAccessor_MethodInfo_
};

$Object* allocate$MethodAccessor($Class* clazz) {
	return $of($alloc(MethodAccessor));
}

$Class* MethodAccessor::load$($String* name, bool initialize) {
	$loadClass(MethodAccessor, name, initialize, &_MethodAccessor_ClassInfo_, allocate$MethodAccessor);
	return class$;
}

$Class* MethodAccessor::class$ = nullptr;

		} // reflect
	} // internal
} // jdk