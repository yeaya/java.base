#include <java/util/function/ObjIntConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ObjIntConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;I)V", "(TT;I)V", $PUBLIC | $ABSTRACT, $virtualMethod(ObjIntConsumer, accept, void, Object$*, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ObjIntConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ObjIntConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjIntConsumer);
	});
	return class$;
}

$Class* ObjIntConsumer::class$ = nullptr;

		} // function
	} // util
} // java