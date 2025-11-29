#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>

#include <jdk/internal/misc/ScopedMemoryAccess$Scope$Handle.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace misc {

$MethodInfo _ScopedMemoryAccess$Scope_MethodInfo_[] = {
	{"acquire", "()Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;", nullptr, $PUBLIC | $ABSTRACT},
	{"checkValidState", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isImplicit", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"ownerThread", "()Ljava/lang/Thread;", nullptr, $PUBLIC | $ABSTRACT},
	{"release", "(Ljdk/internal/misc/ScopedMemoryAccess$Scope$Handle;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ScopedMemoryAccess$Scope_InnerClassesInfo_[] = {
	{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError", "jdk.internal.misc.ScopedMemoryAccess$Scope", "ScopedAccessError", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.misc.ScopedMemoryAccess$Scope$Handle", "jdk.internal.misc.ScopedMemoryAccess$Scope", "Handle", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ScopedMemoryAccess$Scope_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.misc.ScopedMemoryAccess$Scope",
	nullptr,
	nullptr,
	nullptr,
	_ScopedMemoryAccess$Scope_MethodInfo_,
	nullptr,
	nullptr,
	_ScopedMemoryAccess$Scope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.ScopedMemoryAccess"
};

$Object* allocate$ScopedMemoryAccess$Scope($Class* clazz) {
	return $of($alloc(ScopedMemoryAccess$Scope));
}

$Class* ScopedMemoryAccess$Scope::load$($String* name, bool initialize) {
	$loadClass(ScopedMemoryAccess$Scope, name, initialize, &_ScopedMemoryAccess$Scope_ClassInfo_, allocate$ScopedMemoryAccess$Scope);
	return class$;
}

$Class* ScopedMemoryAccess$Scope::class$ = nullptr;

		} // misc
	} // internal
} // jdk