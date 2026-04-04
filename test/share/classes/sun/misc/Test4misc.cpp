#include <sun/misc/Test4misc.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

#undef LOOKUP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace sun {
	namespace misc {

$MethodHandles$Lookup* Test4misc::LOOKUP = nullptr;

void Test4misc::init$() {
}

void Test4misc::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(Test4misc::LOOKUP, $MethodHandles::lookup());
}

Test4misc::Test4misc() {
}

$Class* Test4misc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOOKUP", "Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Test4misc, LOOKUP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test4misc, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.misc.Test4misc",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test4misc, name, initialize, &classInfo$$, Test4misc::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test4misc);
	});
	return class$;
}

$Class* Test4misc::class$ = nullptr;

	} // misc
} // sun