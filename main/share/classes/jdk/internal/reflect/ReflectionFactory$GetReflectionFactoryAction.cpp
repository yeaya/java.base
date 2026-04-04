#include <jdk/internal/reflect/ReflectionFactory$GetReflectionFactoryAction.h>
#include <jdk/internal/reflect/ReflectionFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;

namespace jdk {
	namespace internal {
		namespace reflect {

void ReflectionFactory$GetReflectionFactoryAction::init$() {
}

$Object* ReflectionFactory$GetReflectionFactoryAction::run() {
	return $ReflectionFactory::getReflectionFactory();
}

ReflectionFactory$GetReflectionFactoryAction::ReflectionFactory$GetReflectionFactoryAction() {
}

$Class* ReflectionFactory$GetReflectionFactoryAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReflectionFactory$GetReflectionFactoryAction, init$, void)},
		{"run", "()Ljdk/internal/reflect/ReflectionFactory;", nullptr, $PUBLIC, $virtualMethod(ReflectionFactory$GetReflectionFactoryAction, run, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.reflect.ReflectionFactory$GetReflectionFactoryAction", "jdk.internal.reflect.ReflectionFactory", "GetReflectionFactoryAction", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.reflect.ReflectionFactory$GetReflectionFactoryAction",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/reflect/ReflectionFactory;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.reflect.ReflectionFactory"
	};
	$loadClass(ReflectionFactory$GetReflectionFactoryAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReflectionFactory$GetReflectionFactoryAction);
	});
	return class$;
}

$Class* ReflectionFactory$GetReflectionFactoryAction::class$ = nullptr;

		} // reflect
	} // internal
} // jdk