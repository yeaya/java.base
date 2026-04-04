#include <java/util/Observer.h>
#include <java/util/Observable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Observable = ::java::util::Observable;

namespace java {
	namespace util {

$Class* Observer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"update", "(Ljava/util/Observable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Observer, update, void, $Observable*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.Observer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Observer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Observer);
	});
	return class$;
}

$Class* Observer::class$ = nullptr;

	} // util
} // java