#include <jdk/internal/icu/util/CodePointTrie$Fast8.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data8.h>
#include <jdk/internal/icu/util/CodePointTrie$Fast.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_8
#undef FAST

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data8 = ::jdk::internal::icu::util::CodePointTrie$Data8;
using $CodePointTrie$Fast = ::jdk::internal::icu::util::CodePointTrie$Fast;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

bool CodePointTrie$Fast8::$assertionsDisabled = false;

void CodePointTrie$Fast8::init$($chars* index, $bytes* data8, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie$Fast::init$(index, $$new($CodePointTrie$Data8, data8), highStart, index3NullOffset, dataNullOffset);
	$set(this, dataArray, data8);
}

CodePointTrie$Fast8* CodePointTrie$Fast8::fromBinary($ByteBuffer* bytes) {
	$init(CodePointTrie$Fast8);
	$init($CodePointTrie$Type);
	$init($CodePointTrie$ValueWidth);
	return $cast(CodePointTrie$Fast8, $CodePointTrie::fromBinary($CodePointTrie$Type::FAST, $CodePointTrie$ValueWidth::BITS_8, bytes));
}

int32_t CodePointTrie$Fast8::get(int32_t c) {
	return $nc(this->dataArray)->get(cpIndex(c)) & 0xff;
}

int32_t CodePointTrie$Fast8::bmpGet(int32_t c) {
	if (!CodePointTrie$Fast8::$assertionsDisabled && !(0 <= c && c <= 0x0000ffff)) {
		$throwNew($AssertionError);
	}
	return $nc(this->dataArray)->get(fastIndex(c)) & 0xff;
}

int32_t CodePointTrie$Fast8::suppGet(int32_t c) {
	if (!CodePointTrie$Fast8::$assertionsDisabled && !(0x00010000 <= c && c <= 0x0010ffff)) {
		$throwNew($AssertionError);
	}
	$init($CodePointTrie$Type);
	return $nc(this->dataArray)->get(smallIndex($CodePointTrie$Type::FAST, c)) & 0xff;
}

void CodePointTrie$Fast8::clinit$($Class* clazz) {
	$load($CodePointTrie);
	CodePointTrie$Fast8::$assertionsDisabled = !$CodePointTrie::class$->desiredAssertionStatus();
}

CodePointTrie$Fast8::CodePointTrie$Fast8() {
}

$Class* CodePointTrie$Fast8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$Fast8, $assertionsDisabled)},
		{"dataArray", "[B", nullptr, $PRIVATE | $FINAL, $field(CodePointTrie$Fast8, dataArray)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([C[BIII)V", nullptr, 0, $method(CodePointTrie$Fast8, init$, void, $chars*, $bytes*, int32_t, int32_t, int32_t)},
		{"bmpGet", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CodePointTrie$Fast8, bmpGet, int32_t, int32_t)},
		{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Fast8;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointTrie$Fast8, fromBinary, CodePointTrie$Fast8*, $ByteBuffer*)},
		{"get", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CodePointTrie$Fast8, get, int32_t, int32_t)},
		{"suppGet", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CodePointTrie$Fast8, suppGet, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointTrie$Fast8", "jdk.internal.icu.util.CodePointTrie", "Fast8", $PUBLIC | $STATIC | $FINAL},
		{"jdk.internal.icu.util.CodePointTrie$Fast", "jdk.internal.icu.util.CodePointTrie", "Fast", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.icu.util.CodePointTrie$Fast8",
		"jdk.internal.icu.util.CodePointTrie$Fast",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.util.CodePointTrie"
	};
	$loadClass(CodePointTrie$Fast8, name, initialize, &classInfo$$, CodePointTrie$Fast8::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointTrie$Fast8);
	});
	return class$;
}

$Class* CodePointTrie$Fast8::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk