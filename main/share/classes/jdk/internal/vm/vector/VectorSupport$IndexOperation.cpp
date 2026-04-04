#include <jdk/internal/vm/vector/VectorSupport$IndexOperation.h>
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

$Class* VectorSupport$IndexOperation::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"index", "(Ljdk/internal/vm/vector/VectorSupport$Vector;ILjdk/internal/vm/vector/VectorSupport$VectorSpecies;)Ljdk/internal/vm/vector/VectorSupport$Vector;", "(TV;ITS;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(VectorSupport$IndexOperation, index, $VectorSupport$Vector*, $VectorSupport$Vector*, int32_t, $VectorSupport$VectorSpecies*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.vm.vector.VectorSupport$IndexOperation", "jdk.internal.vm.vector.VectorSupport", "IndexOperation", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.vm.vector.VectorSupport$Vector", "jdk.internal.vm.vector.VectorSupport", "Vector", $PUBLIC | $STATIC},
		{"jdk.internal.vm.vector.VectorSupport$VectorSpecies", "jdk.internal.vm.vector.VectorSupport", "VectorSpecies", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.vm.vector.VectorSupport$IndexOperation",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<V:Ljdk/internal/vm/vector/VectorSupport$Vector<TE;>;E:Ljava/lang/Object;S:Ljdk/internal/vm/vector/VectorSupport$VectorSpecies<TE;>;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.vm.vector.VectorSupport"
	};
	$loadClass(VectorSupport$IndexOperation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VectorSupport$IndexOperation);
	});
	return class$;
}

$Class* VectorSupport$IndexOperation::class$ = nullptr;

			} // vector
		} // vm
	} // internal
} // jdk