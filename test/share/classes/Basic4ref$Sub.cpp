#include <Basic4ref$Sub.h>
#include <Basic4ref.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4ref$Sub::init$() {
}

Basic4ref$Sub::Basic4ref$Sub() {
}

$Class* Basic4ref$Sub::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Basic4ref$Sub, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4ref$Sub", "Basic4ref", "Sub", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Basic4ref$Sub",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic4ref"
	};
	$loadClass(Basic4ref$Sub, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4ref$Sub);
	});
	return class$;
}

$Class* Basic4ref$Sub::class$ = nullptr;