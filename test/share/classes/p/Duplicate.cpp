#include <p/Duplicate.h>

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

namespace p {

$NamedAttribute Duplicate_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Duplicate_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
	{'-'}
};

$NamedAttribute Duplicate_Attribute_var$1[] = {
	{"value", '[', Duplicate_Attribute_var$2},
	{}
};
$CompoundAttribute _Duplicate_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Duplicate_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Duplicate_Attribute_var$1},
	{}
};


$ClassInfo _Duplicate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"p.Duplicate",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Duplicate_Annotations_
};

$Object* allocate$Duplicate($Class* clazz) {
	return $of($alloc(Duplicate));
}

$Class* Duplicate::load$($String* name, bool initialize) {
	$loadClass(Duplicate, name, initialize, &_Duplicate_ClassInfo_, allocate$Duplicate);
	return class$;
}

$Class* Duplicate::class$ = nullptr;

} // p