#include <jdk/internal/vm/annotation/ReservedStackAccess.h>

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

$NamedAttribute ReservedStackAccess_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute ReservedStackAccess_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute ReservedStackAccess_Attribute_var$1[] = {
	{"value", '[', ReservedStackAccess_Attribute_var$2},
	{}
};

$CompoundAttribute _ReservedStackAccess_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ReservedStackAccess_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", ReservedStackAccess_Attribute_var$1},
	{}
};

$ClassInfo _ReservedStackAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.vm.annotation.ReservedStackAccess",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_ReservedStackAccess_Annotations_
};

$Object* allocate$ReservedStackAccess($Class* clazz) {
	return $of($alloc(ReservedStackAccess));
}

$Class* ReservedStackAccess::load$($String* name, bool initialize) {
	$loadClass(ReservedStackAccess, name, initialize, &_ReservedStackAccess_ClassInfo_, allocate$ReservedStackAccess);
	return class$;
}

$Class* ReservedStackAccess::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk