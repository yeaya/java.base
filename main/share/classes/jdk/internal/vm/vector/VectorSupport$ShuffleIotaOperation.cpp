#include <jdk/internal/vm/vector/VectorSupport$ShuffleIotaOperation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorShuffle.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$VectorShuffle = ::jdk::internal::vm::vector::VectorSupport$VectorShuffle;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$ShuffleIotaOperation_MethodInfo_[] = {
	{"apply", "(IIILjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljdk/internal/vm/vector/VectorSupport$VectorShuffle;", "(IIITS;)Ljdk/internal/vm/vector/VectorSupport$VectorShuffle<TE;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$ShuffleIotaOperation_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$ShuffleIotaOperation", "jdk.internal.vm.vector.VectorSupport", "ShuffleIotaOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$ShuffleIotaOperation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$ShuffleIotaOperation",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$ShuffleIotaOperation_MethodInfo_,
	"<E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$ShuffleIotaOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$ShuffleIotaOperation($Class* clazz) {
	return $of($alloc(VectorSupport$ShuffleIotaOperation));
}

$Class* VectorSupport$ShuffleIotaOperation::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$ShuffleIotaOperation, name, initialize, &_VectorSupport$ShuffleIotaOperation_ClassInfo_, allocate$VectorSupport$ShuffleIotaOperation);
	return class$;
}

$Class* VectorSupport$ShuffleIotaOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk