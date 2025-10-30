#include <jdk/internal/vm/annotation/Contended.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

$NamedAttribute Contended_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Contended_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute Contended_Attribute_var$1[] = {
	{"value", '[', Contended_Attribute_var$2},
	{}
};

$CompoundAttribute _Contended_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", Contended_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Contended_Attribute_var$1},
	{}
};

$Attribute _Contended_DefaultValue_value0 = {
	's', ""
};

$MethodInfo _Contended_MethodInfo_[] = {
	{"value", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_Contended_DefaultValue_value0},
	{}
};

$ClassInfo _Contended_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.vm.annotation.Contended",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Contended_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Contended_Annotations_
};

$Object* allocate$Contended($Class* clazz) {
	return $of($alloc(Contended));
}

$Class* Contended::load$($String* name, bool initialize) {
	$loadClass(Contended, name, initialize, &_Contended_ClassInfo_, allocate$Contended);
	return class$;
}

$Class* Contended::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk