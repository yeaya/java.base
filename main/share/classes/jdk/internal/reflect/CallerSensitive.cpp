#include <jdk/internal/reflect/CallerSensitive.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace reflect {

$NamedAttribute CallerSensitive_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute CallerSensitive_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'-'}
};

$NamedAttribute CallerSensitive_Attribute_var$1[] = {
	{"value", '[', CallerSensitive_Attribute_var$2},
	{}
};

$CompoundAttribute _CallerSensitive_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", CallerSensitive_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", CallerSensitive_Attribute_var$1},
	{}
};

$ClassInfo _CallerSensitive_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.reflect.CallerSensitive",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_CallerSensitive_Annotations_
};

$Object* allocate$CallerSensitive($Class* clazz) {
	return $of($alloc(CallerSensitive));
}

$Class* CallerSensitive::load$($String* name, bool initialize) {
	$loadClass(CallerSensitive, name, initialize, &_CallerSensitive_ClassInfo_, allocate$CallerSensitive);
	return class$;
}

$Class* CallerSensitive::class$ = nullptr;

		} // reflect
	} // internal
} // jdk