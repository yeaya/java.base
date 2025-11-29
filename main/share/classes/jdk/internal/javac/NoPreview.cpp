#include <jdk/internal/javac/NoPreview.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace jdk {
	namespace internal {
		namespace javac {

$Attribute NoPreview_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
	{'e', "Ljava/lang/annotation/ElementType; MODULE"},
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute NoPreview_Attribute_var$0[] = {
	{"value", '[', NoPreview_Attribute_var$1},
	{}
};

$NamedAttribute NoPreview_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; CLASS"},
	{}
};

$CompoundAttribute _NoPreview_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", NoPreview_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", NoPreview_Attribute_var$2},
	{}
};

$ClassInfo _NoPreview_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.javac.NoPreview",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_NoPreview_Annotations_
};

$Object* allocate$NoPreview($Class* clazz) {
	return $of($alloc(NoPreview));
}

$Class* NoPreview::load$($String* name, bool initialize) {
	$loadClass(NoPreview, name, initialize, &_NoPreview_ClassInfo_, allocate$NoPreview);
	return class$;
}

$Class* NoPreview::class$ = nullptr;

		} // javac
	} // internal
} // jdk