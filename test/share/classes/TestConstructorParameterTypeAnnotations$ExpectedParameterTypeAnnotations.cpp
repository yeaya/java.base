#include <TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Attribute_var$0[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Attribute_var$2},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations, value, $StringArray*)},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations", "TestConstructorParameterTypeAnnotations", "ExpectedParameterTypeAnnotations", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations));
}

$Class* TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations, name, initialize, &_TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$ExpectedParameterTypeAnnotations::class$ = nullptr;