#include <jdk/internal/icu/util/CodePointTrie$Fast16.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$Data16.h>
#include <jdk/internal/icu/util/CodePointTrie$Fast.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_16
#undef FAST

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$Data16 = ::jdk::internal::icu::util::CodePointTrie$Data16;
using $CodePointTrie$Fast = ::jdk::internal::icu::util::CodePointTrie$Fast;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$Fast16_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$Fast16, $assertionsDisabled)},
	{"dataArray", "[C", nullptr, $PRIVATE | $FINAL, $field(CodePointTrie$Fast16, dataArray)},
	{}
};

$MethodInfo _CodePointTrie$Fast16_MethodInfo_[] = {
	{"<init>", "([C[CIII)V", nullptr, 0, $method(CodePointTrie$Fast16, init$, void, $chars*, $chars*, int32_t, int32_t, int32_t)},
	{"bmpGet", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CodePointTrie$Fast16, bmpGet, int32_t, int32_t)},
	{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Fast16;", nullptr, $PUBLIC | $STATIC, $staticMethod(CodePointTrie$Fast16, fromBinary, CodePointTrie$Fast16*, $ByteBuffer*)},
	{"get", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CodePointTrie$Fast16, get, int32_t, int32_t)},
	{"suppGet", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(CodePointTrie$Fast16, suppGet, int32_t, int32_t)},
	{}
};

$InnerClassInfo _CodePointTrie$Fast16_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Fast16", "jdk.internal.icu.util.CodePointTrie", "Fast16", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointTrie$Fast", "jdk.internal.icu.util.CodePointTrie", "Fast", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointTrie$Fast16_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointTrie$Fast16",
	"jdk.internal.icu.util.CodePointTrie$Fast",
	nullptr,
	_CodePointTrie$Fast16_FieldInfo_,
	_CodePointTrie$Fast16_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Fast16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Fast16($Class* clazz) {
	return $of($alloc(CodePointTrie$Fast16));
}

bool CodePointTrie$Fast16::$assertionsDisabled = false;

void CodePointTrie$Fast16::init$($chars* index, $chars* data16, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie$Fast::init$(index, $$new($CodePointTrie$Data16, data16), highStart, index3NullOffset, dataNullOffset);
	$set(this, dataArray, data16);
}

CodePointTrie$Fast16* CodePointTrie$Fast16::fromBinary($ByteBuffer* bytes) {
	$init(CodePointTrie$Fast16);
	$init($CodePointTrie$Type);
	$init($CodePointTrie$ValueWidth);
	return $cast(CodePointTrie$Fast16, $CodePointTrie::fromBinary($CodePointTrie$Type::FAST, $CodePointTrie$ValueWidth::BITS_16, bytes));
}

int32_t CodePointTrie$Fast16::get(int32_t c) {
	return $nc(this->dataArray)->get(cpIndex(c));
}

int32_t CodePointTrie$Fast16::bmpGet(int32_t c) {
	if (!CodePointTrie$Fast16::$assertionsDisabled && !(0 <= c && c <= 0x0000FFFF)) {
		$throwNew($AssertionError);
	}
	return $nc(this->dataArray)->get(fastIndex(c));
}

int32_t CodePointTrie$Fast16::suppGet(int32_t c) {
	if (!CodePointTrie$Fast16::$assertionsDisabled && !(0x00010000 <= c && c <= 0x0010FFFF)) {
		$throwNew($AssertionError);
	}
	$init($CodePointTrie$Type);
	return $nc(this->dataArray)->get(smallIndex($CodePointTrie$Type::FAST, c));
}

void clinit$CodePointTrie$Fast16($Class* class$) {
	$load($CodePointTrie);
	CodePointTrie$Fast16::$assertionsDisabled = !$CodePointTrie::class$->desiredAssertionStatus();
}

CodePointTrie$Fast16::CodePointTrie$Fast16() {
}

$Class* CodePointTrie$Fast16::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Fast16, name, initialize, &_CodePointTrie$Fast16_ClassInfo_, clinit$CodePointTrie$Fast16, allocate$CodePointTrie$Fast16);
	return class$;
}

$Class* CodePointTrie$Fast16::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk