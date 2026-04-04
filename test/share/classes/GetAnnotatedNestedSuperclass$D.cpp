#include <GetAnnotatedNestedSuperclass$D.h>
#include <GetAnnotatedNestedSuperclass.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* GetAnnotatedNestedSuperclass$D::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetAnnotatedNestedSuperclass$D", "GetAnnotatedNestedSuperclass", "D", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
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
		"GetAnnotatedNestedSuperclass$D",
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
	$loadClass(GetAnnotatedNestedSuperclass$D, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetAnnotatedNestedSuperclass$D);
	});
	return class$;
}

$Class* GetAnnotatedNestedSuperclass$D::class$ = nullptr;