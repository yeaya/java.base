#include <jdk/internal/vm/vector/VectorSupport$VectorCompareOp.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VectorCompareOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(ILjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(ITV;TV;)TM;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VectorCompareOp, apply, $Object*, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorCompareOp", "jdk.internal.vm.vector.VectorSupport", "VectorCompareOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VectorCompareOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljava/lang/Object;M:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorCompareOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorCompareOp);
	});
	return class$;
}

$Class* VectorSupport$VectorCompareOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk