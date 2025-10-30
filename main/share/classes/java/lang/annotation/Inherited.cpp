#include <java/lang/annotation/Inherited.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace java {
	namespace lang {
		namespace annotation {

$NamedAttribute Inherited_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Inherited_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; ANNOTATION_TYPE"},
	{'-'}
};

$NamedAttribute Inherited_Attribute_var$1[] = {
	{"value", '[', Inherited_Attribute_var$2},
	{}
};

$CompoundAttribute _Inherited_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Inherited_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Inherited_Attribute_var$1},
	{}
};

$ClassInfo _Inherited_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.annotation.Inherited",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Inherited_Annotations_
};

$Object* allocate$Inherited($Class* clazz) {
	return $of($alloc(Inherited));
}

$Class* Inherited::load$($String* name, bool initialize) {
	$loadClass(Inherited, name, initialize, &_Inherited_ClassInfo_, allocate$Inherited);
	return class$;
}

$Class* Inherited::class$ = nullptr;

		} // annotation
	} // lang
} // java