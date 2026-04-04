#include <java/lang/Deprecated.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {

$Class* Deprecated::load$($String* name, bool initialize) {

	$Attribute forRemovaldefaultValue$$ = {
		'Z', "false"
	};

	$Attribute sincedefaultValue$$ = {
		's', ""
	};
	$MethodInfo methodInfos$$[] = {
		{"forRemoval", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Deprecated, forRemoval, bool), nullptr, &forRemovaldefaultValue$$},
		{"since", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Deprecated, since, $String*), nullptr, &sincedefaultValue$$},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
		{'e', "Ljava/lang/annotation/ElementType; FIELD"},
		{'e', "Ljava/lang/annotation/ElementType; LOCAL_VARIABLE"},
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
		{'e', "Ljava/lang/annotation/ElementType; MODULE"},
		{'e', "Ljava/lang/annotation/ElementType; PARAMETER"},
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
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
		"java.lang.Deprecated",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Deprecated, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Deprecated);
	});
	return class$;
}

$Class* Deprecated::class$ = nullptr;

	} // lang
} // java