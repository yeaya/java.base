#include <jdk/internal/vm/annotation/DontInline.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

$Class* DontInline::load$($String* name, bool initialize) {
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
		"jdk.internal.vm.annotation.DontInline",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DontInline, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DontInline);
	});
	return class$;
}

$Class* DontInline::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk