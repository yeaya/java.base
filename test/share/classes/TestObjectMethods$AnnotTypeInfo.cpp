#include <TestObjectMethods$AnnotTypeInfo.h>

#include <TestObjectMethods$Relation.h>
#include <TestObjectMethods.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute TestObjectMethods$AnnotTypeInfo_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute TestObjectMethods$AnnotTypeInfo_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute TestObjectMethods$AnnotTypeInfo_Attribute_var$1[] = {
	{"value", '[', TestObjectMethods$AnnotTypeInfo_Attribute_var$2},
	{}
};

$CompoundAttribute _TestObjectMethods$AnnotTypeInfo_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TestObjectMethods$AnnotTypeInfo_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", TestObjectMethods$AnnotTypeInfo_Attribute_var$1},
	{}
};

$Attribute _TestObjectMethods$AnnotTypeInfo_DefaultValue_count0 = {
	'I', "0"
};

$Attribute _TestObjectMethods$AnnotTypeInfo_DefaultValue_relation1 = {
	'e', "LTestObjectMethods$Relation; EQUAL"
};

$MethodInfo _TestObjectMethods$AnnotTypeInfo_MethodInfo_[] = {
	{"count", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_TestObjectMethods$AnnotTypeInfo_DefaultValue_count0},
	{"relation", "()LTestObjectMethods$Relation;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_TestObjectMethods$AnnotTypeInfo_DefaultValue_relation1},
	{}
};

$InnerClassInfo _TestObjectMethods$AnnotTypeInfo_InnerClassesInfo_[] = {
	{"TestObjectMethods$AnnotTypeInfo", "TestObjectMethods", "AnnotTypeInfo", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestObjectMethods$AnnotTypeInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestObjectMethods$AnnotTypeInfo",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestObjectMethods$AnnotTypeInfo_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectMethods$AnnotTypeInfo_InnerClassesInfo_,
	_TestObjectMethods$AnnotTypeInfo_Annotations_,
	nullptr,
	nullptr,
	"TestObjectMethods"
};

$Object* allocate$TestObjectMethods$AnnotTypeInfo($Class* clazz) {
	return $of($alloc(TestObjectMethods$AnnotTypeInfo));
}

$Class* TestObjectMethods$AnnotTypeInfo::load$($String* name, bool initialize) {
	$loadClass(TestObjectMethods$AnnotTypeInfo, name, initialize, &_TestObjectMethods$AnnotTypeInfo_ClassInfo_, allocate$TestObjectMethods$AnnotTypeInfo);
	return class$;
}

$Class* TestObjectMethods$AnnotTypeInfo::class$ = nullptr;