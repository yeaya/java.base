#include <jdk/internal/vm/annotation/Stable.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

$Class* Stable::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; FIELD"},
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
		"jdk.internal.vm.annotation.Stable",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Stable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stable);
	});
	return class$;
}

$Class* Stable::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk