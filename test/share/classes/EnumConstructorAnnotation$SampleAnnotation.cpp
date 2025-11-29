#include <EnumConstructorAnnotation$SampleAnnotation.h>

#include <EnumConstructorAnnotation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute EnumConstructorAnnotation$SampleAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _EnumConstructorAnnotation$SampleAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", EnumConstructorAnnotation$SampleAnnotation_Attribute_var$0},
	{}
};

$InnerClassInfo _EnumConstructorAnnotation$SampleAnnotation_InnerClassesInfo_[] = {
	{"EnumConstructorAnnotation$SampleAnnotation", "EnumConstructorAnnotation", "SampleAnnotation", $STATIC | $INTERFACE | $ABSTRACT | $ANNOTATION},
	{}
};

$ClassInfo _EnumConstructorAnnotation$SampleAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"EnumConstructorAnnotation$SampleAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_EnumConstructorAnnotation$SampleAnnotation_InnerClassesInfo_,
	_EnumConstructorAnnotation$SampleAnnotation_Annotations_,
	nullptr,
	nullptr,
	"EnumConstructorAnnotation"
};

$Object* allocate$EnumConstructorAnnotation$SampleAnnotation($Class* clazz) {
	return $of($alloc(EnumConstructorAnnotation$SampleAnnotation));
}

$Class* EnumConstructorAnnotation$SampleAnnotation::load$($String* name, bool initialize) {
	$loadClass(EnumConstructorAnnotation$SampleAnnotation, name, initialize, &_EnumConstructorAnnotation$SampleAnnotation_ClassInfo_, allocate$EnumConstructorAnnotation$SampleAnnotation);
	return class$;
}

$Class* EnumConstructorAnnotation$SampleAnnotation::class$ = nullptr;