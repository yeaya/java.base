#include <jdk/internal/javac/PreviewFeature$Feature.h>

#include <java/lang/Enum.h>
#include <jdk/internal/javac/PreviewFeature.h>
#include <jcpp.h>

#undef SEALED_CLASSES
#undef SWITCH_PATTERN_MATCHING
#undef TEST

using $PreviewFeature$FeatureArray = $Array<::jdk::internal::javac::PreviewFeature$Feature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace javac {

$FieldInfo _PreviewFeature$Feature_FieldInfo_[] = {
	{"SEALED_CLASSES", "Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PreviewFeature$Feature, SEALED_CLASSES)},
	{"SWITCH_PATTERN_MATCHING", "Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PreviewFeature$Feature, SWITCH_PATTERN_MATCHING)},
	{"TEST", "Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PreviewFeature$Feature, TEST)},
	{"$VALUES", "[Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PreviewFeature$Feature, $VALUES)},
	{}
};

$MethodInfo _PreviewFeature$Feature_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$PreviewFeature$FeatureArray*(*)()>(&PreviewFeature$Feature::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(PreviewFeature$Feature::*)($String*,int32_t)>(&PreviewFeature$Feature::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PreviewFeature$Feature*(*)($String*)>(&PreviewFeature$Feature::valueOf))},
	{"values", "()[Ljdk/internal/javac/PreviewFeature$Feature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PreviewFeature$FeatureArray*(*)()>(&PreviewFeature$Feature::values))},
	{}
};

$InnerClassInfo _PreviewFeature$Feature_InnerClassesInfo_[] = {
	{"jdk.internal.javac.PreviewFeature$Feature", "jdk.internal.javac.PreviewFeature", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PreviewFeature$Feature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.javac.PreviewFeature$Feature",
	"java.lang.Enum",
	nullptr,
	_PreviewFeature$Feature_FieldInfo_,
	_PreviewFeature$Feature_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/javac/PreviewFeature$Feature;>;",
	nullptr,
	_PreviewFeature$Feature_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.javac.PreviewFeature"
};

$Object* allocate$PreviewFeature$Feature($Class* clazz) {
	return $of($alloc(PreviewFeature$Feature));
}

PreviewFeature$Feature* PreviewFeature$Feature::SEALED_CLASSES = nullptr;
PreviewFeature$Feature* PreviewFeature$Feature::SWITCH_PATTERN_MATCHING = nullptr;
PreviewFeature$Feature* PreviewFeature$Feature::TEST = nullptr;
$PreviewFeature$FeatureArray* PreviewFeature$Feature::$VALUES = nullptr;

$PreviewFeature$FeatureArray* PreviewFeature$Feature::$values() {
	$init(PreviewFeature$Feature);
	return $new($PreviewFeature$FeatureArray, {
		PreviewFeature$Feature::SEALED_CLASSES,
		PreviewFeature$Feature::SWITCH_PATTERN_MATCHING,
		PreviewFeature$Feature::TEST
	});
}

$PreviewFeature$FeatureArray* PreviewFeature$Feature::values() {
	$init(PreviewFeature$Feature);
	return $cast($PreviewFeature$FeatureArray, PreviewFeature$Feature::$VALUES->clone());
}

PreviewFeature$Feature* PreviewFeature$Feature::valueOf($String* name) {
	$init(PreviewFeature$Feature);
	return $cast(PreviewFeature$Feature, $Enum::valueOf(PreviewFeature$Feature::class$, name));
}

void PreviewFeature$Feature::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$PreviewFeature$Feature($Class* class$) {
	$assignStatic(PreviewFeature$Feature::SEALED_CLASSES, $new(PreviewFeature$Feature, "SEALED_CLASSES"_s, 0));
	$assignStatic(PreviewFeature$Feature::SWITCH_PATTERN_MATCHING, $new(PreviewFeature$Feature, "SWITCH_PATTERN_MATCHING"_s, 1));
	$assignStatic(PreviewFeature$Feature::TEST, $new(PreviewFeature$Feature, "TEST"_s, 2));
	$assignStatic(PreviewFeature$Feature::$VALUES, PreviewFeature$Feature::$values());
}

PreviewFeature$Feature::PreviewFeature$Feature() {
}

$Class* PreviewFeature$Feature::load$($String* name, bool initialize) {
	$loadClass(PreviewFeature$Feature, name, initialize, &_PreviewFeature$Feature_ClassInfo_, clinit$PreviewFeature$Feature, allocate$PreviewFeature$Feature);
	return class$;
}

$Class* PreviewFeature$Feature::class$ = nullptr;

		} // javac
	} // internal
} // jdk