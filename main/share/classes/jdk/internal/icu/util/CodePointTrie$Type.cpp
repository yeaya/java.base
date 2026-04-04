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

void CodePointTrie$Type::clinit$($Class* clazz) {
	$assignStatic(CodePointTrie$Type::FAST, $new(CodePointTrie$Type, "FAST"_s, 0));
	$assignStatic(CodePointTrie$Type::SMALL, $new(CodePointTrie$Type, "SMALL"_s, 1));
	$assignStatic(CodePointTrie$Type::$VALUES, CodePointTrie$Type::$values());
}

CodePointTrie$Type::CodePointTrie$Type() {
}

$Class* CodePointTrie$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FAST", "Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointTrie$Type, FAST)},
		{"SMALL", "Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CodePointTrie$Type, SMALL)},
		{"$VALUES", "[Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$Type, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CodePointTrie$Type, $values, $CodePointTrie$TypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(CodePointTrie$Type, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointTrie$Type, valueOf, CodePointTrie$Type*, $String*)},
		{"values", "()[Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointTrie$Type, values, $CodePointTrie$TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointTrie$Type", "jdk.internal.icu.util.CodePointTrie", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"jdk.internal.icu.util.CodePointTrie$Type",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljdk/internal/icu/util/CodePointTrie$Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.util.CodePointTrie"
	};
	$loadClass(CodePointTrie$Type, name, initialize, &classInfo$$, CodePointTrie$Type::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CodePointTrie$Type));
	});
	return class$;
}

$Class* CodePointTrie$Type::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk