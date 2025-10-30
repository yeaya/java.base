#include <TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations.h>

#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterAnnotations = ::TestConstructorParameterAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Attribute_var$0[] = {
	{"value", '[', TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Attribute_var$2},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations", "TestConstructorParameterAnnotations", "ExpectedGetParameterAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations));
}

$Class* TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations, name, initialize, &_TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations_ClassInfo_, allocate$TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations);
	return class$;
}

$Class* TestConstructorParameterAnnotations$ExpectedGetParameterAnnotations::class$ = nullptr;