#include <java/lang/StackWalker$Option.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SHOW_HIDDEN_FRAMES
#undef SHOW_REFLECT_FRAMES
#undef RETAIN_CLASS_REFERENCE

using $StackWalker$OptionArray = $Array<::java::lang::StackWalker$Option>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;

namespace java {
	namespace lang {

$FieldInfo _StackWalker$Option_FieldInfo_[] = {
	{"RETAIN_CLASS_REFERENCE", "Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackWalker$Option, RETAIN_CLASS_REFERENCE)},
	{"SHOW_REFLECT_FRAMES", "Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackWalker$Option, SHOW_REFLECT_FRAMES)},
	{"SHOW_HIDDEN_FRAMES", "Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackWalker$Option, SHOW_HIDDEN_FRAMES)},
	{"$VALUES", "[Ljava/lang/StackWalker$Option;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StackWalker$Option, $VALUES)},
	{}
};

$MethodInfo _StackWalker$Option_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/StackWalker$Option;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StackWalker$OptionArray*(*)()>(&StackWalker$Option::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StackWalker$Option::*)($String*,int32_t)>(&StackWalker$Option::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StackWalker$Option*(*)($String*)>(&StackWalker$Option::valueOf))},
	{"values", "()[Ljava/lang/StackWalker$Option;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StackWalker$OptionArray*(*)()>(&StackWalker$Option::values))},
	{}
};

$InnerClassInfo _StackWalker$Option_InnerClassesInfo_[] = {
	{"java.lang.StackWalker$Option", "java.lang.StackWalker", "Option", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StackWalker$Option_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.StackWalker$Option",
	"java.lang.Enum",
	nullptr,
	_StackWalker$Option_FieldInfo_,
	_StackWalker$Option_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/StackWalker$Option;>;",
	nullptr,
	_StackWalker$Option_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackWalker"
};

$Object* allocate$StackWalker$Option($Class* clazz) {
	return $of($alloc(StackWalker$Option));
}


StackWalker$Option* StackWalker$Option::RETAIN_CLASS_REFERENCE = nullptr;

StackWalker$Option* StackWalker$Option::SHOW_REFLECT_FRAMES = nullptr;

StackWalker$Option* StackWalker$Option::SHOW_HIDDEN_FRAMES = nullptr;
$StackWalker$OptionArray* StackWalker$Option::$VALUES = nullptr;

$StackWalker$OptionArray* StackWalker$Option::$values() {
	$init(StackWalker$Option);
	return $new($StackWalker$OptionArray, {
		StackWalker$Option::RETAIN_CLASS_REFERENCE,
		StackWalker$Option::SHOW_REFLECT_FRAMES,
		StackWalker$Option::SHOW_HIDDEN_FRAMES
	});
}

$StackWalker$OptionArray* StackWalker$Option::values() {
	$init(StackWalker$Option);
	return $cast($StackWalker$OptionArray, StackWalker$Option::$VALUES->clone());
}

StackWalker$Option* StackWalker$Option::valueOf($String* name) {
	$init(StackWalker$Option);
	return $cast(StackWalker$Option, $Enum::valueOf(StackWalker$Option::class$, name));
}

void StackWalker$Option::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StackWalker$Option($Class* class$) {
	$assignStatic(StackWalker$Option::RETAIN_CLASS_REFERENCE, $new(StackWalker$Option, "RETAIN_CLASS_REFERENCE"_s, 0));
	$assignStatic(StackWalker$Option::SHOW_REFLECT_FRAMES, $new(StackWalker$Option, "SHOW_REFLECT_FRAMES"_s, 1));
	$assignStatic(StackWalker$Option::SHOW_HIDDEN_FRAMES, $new(StackWalker$Option, "SHOW_HIDDEN_FRAMES"_s, 2));
	$assignStatic(StackWalker$Option::$VALUES, StackWalker$Option::$values());
}

StackWalker$Option::StackWalker$Option() {
}

$Class* StackWalker$Option::load$($String* name, bool initialize) {
	$loadClass(StackWalker$Option, name, initialize, &_StackWalker$Option_ClassInfo_, clinit$StackWalker$Option, allocate$StackWalker$Option);
	return class$;
}

$Class* StackWalker$Option::class$ = nullptr;

	} // lang
} // java