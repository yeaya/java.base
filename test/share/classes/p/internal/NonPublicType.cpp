#include <p/internal/NonPublicType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace internal {

$Object* NonPublicType::obj = nullptr;

void NonPublicType::init$() {
}

void NonPublicType::clinit$($Class* clazz) {
	$assignStatic(NonPublicType::obj, $new($Object));
}

NonPublicType::NonPublicType() {
}

$Class* NonPublicType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonPublicType, obj)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NonPublicType, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"p.internal.NonPublicType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NonPublicType, name, initialize, &classInfo$$, NonPublicType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublicType);
	});
	return class$;
}

$Class* NonPublicType::class$ = nullptr;

	} // internal
} // p