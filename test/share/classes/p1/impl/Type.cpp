#include <p1/impl/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {
	namespace impl {

void Type::init$() {
}

Type::Type() {
}

$Class* Type::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Type, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p1.impl.Type",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Type, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type);
	});
	return class$;
}

$Class* Type::class$ = nullptr;

	} // impl
} // p1