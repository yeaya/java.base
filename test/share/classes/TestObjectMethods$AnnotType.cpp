#include <TestObjectMethods$AnnotType.h>

#include <TestObjectMethods.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestObjectMethods = ::TestObjectMethods;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute TestObjectMethods$AnnotType_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute TestObjectMethods$AnnotType_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TestObjectMethods$AnnotType_Attribute_var$1[] = {
	{"value", '[', TestObjectMethods$AnnotType_Attribute_var$2},
	{}
};
$CompoundAttribute _TestObjectMethods$AnnotType_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TestObjectMethods$AnnotType_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", TestObjectMethods$AnnotType_Attribute_var$1},
	{}
};
$Attribute _TestObjectMethods$AnnotType_DefaultValue_value0 = {
'I', "0"};


$MethodInfo _TestObjectMethods$AnnotType_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_TestObjectMethods$AnnotType_DefaultValue_value0},
	{}
};

$InnerClassInfo _TestObjectMethods$AnnotType_InnerClassesInfo_[] = {
	{"TestObjectMethods$AnnotType", "TestObjectMethods", "AnnotType", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestObjectMethods$AnnotType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestObjectMethods$AnnotType",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestObjectMethods$AnnotType_MethodInfo_,
	nullptr,
	nullptr,
	_TestObjectMethods$AnnotType_InnerClassesInfo_,
	_TestObjectMethods$AnnotType_Annotations_,
	nullptr,
	nullptr,
	"TestObjectMethods"
};

$Object* allocate$TestObjectMethods$AnnotType($Class* clazz) {
	return $of($alloc(TestObjectMethods$AnnotType));
}

$Class* TestObjectMethods$AnnotType::load$($String* name, bool initialize) {
	$loadClass(TestObjectMethods$AnnotType, name, initialize, &_TestObjectMethods$AnnotType_ClassInfo_, allocate$TestObjectMethods$AnnotType);
	return class$;
}

$Class* TestObjectMethods$AnnotType::class$ = nullptr;