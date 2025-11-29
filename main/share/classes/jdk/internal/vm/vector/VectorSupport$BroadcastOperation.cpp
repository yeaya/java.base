#include <jdk/internal/vm/vector/VectorSupport$BroadcastOperation.h>

#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$BroadcastOperation_MethodInfo_[] = {
	{"broadcast", "(JLjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljava/lang/Object;", "(JTS;)TVM;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$BroadcastOperation_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$BroadcastOperation", "jdk.internal.vm.vector.VectorSupport", "BroadcastOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$BroadcastOperation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$BroadcastOperation",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$BroadcastOperation_MethodInfo_,
	"<VM:Ljava/lang/Object;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$BroadcastOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$BroadcastOperation($Class* clazz) {
	return $of($alloc(VectorSupport$BroadcastOperation));
}

$Class* VectorSupport$BroadcastOperation::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$BroadcastOperation, name, initialize, &_VectorSupport$BroadcastOperation_ClassInfo_, allocate$VectorSupport$BroadcastOperation);
	return class$;
}

$Class* VectorSupport$BroadcastOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk