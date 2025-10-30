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

$MethodInfo _ScopedMemoryAccess$Scope$Handle_MethodInfo_[] = {
	{"scope", "()Ljdk/internal/misc/ScopedMemoryAccess$Scope;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ScopedMemoryAccess$Scope$Handle_InnerClassesInfo_[] = {
	{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.misc.ScopedMemoryAccess$Scope$Handle", "jdk.internal.misc.ScopedMemoryAccess$Scope", "Handle", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ScopedMemoryAccess$Scope$Handle_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.misc.ScopedMemoryAccess$Scope$Handle",
	nullptr,
	nullptr,
	nullptr,
	_ScopedMemoryAccess$Scope$Handle_MethodInfo_,
	nullptr,
	nullptr,
	_ScopedMemoryAccess$Scope$Handle_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.ScopedMemoryAccess"
};

$Object* allocate$ScopedMemoryAccess$Scope$Handle($Class* clazz) {
	return $of($alloc(ScopedMemoryAccess$Scope$Handle));
}

$Class* ScopedMemoryAccess$Scope$Handle::load$($String* name, bool initialize) {
	$loadClass(ScopedMemoryAccess$Scope$Handle, name, initialize, &_ScopedMemoryAccess$Scope$Handle_ClassInfo_, allocate$ScopedMemoryAccess$Scope$Handle);
	return class$;
}

$Class* ScopedMemoryAccess$Scope$Handle::class$ = nullptr;

		} // misc
	} // internal
} // jdk