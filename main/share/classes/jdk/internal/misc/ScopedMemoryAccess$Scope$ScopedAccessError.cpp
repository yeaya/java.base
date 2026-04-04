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

ScopedMemoryAccess$Scope$ScopedAccessError* ScopedMemoryAccess$Scope$ScopedAccessError::INSTANCE = nullptr;

void ScopedMemoryAccess$Scope$ScopedAccessError::init$() {
	$Error::init$("Attempt to access an already released memory resource"_s, nullptr, false, false);
}

void ScopedMemoryAccess$Scope$ScopedAccessError::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ScopedMemoryAccess$Scope$ScopedAccessError, serialVersionUID)},
		{"INSTANCE", "Ljdk/internal/misc/ScopedMemoryAccess$Scope$ScopedAccessError;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ScopedMemoryAccess$Scope$ScopedAccessError, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ScopedMemoryAccess$Scope$ScopedAccessError, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.ScopedMemoryAccess$Scope", "jdk.internal.misc.ScopedMemoryAccess", "Scope", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError", "jdk.internal.misc.ScopedMemoryAccess$Scope", "ScopedAccessError", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.misc.ScopedMemoryAccess$Scope$ScopedAccessError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.misc.ScopedMemoryAccess"
	};
	$loadClass(ScopedMemoryAccess$Scope$ScopedAccessError, name, initialize, &classInfo$$, ScopedMemoryAccess$Scope$ScopedAccessError::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ScopedMemoryAccess$Scope$ScopedAccessError);
	});
	return class$;
}

$Class* ScopedMemoryAccess$Scope$ScopedAccessError::class$ = nullptr;

		} // misc
	} // internal
} // jdk