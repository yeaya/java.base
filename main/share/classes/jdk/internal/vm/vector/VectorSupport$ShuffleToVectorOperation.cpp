#include <jdk/internal/vm/vector/VectorSupport$ShuffleToVectorOperation.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$ShuffleToVectorOperation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TSh;)TVM;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$ShuffleToVectorOperation, apply, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$ShuffleToVectorOperation", "jdk.internal.vm.vector.VectorSupport", "ShuffleToVectorOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$ShuffleToVectorOperation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<VM:Ljava/lang/Object;Sh:Ljava/lang/Object;E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$ShuffleToVectorOperation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$ShuffleToVectorOperation);
	});
	return class$;
}

$Class* VectorSupport$ShuffleToVectorOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk