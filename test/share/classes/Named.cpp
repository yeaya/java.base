#include <Named.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

$NamedAttribute Named_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Named_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'e', "Ljava/lang/annotation/ElementType; PARAMETER"},
	{'-'}
};

$NamedAttribute Named_Attribute_var$1[] = {
	{"value", '[', Named_Attribute_var$2},
	{}
};

$CompoundAttribute _Named_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Named_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Named_Attribute_var$1},
	{}
};

$MethodInfo _Named_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Named_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"Named",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Named_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Named_Annotations_
};

$Object* allocate$Named($Class* clazz) {
	return $of($alloc(Named));
}

$Class* Named::load$($String* name, bool initialize) {
	$loadClass(Named, name, initialize, &_Named_ClassInfo_, allocate$Named);
	return class$;
}

$Class* Named::class$ = nullptr;