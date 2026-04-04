#include <java/lang/annotation/Target.h>
#include <java/lang/annotation/ElementType.h>
#include <jcpp.h>

using $ElementTypeArray = $Array<::java::lang::annotation::ElementType>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {
		namespace annotation {

$Class* Target::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"value", "()[Ljava/lang/annotation/ElementType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Target, value, $ElementTypeArray*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; ANNOTATION_TYPE"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Documented;", nullptr},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"java.lang.annotation.Target",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Target, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Target);
	});
	return class$;
}

$Class* Target::class$ = nullptr;

		} // annotation
	} // lang
} // java