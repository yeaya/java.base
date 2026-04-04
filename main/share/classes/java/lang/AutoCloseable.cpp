#include <java/lang/AutoCloseable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$Class* AutoCloseable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AutoCloseable, close, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.AutoCloseable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AutoCloseable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AutoCloseable);
	});
	return class$;
}

$Class* AutoCloseable::class$ = nullptr;

	} // lang
} // java