#include <java/lang/annotation/Documented.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace java {
	namespace lang {
		namespace annotation {

$NamedAttribute Documented_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Documented_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; ANNOTATION_TYPE"},
	{'-'}
};

$NamedAttribute Documented_Attribute_var$1[] = {
	{"value", '[', Documented_Attribute_var$2},
	{}
};

$CompoundAttribute _Documented_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Documented_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Documented_Attribute_var$1},
	{}
};

$ClassInfo _Documented_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.annotation.Documented",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Documented_Annotations_
};

$Object* allocate$Documented($Class* clazz) {
	return $of($alloc(Documented));
}

$Class* Documented::load$($String* name, bool initialize) {
	$loadClass(Documented, name, initialize, &_Documented_ClassInfo_, allocate$Documented);
	return class$;
}

$Class* Documented::class$ = nullptr;

		} // annotation
	} // lang
} // java