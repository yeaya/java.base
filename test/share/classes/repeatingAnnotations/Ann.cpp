#include <repeatingAnnotations/Ann.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace repeatingAnnotations {

$NamedAttribute Ann_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Ann_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute Ann_Attribute_var$1[] = {
	{"value", '[', Ann_Attribute_var$2},
	{}
};

$NamedAttribute Ann_Attribute_var$3[] = {
	{"value", 'c', "LrepeatingAnnotations/AnnCont;"},
	{}
};
$CompoundAttribute _Ann_Annotations_[] = {
	{"Ljava/lang/annotation/Inherited;", nullptr},
	{"Ljava/lang/annotation/Retention;", Ann_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Ann_Attribute_var$1},
	{"Ljava/lang/annotation/Repeatable;", Ann_Attribute_var$3},
	{}
};


$MethodInfo _Ann_MethodInfo_[] = {
	{"value", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Ann_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"repeatingAnnotations.Ann",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Ann_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Ann_Annotations_
};

$Object* allocate$Ann($Class* clazz) {
	return $of($alloc(Ann));
}

$Class* Ann::load$($String* name, bool initialize) {
	$loadClass(Ann, name, initialize, &_Ann_ClassInfo_, allocate$Ann);
	return class$;
}

$Class* Ann::class$ = nullptr;

} // repeatingAnnotations