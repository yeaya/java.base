#include <java/io/Serial.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace java {
	namespace io {

$Attribute Serial_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'-'}
};

$NamedAttribute Serial_Attribute_var$0[] = {
	{"value", '[', Serial_Attribute_var$1},
	{}
};

$NamedAttribute Serial_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
	{}
};

$CompoundAttribute _Serial_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", Serial_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", Serial_Attribute_var$2},
	{}
};

$ClassInfo _Serial_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.io.Serial",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Serial_Annotations_
};

$Object* allocate$Serial($Class* clazz) {
	return $of($alloc(Serial));
}

$Class* Serial::load$($String* name, bool initialize) {
	$loadClass(Serial, name, initialize, &_Serial_ClassInfo_, allocate$Serial);
	return class$;
}

$Class* Serial::class$ = nullptr;

	} // io
} // java