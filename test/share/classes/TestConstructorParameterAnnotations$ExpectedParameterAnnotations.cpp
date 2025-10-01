#include <TestConstructorParameterAnnotations$ExpectedParameterAnnotations.h>

#include <TestConstructorParameterAnnotations.h>
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

using $TestConstructorParameterAnnotations = ::TestConstructorParameterAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Attribute_var$0[] = {
	{"value", '[', TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Attribute_var$2},
	{}
};


$MethodInfo _TestConstructorParameterAnnotations$ExpectedParameterAnnotations_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$ExpectedParameterAnnotations_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$ExpectedParameterAnnotations", "TestConstructorParameterAnnotations", "ExpectedParameterAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$ExpectedParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestConstructorParameterAnnotations$ExpectedParameterAnnotations",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestConstructorParameterAnnotations$ExpectedParameterAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$ExpectedParameterAnnotations_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$ExpectedParameterAnnotations_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$ExpectedParameterAnnotations($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$ExpectedParameterAnnotations));
}

$Class* TestConstructorParameterAnnotations$ExpectedParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$ExpectedParameterAnnotations, name, initialize, &_TestConstructorParameterAnnotations$ExpectedParameterAnnotations_ClassInfo_, allocate$TestConstructorParameterAnnotations$ExpectedParameterAnnotations);
	return class$;
}

$Class* TestConstructorParameterAnnotations$ExpectedParameterAnnotations::class$ = nullptr;