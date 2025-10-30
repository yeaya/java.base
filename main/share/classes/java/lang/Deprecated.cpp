#include <java/lang/Deprecated.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Annotation = ::java::lang::annotation::Annotation;

namespace java {
	namespace lang {

$NamedAttribute Deprecated_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$Attribute Deprecated_Attribute_var$2[] = {
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'e', "Ljava/lang/annotation/ElementType; LOCAL_VARIABLE"},
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
	{'e', "Ljava/lang/annotation/ElementType; MODULE"},
	{'e', "Ljava/lang/annotation/ElementType; PARAMETER"},
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute Deprecated_Attribute_var$1[] = {
	{"value", '[', Deprecated_Attribute_var$2},
	{}
};

$CompoundAttribute _Deprecated_Annotations_[] = {
	{"Ljava/lang/annotation/Documented;", nullptr},
	{"Ljava/lang/annotation/Retention;", Deprecated_Attribute_var$0},
	{"Ljava/lang/annotation/Target;", Deprecated_Attribute_var$1},
	{}
};

$Attribute _Deprecated_DefaultValue_forRemoval0 = {
	'Z', "false"
};

$Attribute _Deprecated_DefaultValue_since1 = {
	's', ""
};

$MethodInfo _Deprecated_MethodInfo_[] = {
	{"forRemoval", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_Deprecated_DefaultValue_forRemoval0},
	{"since", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, nullptr, &_Deprecated_DefaultValue_since1},
	{}
};

$ClassInfo _Deprecated_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.Deprecated",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_Deprecated_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Deprecated_Annotations_
};

$Object* allocate$Deprecated($Class* clazz) {
	return $of($alloc(Deprecated));
}

$Class* Deprecated::load$($String* name, bool initialize) {
	$loadClass(Deprecated, name, initialize, &_Deprecated_ClassInfo_, allocate$Deprecated);
	return class$;
}

$Class* Deprecated::class$ = nullptr;

	} // lang
} // java