#include <jdk/internal/vm/annotation/IntrinsicCandidate.h>

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

$Attribute IntrinsicCandidate_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute IntrinsicCandidate_Attribute_var$0[] = {
	{"value", '[', IntrinsicCandidate_Attribute_var$1},
	{}
};

$NamedAttribute IntrinsicCandidate_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _IntrinsicCandidate_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", IntrinsicCandidate_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", IntrinsicCandidate_Attribute_var$2},
	{}
};

$ClassInfo _IntrinsicCandidate_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.vm.annotation.IntrinsicCandidate",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_IntrinsicCandidate_Annotations_
};

$Object* allocate$IntrinsicCandidate($Class* clazz) {
	return $of($alloc(IntrinsicCandidate));
}

$Class* IntrinsicCandidate::load$($String* name, bool initialize) {
	$loadClass(IntrinsicCandidate, name, initialize, &_IntrinsicCandidate_ClassInfo_, allocate$IntrinsicCandidate);
	return class$;
}

$Class* IntrinsicCandidate::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk