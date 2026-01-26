#include <java/lang/SuppressWarnings.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace lang {

$Attribute SuppressWarnings_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; PARAMETER"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'e', "Ljava/lang/annotation/ElementType; LOCAL_VARIABLE"},
	{'e', "Ljava/lang/annotation/ElementType; MODULE"},
	{'-'}
};

$NamedAttribute SuppressWarnings_Attribute_var$0[] = {
	{"value", '[', SuppressWarnings_Attribute_var$1},
	{}
};

$NamedAttribute SuppressWarnings_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
	{}
};

$CompoundAttribute _SuppressWarnings_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", SuppressWarnings_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", SuppressWarnings_Attribute_var$2},
	{}
};

$MethodInfo _SuppressWarnings_MethodInfo_[] = {
	{"value", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SuppressWarnings, value, $StringArray*)},
	{}
};

$ClassInfo _SuppressWarnings_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"java.lang.SuppressWarnings",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_SuppressWarnings_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SuppressWarnings_Annotations_
};

$Object* allocate$SuppressWarnings($Class* clazz) {
	return $of($alloc(SuppressWarnings));
}

$Class* SuppressWarnings::load$($String* name, bool initialize) {
	$loadClass(SuppressWarnings, name, initialize, &_SuppressWarnings_ClassInfo_, allocate$SuppressWarnings);
	return class$;
}

$Class* SuppressWarnings::class$ = nullptr;

	} // lang
} // java