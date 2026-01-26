#include <jdk/internal/javac/PreviewFeature.h>

#include <jdk/internal/javac/PreviewFeature$Feature.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $PreviewFeature$Feature = ::jdk::internal::javac::PreviewFeature$Feature;

namespace jdk {
	namespace internal {
		namespace javac {

$Attribute PreviewFeature_Attribute_var$1[] = {
	{'e', "Ljava/lang/annotation/ElementType; METHOD"},
	{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
	{'e', "Ljava/lang/annotation/ElementType; FIELD"},
	{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
	{'e', "Ljava/lang/annotation/ElementType; MODULE"},
	{'e', "Ljava/lang/annotation/ElementType; TYPE"},
	{'-'}
};

$NamedAttribute PreviewFeature_Attribute_var$0[] = {
	{"value", '[', PreviewFeature_Attribute_var$1},
	{}
};

$NamedAttribute PreviewFeature_Attribute_var$2[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; CLASS"},
	{}
};

$CompoundAttribute _PreviewFeature_Annotations_[] = {
	{"Ljava/lang/annotation/Target;", PreviewFeature_Attribute_var$0},
	{"Ljava/lang/annotation/Retention;", PreviewFeature_Attribute_var$2},
	{}
};

$Attribute _PreviewFeature_DefaultValue_reflective1 = {
	'Z', "false"
};

$MethodInfo _PreviewFeature_MethodInfo_[] = {
	{"feature", "()Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreviewFeature, feature, $PreviewFeature$Feature*)},
	{"reflective", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreviewFeature, reflective, bool), nullptr, &_PreviewFeature_DefaultValue_reflective1},
	{}
};

$InnerClassInfo _PreviewFeature_InnerClassesInfo_[] = {
	{"jdk.internal.javac.PreviewFeature$Feature", "jdk.internal.javac.PreviewFeature", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PreviewFeature_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"jdk.internal.javac.PreviewFeature",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_PreviewFeature_MethodInfo_,
	nullptr,
	nullptr,
	_PreviewFeature_InnerClassesInfo_,
	_PreviewFeature_Annotations_,
	nullptr,
	"jdk.internal.javac.PreviewFeature$Feature"
};

$Object* allocate$PreviewFeature($Class* clazz) {
	return $of($alloc(PreviewFeature));
}

$Class* PreviewFeature::load$($String* name, bool initialize) {
	$loadClass(PreviewFeature, name, initialize, &_PreviewFeature_ClassInfo_, allocate$PreviewFeature);
	return class$;
}

$Class* PreviewFeature::class$ = nullptr;

		} // javac
	} // internal
} // jdk