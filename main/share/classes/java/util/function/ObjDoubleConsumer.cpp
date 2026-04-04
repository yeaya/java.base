#include <java/util/function/ObjDoubleConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$Class* ObjDoubleConsumer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/lang/Object;D)V", "(TT;D)V", $PUBLIC | $ABSTRACT, $virtualMethod(ObjDoubleConsumer, accept, void, Object$*, double)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.function.ObjDoubleConsumer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ObjDoubleConsumer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjDoubleConsumer);
	});
	return class$;
}

$Class* ObjDoubleConsumer::class$ = nullptr;

		} // function
	} // util
} // java