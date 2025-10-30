#include <TypeVariableBoundParameterIndex$TypeAnnotation.h>

#include <TypeVariableBoundParameterIndex.h>
#include <jcpp.h>

using $TypeVariableBoundParameterIndex = ::TypeVariableBoundParameterIndex;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute TypeVariableBoundParameterIndex$TypeAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute TypeVariableBoundParameterIndex$TypeAnnotation_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute TypeVariableBoundParameterIndex$TypeAnnotation_Attribute_var$1[] = {
	{"value", '[', TypeVariableBoundParameterIndex$TypeAnnotation_Attribute_var$2},
	{}
};

$CompoundAttribute _TypeVariableBoundParameterIndex$TypeAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", TypeVariableBoundParameterIndex$TypeAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", TypeVariableBoundParameterIndex$TypeAnnotation_Attribute_var$1},
	{}
};

$InnerClassInfo _TypeVariableBoundParameterIndex$TypeAnnotation_InnerClassesInfo_[] = {
	{"TypeVariableBoundParameterIndex$TypeAnnotation", "TypeVariableBoundParameterIndex", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _TypeVariableBoundParameterIndex$TypeAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"TypeVariableBoundParameterIndex$TypeAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_TypeVariableBoundParameterIndex$TypeAnnotation_InnerClassesInfo_,
	_TypeVariableBoundParameterIndex$TypeAnnotation_Annotations_,
	nullptr,
	nullptr,
	"TypeVariableBoundParameterIndex"
};

$Object* allocate$TypeVariableBoundParameterIndex$TypeAnnotation($Class* clazz) {
	return $of($alloc(TypeVariableBoundParameterIndex$TypeAnnotation));
}

$Class* TypeVariableBoundParameterIndex$TypeAnnotation::load$($String* name, bool initialize) {
	$loadClass(TypeVariableBoundParameterIndex$TypeAnnotation, name, initialize, &_TypeVariableBoundParameterIndex$TypeAnnotation_ClassInfo_, allocate$TypeVariableBoundParameterIndex$TypeAnnotation);
	return class$;
}

$Class* TypeVariableBoundParameterIndex$TypeAnnotation::class$ = nullptr;