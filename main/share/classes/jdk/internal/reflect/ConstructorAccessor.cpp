#include <jdk/internal/reflect/ConstructorAccessor.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$MethodInfo _ConstructorAccessor_MethodInfo_[] = {
	{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
	{}
};

$ClassInfo _ConstructorAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.reflect.ConstructorAccessor",
	nullptr,
	nullptr,
	nullptr,
	_ConstructorAccessor_MethodInfo_
};

$Object* allocate$ConstructorAccessor($Class* clazz) {
	return $of($alloc(ConstructorAccessor));
}

$Class* ConstructorAccessor::load$($String* name, bool initialize) {
	$loadClass(ConstructorAccessor, name, initialize, &_ConstructorAccessor_ClassInfo_, allocate$ConstructorAccessor);
	return class$;
}

$Class* ConstructorAccessor::class$ = nullptr;

		} // reflect
	} // internal
} // jdk