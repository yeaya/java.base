#include <jdk/internal/vm/vector/VectorSupport$VectorConvertOp.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$VectorConvertOp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TVIN;TS;)TVOUT;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$VectorConvertOp, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$VectorConvertOp", "jdk.internal.vm.vector.VectorSupport", "VectorConvertOp", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$VectorConvertOp",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<VOUT:Ljava/lang/Object;VIN:Ljava/lang/Object;S:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$VectorConvertOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$VectorConvertOp);
	});
	return class$;
}

$Class* VectorSupport$VectorConvertOp::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk