#include <java/lang/invoke/InjectedProfile.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {
		namespace invoke {

$Class* InjectedProfile::load$($String* name, bool initialize) {
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
		"java.lang.invoke.InjectedProfile",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(InjectedProfile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InjectedProfile);
	});
	return class$;
}

$Class* InjectedProfile::class$ = nullptr;

		} // invoke
	} // lang
} // java