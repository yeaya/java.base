#include <jdk/internal/vm/annotation/Stable.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

$Attribute Stable_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'-'}
};

$NamedAttribute Stable_Attribute_var$0[] = {
	{"value", '[', Stable_Attribute_var$1},
	{}
};

$NamedAttribute Stable_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Stable_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", Stable_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", Stable_Attribute_var$2},
	{}
};

$ClassInfo _Stable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.vm.annotation.Stable",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Stable_Annotations_
};

$Object* allocate$Stable($Class* clazz) {
	return $of($alloc(Stable));
}

$Class* Stable::load$($String* name, bool initialize) {
	$loadClass(Stable, name, initialize, &_Stable_ClassInfo_, allocate$Stable);
	return class$;
}

$Class* Stable::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk