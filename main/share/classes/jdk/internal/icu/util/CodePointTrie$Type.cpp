#include <jdk/internal/icu/util/CodePointTrie$Type.h>

#include <java/lang/Enum.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef FAST
#undef SMALL

using $CodePointTrie$TypeArray = $Array<::jdk::internal::icu::util::CodePointTrie$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$Type_FieldInfo_[] = {
	{"FAST", "Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointTrie$Type, FAST)},
	{"SMALL", "Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointTrie$Type, SMALL)},
	{"$VALUES", "[Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$Type, $VALUES)},
	{}
};

$MethodInfo _CodePointTrie$Type_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CodePointTrie$TypeArray*(*)()>(&CodePointTrie$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CodePointTrie$Type::*)($String*,int32_t)>(&CodePointTrie$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointTrie$Type*(*)($String*)>(&CodePointTrie$Type::valueOf))},
	{"values", "()[Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CodePointTrie$TypeArray*(*)()>(&CodePointTrie$Type::values))},
	{}
};

$InnerClassInfo _CodePointTrie$Type_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Type", "jdk.internal.icu.util.CodePointTrie", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CodePointTrie$Type_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.icu.util.CodePointTrie$Type",
	"java.lang.Enum",
	nullptr,
	_CodePointTrie$Type_FieldInfo_,
	_CodePointTrie$Type_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/icu/util/CodePointTrie$Type;>;",
	nullptr,
	_CodePointTrie$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Type($Class* clazz) {
	return $of($alloc(CodePointTrie$Type));
}

CodePointTrie$Type* CodePointTrie$Type::FAST = nullptr;
CodePointTrie$Type* CodePointTrie$Type::SMALL = nullptr;
$CodePointTrie$TypeArray* CodePointTrie$Type::$VALUES = nullptr;

$CodePointTrie$TypeArray* CodePointTrie$Type::$values() {
	$init(CodePointTrie$Type);
	return $new($CodePointTrie$TypeArray, {
		CodePointTrie$Type::FAST,
		CodePointTrie$Type::SMALL
	});
}

$CodePointTrie$TypeArray* CodePointTrie$Type::values() {
	$init(CodePointTrie$Type);
	return $cast($CodePointTrie$TypeArray, CodePointTrie$Type::$VALUES->clone());
}

CodePointTrie$Type* CodePointTrie$Type::valueOf($String* name) {
	$init(CodePointTrie$Type);
	return $cast(CodePointTrie$Type, $Enum::valueOf(CodePointTrie$Type::class$, name));
}

void CodePointTrie$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CodePointTrie$Type($Class* class$) {
	$assignStatic(CodePointTrie$Type::FAST, $new(CodePointTrie$Type, "FAST"_s, 0));
	$assignStatic(CodePointTrie$Type::SMALL, $new(CodePointTrie$Type, "SMALL"_s, 1));
	$assignStatic(CodePointTrie$Type::$VALUES, CodePointTrie$Type::$values());
}

CodePointTrie$Type::CodePointTrie$Type() {
}

$Class* CodePointTrie$Type::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Type, name, initialize, &_CodePointTrie$Type_ClassInfo_, clinit$CodePointTrie$Type, allocate$CodePointTrie$Type);
	return class$;
}

$Class* CodePointTrie$Type::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk