#include <java/lang/StackWalker$ExtendedOption.h>

#include <java/lang/Enum.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

#undef LOCALS_AND_OPERANDS

using $StackWalker$ExtendedOptionArray = $Array<::java::lang::StackWalker$ExtendedOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;

namespace java {
	namespace lang {

$FieldInfo _StackWalker$ExtendedOption_FieldInfo_[] = {
	{"LOCALS_AND_OPERANDS", "Ljava/lang/StackWalker$ExtendedOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StackWalker$ExtendedOption, LOCALS_AND_OPERANDS)},
	{"$VALUES", "[Ljava/lang/StackWalker$ExtendedOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StackWalker$ExtendedOption, $VALUES)},
	{}
};

$MethodInfo _StackWalker$ExtendedOption_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/StackWalker$ExtendedOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StackWalker$ExtendedOptionArray*(*)()>(&StackWalker$ExtendedOption::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StackWalker$ExtendedOption::*)($String*,int32_t)>(&StackWalker$ExtendedOption::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/StackWalker$ExtendedOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StackWalker$ExtendedOption*(*)($String*)>(&StackWalker$ExtendedOption::valueOf))},
	{"values", "()[Ljava/lang/StackWalker$ExtendedOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StackWalker$ExtendedOptionArray*(*)()>(&StackWalker$ExtendedOption::values))},
	{}
};

$InnerClassInfo _StackWalker$ExtendedOption_InnerClassesInfo_[] = {
	{"java.lang.StackWalker$ExtendedOption", "java.lang.StackWalker", "ExtendedOption", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StackWalker$ExtendedOption_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.lang.StackWalker$ExtendedOption",
	"java.lang.Enum",
	nullptr,
	_StackWalker$ExtendedOption_FieldInfo_,
	_StackWalker$ExtendedOption_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/StackWalker$ExtendedOption;>;",
	nullptr,
	_StackWalker$ExtendedOption_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackWalker"
};

$Object* allocate$StackWalker$ExtendedOption($Class* clazz) {
	return $of($alloc(StackWalker$ExtendedOption));
}

StackWalker$ExtendedOption* StackWalker$ExtendedOption::LOCALS_AND_OPERANDS = nullptr;
$StackWalker$ExtendedOptionArray* StackWalker$ExtendedOption::$VALUES = nullptr;

$StackWalker$ExtendedOptionArray* StackWalker$ExtendedOption::$values() {
	$init(StackWalker$ExtendedOption);
	return $new($StackWalker$ExtendedOptionArray, {StackWalker$ExtendedOption::LOCALS_AND_OPERANDS});
}

$StackWalker$ExtendedOptionArray* StackWalker$ExtendedOption::values() {
	$init(StackWalker$ExtendedOption);
	return $cast($StackWalker$ExtendedOptionArray, StackWalker$ExtendedOption::$VALUES->clone());
}

StackWalker$ExtendedOption* StackWalker$ExtendedOption::valueOf($String* name) {
	$init(StackWalker$ExtendedOption);
	return $cast(StackWalker$ExtendedOption, $Enum::valueOf(StackWalker$ExtendedOption::class$, name));
}

void StackWalker$ExtendedOption::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StackWalker$ExtendedOption($Class* class$) {
	$assignStatic(StackWalker$ExtendedOption::LOCALS_AND_OPERANDS, $new(StackWalker$ExtendedOption, "LOCALS_AND_OPERANDS"_s, 0));
	$assignStatic(StackWalker$ExtendedOption::$VALUES, StackWalker$ExtendedOption::$values());
}

StackWalker$ExtendedOption::StackWalker$ExtendedOption() {
}

$Class* StackWalker$ExtendedOption::load$($String* name, bool initialize) {
	$loadClass(StackWalker$ExtendedOption, name, initialize, &_StackWalker$ExtendedOption_ClassInfo_, clinit$StackWalker$ExtendedOption, allocate$StackWalker$ExtendedOption);
	return class$;
}

$Class* StackWalker$ExtendedOption::class$ = nullptr;

	} // lang
} // java