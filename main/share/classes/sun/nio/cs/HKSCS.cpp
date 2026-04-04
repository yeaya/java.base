#include <sun/nio/cs/HKSCS.h>
#include <jcpp.h>

#undef HKSCS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

void HKSCS::init$() {
}

HKSCS::HKSCS() {
}

$Class* HKSCS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HKSCS, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.HKSCS$Encoder", "sun.nio.cs.HKSCS", "Encoder", $PUBLIC | $STATIC},
		{"sun.nio.cs.HKSCS$Decoder", "sun.nio.cs.HKSCS", "Decoder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.HKSCS",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.HKSCS$Encoder,sun.nio.cs.HKSCS$Decoder"
	};
	$loadClass(HKSCS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HKSCS);
	});
	return class$;
}

$Class* HKSCS::class$ = nullptr;

		} // cs
	} // nio
} // sun