#include <jdk/internal/vm/vector/VectorSupport$LoadVectorOperationWithMap.h>

#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$LoadVectorOperationWithMap_MethodInfo_[] = {
	{"loadWithMap", "(Ljava/lang/Object;I[IILjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TC;I[IITS;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$LoadVectorOperationWithMap, loadWithMap, $VectorSupport$Vector*, Object$*, int32_t, $ints*, int32_t, $VectorSupport$VectorSpecies*)},
	{}
};

$InnerClassInfo _VectorSupport$LoadVectorOperationWithMap_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$LoadVectorOperationWithMap", "jdk.internal.vm.vector.VectorSupport", "LoadVectorOperationWithMap", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$LoadVectorOperationWithMap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$LoadVectorOperationWithMap",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$LoadVectorOperationWithMap_MethodInfo_,
	"<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$LoadVectorOperationWithMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$LoadVectorOperationWithMap($Class* clazz) {
	return $of($alloc(VectorSupport$LoadVectorOperationWithMap));
}

$Class* VectorSupport$LoadVectorOperationWithMap::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$LoadVectorOperationWithMap, name, initialize, &_VectorSupport$LoadVectorOperationWithMap_ClassInfo_, allocate$VectorSupport$LoadVectorOperationWithMap);
	return class$;
}

$Class* VectorSupport$LoadVectorOperationWithMap::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk