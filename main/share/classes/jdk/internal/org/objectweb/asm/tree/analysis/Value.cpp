#include <jdk/internal/org/objectweb/asm/tree/analysis/Value.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {
						namespace analysis {

$Class* Value::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Value, getSize, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.org.objectweb.asm.tree.analysis.Value",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Value, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Value);
	});
	return class$;
}

$Class* Value::class$ = nullptr;

						} // analysis
					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk