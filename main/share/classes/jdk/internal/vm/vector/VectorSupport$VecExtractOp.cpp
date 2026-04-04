#include <jdk/internal/vm/vector/VectorSupport$VecExtractOp.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VecExtractOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;I)J", "(TV;I)J", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VecExtractOp, apply, int64_t, Object$*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VecExtractOp", "jdk.internal.vm.vector.VectorSupport", "VecExtractOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VecExtractOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VecExtractOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VecExtractOp);
	});
	return class$;
}

$Class* VectorSupport$VecExtractOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk