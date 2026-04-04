#include <jdk/internal/misc/ScopedMemoryAccess$Scoped.h>
#include <jdk/internal/misc/ScopedMemoryAccess.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace misc {

$Class* ScopedMemoryAccess$Scoped::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.misc.ScopedMemoryAccess$Scoped", "jdk.internal.misc.ScopedMemoryAccess", "Scoped", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"jdk.internal.misc.ScopedMemoryAccess$Scoped",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.internal.misc.ScopedMemoryAccess"
	};
	$loadClass(ScopedMemoryAccess$Scoped, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScopedMemoryAccess$Scoped);
	});
	return class$;
}

$Class* ScopedMemoryAccess$Scoped::class$ = nullptr;

		} // misc
	} // internal
} // jdk