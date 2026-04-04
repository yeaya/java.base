#include <jdk/internal/icu/util/CodePointTrie$Small8.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data8.h>
#include <jdk/internal/icu/util/CodePointTrie$Small.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_8
#undef SMALL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data8 = ::jdk::internal::icu::util::CodePointTrie$Data8;
using $CodePointTrie$Small = ::jdk::internal::icu::util::CodePointTrie$Small;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

void CodePointTrie$Small8::init$($chars* index, $bytes* data8, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie$Small::init$(index, $$new($CodePointTrie$Data8, data8), highStart, index3NullOffset, dataNullOffset);
}

CodePointTrie$Small8* CodePointTrie$Small8::fromBinary($ByteBuffer* bytes) {
	$init(CodePointTrie$Small8);
	$init($CodePointTrie$Type);
	$init($CodePointTrie$ValueWidth);
	return $cast(CodePointTrie$Small8, $CodePointTrie::fromBinary($CodePointTrie$Type::SMALL, $CodePointTrie$ValueWidth::BITS_8, bytes));
}

CodePointTrie$Small8::CodePointTrie$Small8() {
}

$Class* CodePointTrie$Small8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([C[BIII)V", nullptr, 0, $method(CodePointTrie$Small8, init$, void, $chars*, $bytes*, int32_t, int32_t, int32_t)},
		{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Small8;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointTrie$Small8, fromBinary, CodePointTrie$Small8*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointTrie$Small8", "jdk.internal.icu.util.CodePointTrie", "Small8", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.icu.util.CodePointTrie$Small", "jdk.internal.icu.util.CodePointTrie", "Small", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.icu.util.CodePointTrie$Small8",
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
	$loadClass(CodePointTrie$Small8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointTrie$Small8);
	});
	return class$;
}

$Class* CodePointTrie$Small8::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk