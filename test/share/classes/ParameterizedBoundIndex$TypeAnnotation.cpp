#include <ParameterizedBoundIndex$TypeAnnotation.h>

#include <ParameterizedBoundIndex.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute ParameterizedBoundIndex$TypeAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute ParameterizedBoundIndex$TypeAnnotation_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute ParameterizedBoundIndex$TypeAnnotation_Attribute_var$1[] = {
	{"value", '[', ParameterizedBoundIndex$TypeAnnotation_Attribute_var$2},
	{}
};

$CompoundAttribute _ParameterizedBoundIndex$TypeAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ParameterizedBoundIndex$TypeAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", ParameterizedBoundIndex$TypeAnnotation_Attribute_var$1},
	{}
};

$InnerClassInfo _ParameterizedBoundIndex$TypeAnnotation_InnerClassesInfo_[] = {
	{"ParameterizedBoundIndex$TypeAnnotation", "ParameterizedBoundIndex", "TypeAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _ParameterizedBoundIndex$TypeAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ParameterizedBoundIndex$TypeAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_ParameterizedBoundIndex$TypeAnnotation_InnerClassesInfo_,
	_ParameterizedBoundIndex$TypeAnnotation_Annotations_,
	nullptr,
	nullptr,
	"ParameterizedBoundIndex"
};

$Object* allocate$ParameterizedBoundIndex$TypeAnnotation($Class* clazz) {
	return $of($alloc(ParameterizedBoundIndex$TypeAnnotation));
}

$Class* ParameterizedBoundIndex$TypeAnnotation::load$($String* name, bool initialize) {
	$loadClass(ParameterizedBoundIndex$TypeAnnotation, name, initialize, &_ParameterizedBoundIndex$TypeAnnotation_ClassInfo_, allocate$ParameterizedBoundIndex$TypeAnnotation);
	return class$;
}

$Class* ParameterizedBoundIndex$TypeAnnotation::class$ = nullptr;