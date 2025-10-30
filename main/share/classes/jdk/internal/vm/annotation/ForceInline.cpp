#include <jdk/internal/vm/annotation/ForceInline.h>

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

$Attribute ForceInline_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute ForceInline_Attribute_var$0[] = {
	{"value", '[', ForceInline_Attribute_var$1},
	{}
};

$NamedAttribute ForceInline_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ForceInline_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", ForceInline_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", ForceInline_Attribute_var$2},
	{}
};

$ClassInfo _ForceInline_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.vm.annotation.ForceInline",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_ForceInline_Annotations_
};

$Object* allocate$ForceInline($Class* clazz) {
	return $of($alloc(ForceInline));
}

$Class* ForceInline::load$($String* name, bool initialize) {
	$loadClass(ForceInline, name, initialize, &_ForceInline_ClassInfo_, allocate$ForceInline);
	return class$;
}

$Class* ForceInline::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk