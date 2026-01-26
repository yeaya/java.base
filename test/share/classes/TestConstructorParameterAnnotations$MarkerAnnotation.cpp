#include <TestConstructorParameterAnnotations$MarkerAnnotation.h>

#include <TestConstructorParameterAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute TestConstructorParameterAnnotations$MarkerAnnotation_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; PARAMETER"},
	{'-'}
};

$NamedAttribute TestConstructorParameterAnnotations$MarkerAnnotation_Attribute_var$0[] = {
	{"value", '[', TestConstructorParameterAnnotations$MarkerAnnotation_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterAnnotations$MarkerAnnotation_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TestConstructorParameterAnnotations$MarkerAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TestConstructorParameterAnnotations$MarkerAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TestConstructorParameterAnnotations$MarkerAnnotation_Attribute_var$2},
	{}
};

$MethodInfo _TestConstructorParameterAnnotations$MarkerAnnotation_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestConstructorParameterAnnotations$MarkerAnnotation, value, int32_t)},
	{}
};

$InnerClassInfo _TestConstructorParameterAnnotations$MarkerAnnotation_InnerClassesInfo_[] = {
	{"TestConstructorParameterAnnotations$MarkerAnnotation", "TestConstructorParameterAnnotations", "MarkerAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestConstructorParameterAnnotations$MarkerAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestConstructorParameterAnnotations$MarkerAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestConstructorParameterAnnotations$MarkerAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterAnnotations$MarkerAnnotation_InnerClassesInfo_,
	_TestConstructorParameterAnnotations$MarkerAnnotation_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterAnnotations"
};

$Object* allocate$TestConstructorParameterAnnotations$MarkerAnnotation($Class* clazz) {
	return $of($alloc(TestConstructorParameterAnnotations$MarkerAnnotation));
}

$Class* TestConstructorParameterAnnotations$MarkerAnnotation::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterAnnotations$MarkerAnnotation, name, initialize, &_TestConstructorParameterAnnotations$MarkerAnnotation_ClassInfo_, allocate$TestConstructorParameterAnnotations$MarkerAnnotation);
	return class$;
}

$Class* TestConstructorParameterAnnotations$MarkerAnnotation::class$ = nullptr;