#include <jdk/internal/icu/util/CodePointTrie$Small32.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data32.h>
#include <jdk/internal/icu/util/CodePointTrie$Small.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_32
#undef SMALL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data32 = ::jdk::internal::icu::util::CodePointTrie$Data32;
using $CodePointTrie$Small = ::jdk::internal::icu::util::CodePointTrie$Small;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

void CodePointTrie$Small32::init$($chars* index, $ints* data32, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie$Small::init$(index, $$new($CodePointTrie$Data32, data32), highStart, index3NullOffset, dataNullOffset);
}

CodePointTrie$Small32* CodePointTrie$Small32::fromBinary($ByteBuffer* bytes) {
	$init(CodePointTrie$Small32);
	$init($CodePointTrie$Type);
	$init($CodePointTrie$ValueWidth);
	return $cast(CodePointTrie$Small32, $CodePointTrie::fromBinary($CodePointTrie$Type::SMALL, $CodePointTrie$ValueWidth::BITS_32, bytes));
}

CodePointTrie$Small32::CodePointTrie$Small32() {
}

$Class* CodePointTrie$Small32::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([C[IIII)V", nullptr, 0, $method(CodePointTrie$Small32, init$, void, $chars*, $ints*, int32_t, int32_t, int32_t)},
		{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Small32;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointTrie$Small32, fromBinary, CodePointTrie$Small32*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointTrie$Small32", "jdk.internal.icu.util.CodePointTrie", "Small32", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.icu.util.CodePointTrie$Small", "jdk.internal.icu.util.CodePointTrie", "Small", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.icu.util.CodePointTrie$Small32",
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
	$loadClass(CodePointTrie$Small32, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointTrie$Small32);
	});
	return class$;
}

$Class* CodePointTrie$Small32::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk