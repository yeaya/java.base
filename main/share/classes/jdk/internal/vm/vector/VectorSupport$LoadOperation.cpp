#include <jdk/internal/vm/vector/VectorSupport$LoadOperation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$LoadOperation_MethodInfo_[] = {
	{"load", "(Ljava/lang/Object;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljava/lang/Object;", "(TC;ITS;)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$LoadOperation_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$LoadOperation", "jdk.internal.vm.vector.VectorSupport", "LoadOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$LoadOperation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$LoadOperation",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$LoadOperation_MethodInfo_,
	"<C:Ljava/lang/Object;V:Ljava/lang/Object;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$LoadOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$LoadOperation($Class* clazz) {
	return $of($alloc(VectorSupport$LoadOperation));
}

$Class* VectorSupport$LoadOperation::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$LoadOperation, name, initialize, &_VectorSupport$LoadOperation_ClassInfo_, allocate$VectorSupport$LoadOperation);
	return class$;
}

$Class* VectorSupport$LoadOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk