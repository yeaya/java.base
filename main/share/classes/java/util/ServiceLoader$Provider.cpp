#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$Class* ServiceLoader$Provider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"type", "()Ljava/lang/Class;", "()Ljava/lang/Class<+TS;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ServiceLoader$Provider, type, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ServiceLoader$Provider", "java.util.ServiceLoader", "Provider", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.ServiceLoader$Provider",
		nullptr,
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/function/Supplier<TS;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ServiceLoader"
	};
	$loadClass(ServiceLoader$Provider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceLoader$Provider);
	});
	return class$;
}

$Class* ServiceLoader$Provider::class$ = nullptr;

	} // util
} // java