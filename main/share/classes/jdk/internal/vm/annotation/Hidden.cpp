#include <jdk/internal/vm/annotation/Hidden.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

$Attribute Hidden_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute Hidden_Attribute_var$0[] = {
	{"value", '[', Hidden_Attribute_var$1},
	{}
};

$NamedAttribute Hidden_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _Hidden_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", Hidden_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", Hidden_Attribute_var$2},
	{}
};

$ClassInfo _Hidden_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.vm.annotation.Hidden",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Hidden_Annotations_
};

$Object* allocate$Hidden($Class* clazz) {
	return $of($alloc(Hidden));
}

$Class* Hidden::load$($String* name, bool initialize) {
	$loadClass(Hidden, name, initialize, &_Hidden_ClassInfo_, allocate$Hidden);
	return class$;
}

$Class* Hidden::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk