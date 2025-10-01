#include <GoodAnnotation.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute GoodAnnotation_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _GoodAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", GoodAnnotation_Attribute_var$0},
	{}
};


$ClassInfo _GoodAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"GoodAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_GoodAnnotation_Annotations_
};

$Object* allocate$GoodAnnotation($Class* clazz) {
	return $of($alloc(GoodAnnotation));
}

$Class* GoodAnnotation::load$($String* name, bool initialize) {
	$loadClass(GoodAnnotation, name, initialize, &_GoodAnnotation_ClassInfo_, allocate$GoodAnnotation);
	return class$;
}

$Class* GoodAnnotation::class$ = nullptr;