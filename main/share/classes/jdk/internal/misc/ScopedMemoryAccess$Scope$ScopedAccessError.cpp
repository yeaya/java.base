#include <jdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError.h>

#include <java/lang/Error.h>
#include <jdk/internal/misc/ScopedMemoryAccess$Scope.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _ScopedMemoryAccess$Scope$ScopedAccessError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ScopedMemoryAccess$Scope$ScopedAccessError, serialVersionUID)},
	{"INSTANCE", "Ljdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScopedMemoryAccess$Scope$ScopedAccessError, INSTANCE)},
	{}
};

$MethodInfo _ScopedMemoryAccess$Scope$ScopedAccessError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ScopedMemoryAccess$Scope$ScopedAccessError, init$, void)},
	{}
};

$InnerClassInfo _ScopedMemoryAccess$Scope$ScopedAccessError_InnerClassesInfo_[] = {
	{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError", "jdk.internal.misc.ScopedMemoryAccess$Scope", "ScopedAccessError", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ScopedMemoryAccess$Scope$ScopedAccessError_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError",
	"java.lang.Error",
	nullptr,
	_ScopedMemoryAccess$Scope$ScopedAccessError_FieldInfo_,
	_ScopedMemoryAccess$Scope$ScopedAccessError_MethodInfo_,
	nullptr,
	nullptr,
	_ScopedMemoryAccess$Scope$ScopedAccessError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.misc.ScopedMemoryAccess"
};

$Object* allocate$ScopedMemoryAccess$Scope$ScopedAccessError($Class* clazz) {
	return $of($alloc(ScopedMemoryAccess$Scope$ScopedAccessError));
}

ScopedMemoryAccess$Scope$ScopedAccessError* ScopedMemoryAccess$Scope$ScopedAccessError::INSTANCE = nullptr;

void ScopedMemoryAccess$Scope$ScopedAccessError::init$() {
	$Error::init$("Attempt to access an already released memory resource"_s, nullptr, false, false);
}

void clinit$ScopedMemoryAccess$Scope$ScopedAccessError($Class* class$) {
	$assignStatic(ScopedMemoryAccess$Scope$ScopedAccessError::INSTANCE, $new(ScopedMemoryAccess$Scope$ScopedAccessError));
}

ScopedMemoryAccess$Scope$ScopedAccessError::ScopedMemoryAccess$Scope$ScopedAccessError() {
}

ScopedMemoryAccess$Scope$ScopedAccessError::ScopedMemoryAccess$Scope$ScopedAccessError(const ScopedMemoryAccess$Scope$ScopedAccessError& e) : $Error(e) {
}

void ScopedMemoryAccess$Scope$ScopedAccessError::throw$() {
	throw *this;
}

$Class* ScopedMemoryAccess$Scope$ScopedAccessError::load$($String* name, bool initialize) {
	$loadClass(ScopedMemoryAccess$Scope$ScopedAccessError, name, initialize, &_ScopedMemoryAccess$Scope$ScopedAccessError_ClassInfo_, clinit$ScopedMemoryAccess$Scope$ScopedAccessError, allocate$ScopedMemoryAccess$Scope$ScopedAccessError);
	return class$;
}

$Class* ScopedMemoryAccess$Scope$ScopedAccessError::class$ = nullptr;

		} // misc
	} // internal
} // jdk