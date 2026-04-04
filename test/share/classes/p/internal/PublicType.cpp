#include <p/internal/PublicType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace internal {

void PublicType::init$() {
}

PublicType::PublicType() {
}

$Class* PublicType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PublicType, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"p.internal.PublicType",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PublicType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PublicType);
	});
	return class$;
}

$Class* PublicType::class$ = nullptr;

	} // internal
} // p