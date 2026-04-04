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

$Class* PreviewFeature::load$($String* name, bool initialize) {

	$Attribute reflectivedefaultValue$$ = {
		'Z', "false"
	};
	$MethodInfo methodInfos$$[] = {
		{"feature", "()Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreviewFeature, feature, $PreviewFeature$Feature*)},
		{"reflective", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PreviewFeature, reflective, bool), nullptr, &reflectivedefaultValue$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.javac.PreviewFeature$Feature", "jdk.internal.javac.PreviewFeature", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'e', "Ljava/lang/annotation/ElementType; CONSTRUCTOR"},
		{'e', "Ljava/lang/annotation/ElementType; FIELD"},
		{'e', "Ljava/lang/annotation/ElementType; PACKAGE"},
		{'e', "Ljava/lang/annotation/ElementType; MODULE"},
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; CLASS"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"jdk.internal.javac.PreviewFeature",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"jdk.internal.javac.PreviewFeature$Feature"
	};
	$loadClass(PreviewFeature, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreviewFeature);
	});
	return class$;
}

$Class* PreviewFeature::class$ = nullptr;

		} // javac
	} // internal
} // jdk