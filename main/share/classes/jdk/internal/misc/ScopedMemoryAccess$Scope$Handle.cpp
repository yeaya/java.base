#include <jdk/internal/misc/ScopedMemoryAccess$Scope$Handle.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ScopedMemoryAccess$Scope = ::jdk::internal::misc::ScopedMemoryAccess$Scope;

namespace jdk {
	namespace internal {
		namespace misc {

$Class* ScopedMemoryAccess$Scope$Handle::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"scope", "()Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScopedMemoryAccess$Scope$Handle, scope, $ScopedMemoryAccess$Scope*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.misc.ScopedMemoryAccess$Scope$Handle", "jdk.internal.misc.ScopedMemoryAccess$Scope", "Handle", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.misc.ScopedMemoryAccess$Scope$Handle",
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
	$loadClass(ScopedMemoryAccess$Scope$Handle, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScopedMemoryAccess$Scope$Handle);
	});
	return class$;
}

$Class* ScopedMemoryAccess$Scope$Handle::class$ = nullptr;

		} // misc
	} // internal
} // jdk