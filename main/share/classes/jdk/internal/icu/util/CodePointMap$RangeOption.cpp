#include <jdk/internal/icu/util/CodePointMap$RangeOption.h>

#include <java/lang/Enum.h>
#include <jdk/internal/icu/util/CodePointMap.h>
#include <jcpp.h>

#undef FIXED_ALL_SURROGATES
#undef FIXED_LEAD_SURROGATES
#undef NORMAL

using $CodePointMap$RangeOptionArray = $Array<::jdk::internal::icu::util::CodePointMap$RangeOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointMap = ::jdk::internal::icu::util::CodePointMap;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointMap$RangeOption_FieldInfo_[] = {
	{"NORMAL", "Ljdk/internal/icu/util/CodePointMap$RangeOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointMap$RangeOption, NORMAL)},
	{"FIXED_LEAD_SURROGATES", "Ljdk/internal/icu/util/CodePointMap$RangeOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointMap$RangeOption, FIXED_LEAD_SURROGATES)},
	{"FIXED_ALL_SURROGATES", "Ljdk/internal/icu/util/CodePointMap$RangeOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointMap$RangeOption, FIXED_ALL_SURROGATES)},
	{"$VALUES", "[Ljdk/internal/icu/util/CodePointMap$RangeOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointMap$RangeOption, $VALUES)},
	{}
};

$MethodInfo _CodePointMap$RangeOption_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/icu/util/CodePointMap$RangeOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CodePointMap$RangeOptionArray*(*)()>(&CodePointMap$RangeOption::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CodePointMap$RangeOption::*)($String*,int32_t)>(&CodePointMap$RangeOption::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/icu/util/CodePointMap$RangeOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointMap$RangeOption*(*)($String*)>(&CodePointMap$RangeOption::valueOf))},
	{"values", "()[Ljdk/internal/icu/util/CodePointMap$RangeOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CodePointMap$RangeOptionArray*(*)()>(&CodePointMap$RangeOption::values))},
	{}
};

$InnerClassInfo _CodePointMap$RangeOption_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointMap$RangeOption", "jdk.internal.icu.util.CodePointMap", "RangeOption", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CodePointMap$RangeOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.icu.util.CodePointMap$RangeOption",
	"java.lang.Enum",
	nullptr,
	_CodePointMap$RangeOption_FieldInfo_,
	_CodePointMap$RangeOption_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/icu/util/CodePointMap$RangeOption;>;",
	nullptr,
	_CodePointMap$RangeOption_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointMap"
};

$Object* allocate$CodePointMap$RangeOption($Class* clazz) {
	return $of($alloc(CodePointMap$RangeOption));
}

CodePointMap$RangeOption* CodePointMap$RangeOption::NORMAL = nullptr;
CodePointMap$RangeOption* CodePointMap$RangeOption::FIXED_LEAD_SURROGATES = nullptr;
CodePointMap$RangeOption* CodePointMap$RangeOption::FIXED_ALL_SURROGATES = nullptr;
$CodePointMap$RangeOptionArray* CodePointMap$RangeOption::$VALUES = nullptr;

$CodePointMap$RangeOptionArray* CodePointMap$RangeOption::$values() {
	$init(CodePointMap$RangeOption);
	return $new($CodePointMap$RangeOptionArray, {
		CodePointMap$RangeOption::NORMAL,
		CodePointMap$RangeOption::FIXED_LEAD_SURROGATES,
		CodePointMap$RangeOption::FIXED_ALL_SURROGATES
	});
}

$CodePointMap$RangeOptionArray* CodePointMap$RangeOption::values() {
	$init(CodePointMap$RangeOption);
	return $cast($CodePointMap$RangeOptionArray, CodePointMap$RangeOption::$VALUES->clone());
}

CodePointMap$RangeOption* CodePointMap$RangeOption::valueOf($String* name) {
	$init(CodePointMap$RangeOption);
	return $cast(CodePointMap$RangeOption, $Enum::valueOf(CodePointMap$RangeOption::class$, name));
}

void CodePointMap$RangeOption::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CodePointMap$RangeOption($Class* class$) {
	$assignStatic(CodePointMap$RangeOption::NORMAL, $new(CodePointMap$RangeOption, "NORMAL"_s, 0));
	$assignStatic(CodePointMap$RangeOption::FIXED_LEAD_SURROGATES, $new(CodePointMap$RangeOption, "FIXED_LEAD_SURROGATES"_s, 1));
	$assignStatic(CodePointMap$RangeOption::FIXED_ALL_SURROGATES, $new(CodePointMap$RangeOption, "FIXED_ALL_SURROGATES"_s, 2));
	$assignStatic(CodePointMap$RangeOption::$VALUES, CodePointMap$RangeOption::$values());
}

CodePointMap$RangeOption::CodePointMap$RangeOption() {
}

$Class* CodePointMap$RangeOption::load$($String* name, bool initialize) {
	$loadClass(CodePointMap$RangeOption, name, initialize, &_CodePointMap$RangeOption_ClassInfo_, clinit$CodePointMap$RangeOption, allocate$CodePointMap$RangeOption);
	return class$;
}

$Class* CodePointMap$RangeOption::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk