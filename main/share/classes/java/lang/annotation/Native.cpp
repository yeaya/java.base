#include <java/lang/annotation/Native.h>

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
		namespace annotation {

$Attribute Native_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'-'}
};

$NamedAttribute Native_Attribute_var$0[] = {
	{"value", '[', Native_Attribute_var$1},
	{}
};

$NamedAttribute Native_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
	{}
};
$CompoundAttribute _Native_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Target;", Native_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", Native_Attribute_var$2},
	{}
};


$ClassInfo _Native_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.annotation.Native",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Native_Annotations_
};

$Object* allocate$Native($Class* clazz) {
	return $of($alloc(Native));
}

$Class* Native::load$($String* name, bool initialize) {
	$loadClass(Native, name, initialize, &_Native_ClassInfo_, allocate$Native);
	return class$;
}

$Class* Native::class$ = nullptr;

		} // annotation
	} // lang
} // java