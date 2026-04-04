#include <java/lang/AssertionStatusDirectives.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void AssertionStatusDirectives::init$() {
}

AssertionStatusDirectives::AssertionStatusDirectives() {
}

$Class* AssertionStatusDirectives::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classes", "[Ljava/lang/String;", nullptr, 0, $field(AssertionStatusDirectives, classes)},
		{"classEnabled", "[Z", nullptr, 0, $field(AssertionStatusDirectives, classEnabled)},
		{"packages", "[Ljava/lang/String;", nullptr, 0, $field(AssertionStatusDirectives, packages)},
		{"packageEnabled", "[Z", nullptr, 0, $field(AssertionStatusDirectives, packageEnabled)},
		{"deflt", "Z", nullptr, 0, $field(AssertionStatusDirectives, deflt)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AssertionStatusDirectives, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.AssertionStatusDirectives",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AssertionStatusDirectives, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AssertionStatusDirectives);
	});
	return class$;
}

$Class* AssertionStatusDirectives::class$ = nullptr;

	} // lang
} // java