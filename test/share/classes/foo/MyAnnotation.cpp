#include <foo/MyAnnotation.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace foo {

$Attribute MyAnnotation_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
	{'-'}
};

$NamedAttribute MyAnnotation_Attribute_var$0[] = {
	{"value", '[', MyAnnotation_Attribute_var$1},
	{}
};

$NamedAttribute MyAnnotation_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _MyAnnotation_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", MyAnnotation_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", MyAnnotation_Attribute_var$2},
	{}
};

$ClassInfo _MyAnnotation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"foo.MyAnnotation",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_MyAnnotation_Annotations_
};

$Object* allocate$MyAnnotation($Class* clazz) {
	return $of($alloc(MyAnnotation));
}

$Class* MyAnnotation::load$($String* name, bool initialize) {
	$loadClass(MyAnnotation, name, initialize, &_MyAnnotation_ClassInfo_, allocate$MyAnnotation);
	return class$;
}

$Class* MyAnnotation::class$ = nullptr;

} // foo