#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperationWithMap.h>
#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$Class* VectorSupport$StoreVectorOperationWithMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"storeWithMap", "(Ljava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$Vector;[II)V", "(TC;ITV;[II)V", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$StoreVectorOperationWithMap, storeWithMap, void, Object$*, int32_t, $VectorSupport$Vector*, $ints*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$StoreVectorOperationWithMap", "jdk.internal.vm.vector.VectorSupport", "StoreVectorOperationWithMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$StoreVectorOperationWithMap",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$StoreVectorOperationWithMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$StoreVectorOperationWithMap);
	});
	return class$;
}

$Class* VectorSupport$StoreVectorOperationWithMap::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk