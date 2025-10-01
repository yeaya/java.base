#include <java/lang/Override.h>

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

$Attribute Override_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute Override_Attribute_var$0[] = {
	{"value", '[', Override_Attribute_var$1},
	{}
};

$NamedAttribute Override_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
	{}
};
$CompoundAttribute _Override_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", Override_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", Override_Attribute_var$2},
	{}
};


$ClassInfo _Override_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.Override",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Override_Annotations_
};

$Object* allocate$Override($Class* clazz) {
	return $of($alloc(Override));
}

$Class* Override::load$($String* name, bool initialize) {
	$loadClass(Override, name, initialize, &_Override_ClassInfo_, allocate$Override);
	return class$;
}

$Class* Override::class$ = nullptr;

	} // lang
} // java