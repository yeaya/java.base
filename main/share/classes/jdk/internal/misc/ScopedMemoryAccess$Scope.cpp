#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope$Handle.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScopedMemoryAccess$Scope$Handle = ::jdk::internal::misc::ScopedMemoryAccess$Scope$Handle;

namespace jdk {
	namespace internal {
		namespace misc {

$Class* ScopedMemoryAccess$Scope::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"acquire", "()Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScopedMemoryAccess$Scope, acquire, $ScopedMemoryAccess$Scope$Handle*)},
		{"checkValidState", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScopedMemoryAccess$Scope, checkValidState, void)},
		{"isImplicit", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScopedMemoryAccess$Scope, isImplicit, bool)},
		{"ownerThread", "()Ljava/lang/Thread;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScopedMemoryAccess$Scope, ownerThread, $Thread*)},
		{"release", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScopedMemoryAccess$Scope, release, void, $ScopedMemoryAccess$Scope$Handle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError", "jdk.internal.misc.ScopedMemoryAccess$Scope", "ScopedAccessError", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.misc.ScopedMemoryAccess$Scope$Handle", "jdk.internal.misc.ScopedMemoryAccess$Scope", "Handle", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.misc.ScopedMemoryAccess$Scope",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.ScopedMemoryAccess"
	};
	$loadClass(ScopedMemoryAccess$Scope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScopedMemoryAccess$Scope);
	});
	return class$;
}

$Class* ScopedMemoryAccess$Scope::class$ = nullptr;

		} // misc
	} // internal
} // jdk