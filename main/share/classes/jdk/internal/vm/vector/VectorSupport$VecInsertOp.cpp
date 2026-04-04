#include <jdk/internal/vm/vector/VectorSupport$VecInsertOp.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VecInsertOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;IJ)Ljava/lang/Object;", "(TV;IJ)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VecInsertOp, apply, $Object*, Object$*, int32_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VecInsertOp", "jdk.internal.vm.vector.VectorSupport", "VecInsertOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VecInsertOp",
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
	$loadClass(VectorSupport$VecInsertOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VecInsertOp);
	});
	return class$;
}

$Class* VectorSupport$VecInsertOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk