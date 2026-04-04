#include <TestObjectMethods$AnnotType.h>
#include <TestObjectMethods.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* TestObjectMethods$AnnotType::load$($String* name, bool initialize) {

	$Attribute valuedefaultValue$$ = {
		'I', "0"
	};
	$MethodInfo methodInfos$$[] = {
		{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestObjectMethods$AnnotType, value, int32_t), nullptr, &valuedefaultValue$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectMethods$AnnotType", "TestObjectMethods", "AnnotType", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"TestObjectMethods$AnnotType",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"TestObjectMethods"
	};
	$loadClass(TestObjectMethods$AnnotType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectMethods$AnnotType);
	});
	return class$;
}

$Class* TestObjectMethods$AnnotType::class$ = nullptr;