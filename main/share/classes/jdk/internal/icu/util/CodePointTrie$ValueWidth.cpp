#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_8
#undef BITS_32
#undef BITS_16

using $CodePointTrie$ValueWidthArray = $Array<::jdk::internal::icu::util::CodePointTrie$ValueWidth>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$ValueWidth_FieldInfo_[] = {
	{"BITS_16", "Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointTrie$ValueWidth, BITS_16)},
	{"BITS_32", "Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointTrie$ValueWidth, BITS_32)},
	{"BITS_8", "Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointTrie$ValueWidth, BITS_8)},
	{"$VALUES", "[Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$ValueWidth, $VALUES)},
	{}
};

$MethodInfo _CodePointTrie$ValueWidth_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CodePointTrie$ValueWidthArray*(*)()>(&CodePointTrie$ValueWidth::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CodePointTrie$ValueWidth::*)($String*,int32_t)>(&CodePointTrie$ValueWidth::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointTrie$ValueWidth*(*)($String*)>(&CodePointTrie$ValueWidth::valueOf))},
	{"values", "()[Ljdk/internal/icu/util/CodePointTrie$ValueWidth;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CodePointTrie$ValueWidthArray*(*)()>(&CodePointTrie$ValueWidth::values))},
	{}
};

$InnerClassInfo _CodePointTrie$ValueWidth_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$ValueWidth", "jdk.internal.icu.util.CodePointTrie", "ValueWidth", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CodePointTrie$ValueWidth_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.icu.util.CodePointTrie$ValueWidth",
	"java.lang.Enum",
	nullptr,
	_CodePointTrie$ValueWidth_FieldInfo_,
	_CodePointTrie$ValueWidth_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/icu/util/CodePointTrie$ValueWidth;>;",
	nullptr,
	_CodePointTrie$ValueWidth_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$ValueWidth($Class* clazz) {
	return $of($alloc(CodePointTrie$ValueWidth));
}


CodePointTrie$ValueWidth* CodePointTrie$ValueWidth::BITS_16 = nullptr;

CodePointTrie$ValueWidth* CodePointTrie$ValueWidth::BITS_32 = nullptr;

CodePointTrie$ValueWidth* CodePointTrie$ValueWidth::BITS_8 = nullptr;
$CodePointTrie$ValueWidthArray* CodePointTrie$ValueWidth::$VALUES = nullptr;

$CodePointTrie$ValueWidthArray* CodePointTrie$ValueWidth::$values() {
	$init(CodePointTrie$ValueWidth);
	return $new($CodePointTrie$ValueWidthArray, {
		CodePointTrie$ValueWidth::BITS_16,
		CodePointTrie$ValueWidth::BITS_32,
		CodePointTrie$ValueWidth::BITS_8
	});
}

$CodePointTrie$ValueWidthArray* CodePointTrie$ValueWidth::values() {
	$init(CodePointTrie$ValueWidth);
	return $cast($CodePointTrie$ValueWidthArray, CodePointTrie$ValueWidth::$VALUES->clone());
}

CodePointTrie$ValueWidth* CodePointTrie$ValueWidth::valueOf($String* name) {
	$init(CodePointTrie$ValueWidth);
	return $cast(CodePointTrie$ValueWidth, $Enum::valueOf(CodePointTrie$ValueWidth::class$, name));
}

void CodePointTrie$ValueWidth::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CodePointTrie$ValueWidth($Class* class$) {
	$assignStatic(CodePointTrie$ValueWidth::BITS_16, $new(CodePointTrie$ValueWidth, "BITS_16"_s, 0));
	$assignStatic(CodePointTrie$ValueWidth::BITS_32, $new(CodePointTrie$ValueWidth, "BITS_32"_s, 1));
	$assignStatic(CodePointTrie$ValueWidth::BITS_8, $new(CodePointTrie$ValueWidth, "BITS_8"_s, 2));
	$assignStatic(CodePointTrie$ValueWidth::$VALUES, CodePointTrie$ValueWidth::$values());
}

CodePointTrie$ValueWidth::CodePointTrie$ValueWidth() {
}

$Class* CodePointTrie$ValueWidth::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$ValueWidth, name, initialize, &_CodePointTrie$ValueWidth_ClassInfo_, clinit$CodePointTrie$ValueWidth, allocate$CodePointTrie$ValueWidth);
	return class$;
}

$Class* CodePointTrie$ValueWidth::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk