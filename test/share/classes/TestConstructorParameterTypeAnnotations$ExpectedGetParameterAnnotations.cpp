#include <TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $TestConstructorParameterTypeAnnotations = ::TestConstructorParameterTypeAnnotations;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$Attribute TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Attribute_var$0[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Attribute_var$2},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations", "TestConstructorParameterTypeAnnotations", "ExpectedGetParameterAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations));
}

$Class* TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations, name, initialize, &_TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$ExpectedGetParameterAnnotations::class$ = nullptr;