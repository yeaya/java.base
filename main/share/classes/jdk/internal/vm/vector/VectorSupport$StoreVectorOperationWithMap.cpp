#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperationWithMap.h>

#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$StoreVectorOperationWithMap_MethodInfo_[] = {
	{"storeWithMap", "(Ljava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$Vector;[II)V", "(TC;ITV;[II)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$StoreVectorOperationWithMap_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$StoreVectorOperationWithMap", "jdk.internal.vm.vector.VectorSupport", "StoreVectorOperationWithMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$StoreVectorOperationWithMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$StoreVectorOperationWithMap",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$StoreVectorOperationWithMap_MethodInfo_,
	"<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$StoreVectorOperationWithMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$StoreVectorOperationWithMap($Class* clazz) {
	return $of($alloc(VectorSupport$StoreVectorOperationWithMap));
}

$Class* VectorSupport$StoreVectorOperationWithMap::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$StoreVectorOperationWithMap, name, initialize, &_VectorSupport$StoreVectorOperationWithMap_ClassInfo_, allocate$VectorSupport$StoreVectorOperationWithMap);
	return class$;
}

$Class* VectorSupport$StoreVectorOperationWithMap::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk