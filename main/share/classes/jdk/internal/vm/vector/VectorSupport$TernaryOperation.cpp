#include <jdk/internal/vm/vector/VectorSupport$TernaryOperation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$TernaryOperation_MethodInfo_[] = {
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TV;TV;TV;)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$TernaryOperation_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$TernaryOperation", "jdk.internal.vm.vector.VectorSupport", "TernaryOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _VectorSupport$TernaryOperation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$TernaryOperation",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$TernaryOperation_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$TernaryOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$TernaryOperation($Class* clazz) {
	return $of($alloc(VectorSupport$TernaryOperation));
}

$Class* VectorSupport$TernaryOperation::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$TernaryOperation, name, initialize, &_VectorSupport$TernaryOperation_ClassInfo_, allocate$VectorSupport$TernaryOperation);
	return class$;
}

$Class* VectorSupport$TernaryOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk