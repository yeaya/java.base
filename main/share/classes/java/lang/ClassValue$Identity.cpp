#include <java/lang/ClassValue$Identity.h>
#include <java/lang/ClassValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ClassValue$Identity::init$() {
}

ClassValue$Identity::ClassValue$Identity() {
}

$Class* ClassValue$Identity::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassValue$Identity, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ClassValue$Identity", "java.lang.ClassValue", "Identity", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ClassValue$Identity",
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
		"java.lang.ClassValue"
	};
	$loadClass(ClassValue$Identity, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassValue$Identity);
	});
	return class$;
}

$Class* ClassValue$Identity::class$ = nullptr;

	} // lang
} // java