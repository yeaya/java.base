#include <MissingAnnotation.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute MissingAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute MissingAnnotation_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE_USE"},
	{'-'}
};

$NamedAttribute MissingAnnotation_Attribute_var$1[] = {
	{"value", '[', MissingAnnotation_Attribute_var$2},
	{}
};

$CompoundAttribute _MissingAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", MissingAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", MissingAnnotation_Attribute_var$1},
	{}
};

$ClassInfo _MissingAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"MissingAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_MissingAnnotation_Annotations_
};

$Object* allocate$MissingAnnotation($Class* clazz) {
	return $of($alloc(MissingAnnotation));
}

$Class* MissingAnnotation::load$($String* name, bool initialize) {
	$loadClass(MissingAnnotation, name, initialize, &_MissingAnnotation_ClassInfo_, allocate$MissingAnnotation);
	return class$;
}

$Class* MissingAnnotation::class$ = nullptr;