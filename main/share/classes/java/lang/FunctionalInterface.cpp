#include <java/lang/FunctionalInterface.h>

#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace java {
	namespace lang {

$NamedAttribute FunctionalInterface_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute FunctionalInterface_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute FunctionalInterface_Attribute_var$1[] = {
	{"value", '[', FunctionalInterface_Attribute_var$2},
	{}
};
$CompoundAttribute _FunctionalInterface_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", FunctionalInterface_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", FunctionalInterface_Attribute_var$1},
	{}
};


$ClassInfo _FunctionalInterface_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.FunctionalInterface",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_FunctionalInterface_Annotations_
};

$Object* allocate$FunctionalInterface($Class* clazz) {
	return $of($alloc(FunctionalInterface));
}

$Class* FunctionalInterface::load$($String* name, bool initialize) {
	$loadClass(FunctionalInterface, name, initialize, &_FunctionalInterface_ClassInfo_, allocate$FunctionalInterface);
	return class$;
}

$Class* FunctionalInterface::class$ = nullptr;

	} // lang
} // java