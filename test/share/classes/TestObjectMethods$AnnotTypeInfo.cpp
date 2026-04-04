#include <TestObjectMethods$AnnotTypeInfo.h>
#include <TestObjectMethods$Relation.h>
#include <TestObjectMethods.h>
#include <jcpp.h>

using $TestObjectMethods$Relation = ::TestObjectMethods$Relation;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Class* TestObjectMethods$AnnotTypeInfo::load$($String* name, bool initialize) {

	$Attribute countdefaultValue$$ = {
		'I', "0"
	};

	$Attribute relationdefaultValue$$ = {
		'e', "LTestObjectMethods$Relation; EQUAL"
	};
	$MethodInfo methodInfos$$[] = {
		{"count", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestObjectMethods$AnnotTypeInfo, count, int32_t), nullptr, &countdefaultValue$$},
		{"relation", "()LTestObjectMethods$Relation;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestObjectMethods$AnnotTypeInfo, relation, $TestObjectMethods$Relation*), nullptr, &relationdefaultValue$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectMethods$AnnotTypeInfo", "TestObjectMethods", "AnnotTypeInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
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
		"TestObjectMethods$AnnotTypeInfo",
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
	$loadClass(TestObjectMethods$AnnotTypeInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectMethods$AnnotTypeInfo);
	});
	return class$;
}

$Class* TestObjectMethods$AnnotTypeInfo::class$ = nullptr;