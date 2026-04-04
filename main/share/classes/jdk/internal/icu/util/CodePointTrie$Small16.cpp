#include <jdk/internal/icu/util/CodePointTrie$Small16.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data16.h>
#include <jdk/internal/icu/util/CodePointTrie$Small.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_16
#undef SMALL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data16 = ::jdk::internal::icu::util::CodePointTrie$Data16;
using $CodePointTrie$Small = ::jdk::internal::icu::util::CodePointTrie$Small;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

void CodePointTrie$Small16::init$($chars* index, $chars* data16, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie$Small::init$(index, $$new($CodePointTrie$Data16, data16), highStart, index3NullOffset, dataNullOffset);
}

CodePointTrie$Small16* CodePointTrie$Small16::fromBinary($ByteBuffer* bytes) {
	$init(CodePointTrie$Small16);
	$init($CodePointTrie$Type);
	$init($CodePointTrie$ValueWidth);
	return $cast(CodePointTrie$Small16, $CodePointTrie::fromBinary($CodePointTrie$Type::SMALL, $CodePointTrie$ValueWidth::BITS_16, bytes));
}

CodePointTrie$Small16::CodePointTrie$Small16() {
}

$Class* CodePointTrie$Small16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([C[CIII)V", nullptr, 0, $method(CodePointTrie$Small16, init$, void, $chars*, $chars*, int32_t, int32_t, int32_t)},
		{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Small16;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointTrie$Small16, fromBinary, CodePointTrie$Small16*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointTrie$Small16", "jdk.internal.icu.util.CodePointTrie", "Small16", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.icu.util.CodePointTrie$Small", "jdk.internal.icu.util.CodePointTrie", "Small", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.icu.util.CodePointTrie$Small16",
		"jdk.internal.icu.util.CodePointTrie$Small",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.util.CodePointTrie"
	};
	$loadClass(CodePointTrie$Small16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointTrie$Small16);
	});
	return class$;
}

$Class* CodePointTrie$Small16::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk