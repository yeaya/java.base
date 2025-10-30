#include <jdk/internal/vm/vector/VectorSupport$IndexOperation.h>

#include <jdk/internal/vm/vector/VectorSupport$Vector.h>
#include <jdk/internal/vm/vector/VectorSupport$VectorSpecies.h>
#include <jdk/internal/vm/vector/VectorSupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VectorSupport = ::jdk::internal::vm::vector::VectorSupport;
using $VectorSupport$Vector = ::jdk::internal::vm::vector::VectorSupport$Vector;
using $VectorSupport$VectorSpecies = ::jdk::internal::vm::vector::VectorSupport$VectorSpecies;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace vector {

$MethodInfo _VectorSupport$IndexOperation_MethodInfo_[] = {
	{"index", "(Ljdk/internal/vm/vector/VectorSupport$Vector;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;ITS;)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _VectorSupport$IndexOperation_InnerClassesInfo_[] = {
	{"jdk.internal.vm.vector.VectorSupport$IndexOperation", "jdk.internal.vm.vector.VectorSupport", "IndexOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
	{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _VectorSupport$IndexOperation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.vm.vector.VectorSupport$IndexOperation",
	nullptr,
	nullptr,
	nullptr,
	_VectorSupport$IndexOperation_MethodInfo_,
	"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
	nullptr,
	_VectorSupport$IndexOperation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.vm.vector.VectorSupport"
};

$Object* allocate$VectorSupport$IndexOperation($Class* clazz) {
	return $of($alloc(VectorSupport$IndexOperation));
}

$Class* VectorSupport$IndexOperation::load$($String* name, bool initialize) {
	$loadClass(VectorSupport$IndexOperation, name, initialize, &_VectorSupport$IndexOperation_ClassInfo_, allocate$VectorSupport$IndexOperation);
	return class$;
}

$Class* VectorSupport$IndexOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk