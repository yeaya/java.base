#include <jdk/internal/vm/annotation/DontInline.h>

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

namespace jdk {
	namespace internal {
		namespace vm {
			namespace annotation {

$Attribute DontInline_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'-'}
};

$NamedAttribute DontInline_Attribute_var$0[] = {
	{"value", '[', DontInline_Attribute_var$1},
	{}
};

$NamedAttribute DontInline_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};
$CompoundAttribute _DontInline_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", DontInline_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", DontInline_Attribute_var$2},
	{}
};


$ClassInfo _DontInline_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.vm.annotation.DontInline",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_DontInline_Annotations_
};

$Object* allocate$DontInline($Class* clazz) {
	return $of($alloc(DontInline));
}

$Class* DontInline::load$($String* name, bool initialize) {
	$loadClass(DontInline, name, initialize, &_DontInline_ClassInfo_, allocate$DontInline);
	return class$;
}

$Class* DontInline::class$ = nullptr;

			} // annotation
		} // vm
	} // internal
} // jdk