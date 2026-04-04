#include <jdk/internal/vm/vector/VectorSupport$VectorMaskOp.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VectorMaskOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;)I", "(TM;)I", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VectorMaskOp, apply, int32_t, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorMaskOp", "jdk.internal.vm.vector.VectorSupport", "VectorMaskOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VectorMaskOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<M:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorMaskOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorMaskOp);
	});
	return class$;
}

$Class* VectorSupport$VectorMaskOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk