#include <jdk/internal/ValueBased.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {

$NamedAttribute ValueBased_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute ValueBased_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute ValueBased_Attribute_var$1[] = {
	{"value", '[', ValueBased_Attribute_var$2},
	{}
};

$CompoundAttribute _ValueBased_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ValueBased_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", ValueBased_Attribute_var$1},
	{}
};

$ClassInfo _ValueBased_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.ValueBased",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_ValueBased_Annotations_
};

$Object* allocate$ValueBased($Class* clazz) {
	return $of($alloc(ValueBased));
}

$Class* ValueBased::load$($String* name, bool initialize) {
	$loadClass(ValueBased, name, initialize, &_ValueBased_ClassInfo_, allocate$ValueBased);
	return class$;
}

$Class* ValueBased::class$ = nullptr;

	} // internal
} // jdk