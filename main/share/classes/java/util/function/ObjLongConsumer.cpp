#include <java/util/function/ObjLongConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ObjLongConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;J)V", "(TT;J)V", $PUBLIC | $ABSTRACT, $virtualMethod(ObjLongConsumer, accept, void, Object$*, int64_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ObjLongConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ObjLongConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjLongConsumer);
	});
	return class$;
}

$Class* ObjLongConsumer::class$ = nullptr;

		} // function
	} // util
} // java