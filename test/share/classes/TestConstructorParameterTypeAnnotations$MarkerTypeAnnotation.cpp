#include <TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation.h>

#include <TestConstructorParameterTypeAnnotations.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$Attribute TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Attribute_var$0[] = {
	{"value", '[', TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Attribute_var$1},
	{}
};

$NamedAttribute TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Attribute_var$2},
	{}
};

$MethodInfo _TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation, value, int32_t)},
	{}
};

$InnerClassInfo _TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_InnerClassesInfo_[] = {
	{"TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation", "TestConstructorParameterTypeAnnotations", "MarkerTypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_MethodInfo_,
	nullptr,
	nullptr,
	_TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_InnerClassesInfo_,
	_TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_Annotations_,
	nullptr,
	nullptr,
	"TestConstructorParameterTypeAnnotations"
};

$Object* allocate$TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation($Class* clazz) {
	return $of($alloc(TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation));
}

$Class* TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation::load$($String* name, bool initialize) {
	$loadClass(TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation, name, initialize, &_TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation_ClassInfo_, allocate$TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation);
	return class$;
}

$Class* TestConstructorParameterTypeAnnotations$MarkerTypeAnnotation::class$ = nullptr;