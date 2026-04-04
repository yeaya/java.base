#include <jdk/internal/icu/util/OutputInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

void OutputInt::init$() {
}

OutputInt::OutputInt() {
}

$Class* OutputInt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, $PUBLIC, $field(OutputInt, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OutputInt, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.icu.util.OutputInt",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OutputInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OutputInt);
	});
	return class$;
}

$Class* OutputInt::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk