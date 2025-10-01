#include <jdk/internal/vm/vector/VectorSupport$StoreVectorOperation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _VectorSupport$StoreVectorOperation_MethodInfo_[] = {
	{"store", "(Ljava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$Vector;)V", "(TC;ITV;)V", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$StoreVectorOperation_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$StoreVectorOperation", "jdk.internal.vm.vector.VectorSupport", "StoreVectorOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$StoreVectorOperation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$StoreVectorOperation",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$StoreVectorOperation_MethodInfo_,
	"<C:Ljava/lang/Object;V:Ljdk/internal/vm/vector/VectorSupport$Vector<*>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$StoreVectorOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$StoreVectorOperation($Class* clazz) {
	return $of($alloc(VectorSupport$StoreVectorOperation));
}

$Class* VectorSupport$StoreVectorOperation::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$StoreVectorOperation, name, initialize, &_VectorSupport$StoreVectorOperation_ClassInfo_, allocate$VectorSupport$StoreVectorOperation);
	return class$;
}

$Class* VectorSupport$StoreVectorOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk