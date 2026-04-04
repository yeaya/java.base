#include <GetAnnotatedNestedSuperclass$E.h>
#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* GetAnnotatedNestedSuperclass$E::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedNestedSuperclass$E", "GetAnnotatedNestedSuperclass", "E", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
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
		"GetAnnotatedNestedSuperclass$E",
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
		"GetAnnotatedNestedSuperclass"
	};
	$loadClass(GetAnnotatedNestedSuperclass$E, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedNestedSuperclass$E);
	});
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$E::class$ = nullptr;