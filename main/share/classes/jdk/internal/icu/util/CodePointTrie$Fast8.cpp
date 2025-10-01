#include <jdk/internal/icu/util/CodePointTrie$Fast8.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
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
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$Data8 = ::jdk::internal::icu::util::CodePointTrie$Data8;
using $CodePointTrie$Fast = ::jdk::internal::icu::util::CodePointTrie$Fast;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$Fast8_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$Fast8, $assertionsDisabled)},
	{"dataArray", "[B", nullptr, $PRIVATE | $FINAL, $field(CodePointTrie$Fast8, dataArray)},
	{}
};

$MethodInfo _CodePointTrie$Fast8_MethodInfo_[] = {
	{"<init>", "([C[BIII)V", nullptr, 0, $method(static_cast<void(CodePointTrie$Fast8::*)($chars*,$bytes*,int32_t,int32_t,int32_t)>(&CodePointTrie$Fast8::init$))},
	{"bmpGet", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Fast8;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointTrie$Fast8*(*)($ByteBuffer*)>(&CodePointTrie$Fast8::fromBinary))},
	{"get", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"suppGet", "(I)I", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _CodePointTrie$Fast8_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Fast8", "jdk.internal.icu.util.CodePointTrie", "Fast8", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointTrie$Fast", "jdk.internal.icu.util.CodePointTrie", "Fast", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointTrie$Fast8_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointTrie$Fast8",
	"jdk.internal.icu.util.CodePointTrie$Fast",
	nullptr,
	_CodePointTrie$Fast8_FieldInfo_,
	_CodePointTrie$Fast8_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Fast8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Fast8($Class* clazz) {
	return $of($alloc(CodePointTrie$Fast8));
}

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
	return (int32_t)($nc(this->dataArray)->get(cpIndex(c)) & (uint32_t)255);
}

int32_t CodePointTrie$Fast8::bmpGet(int32_t c) {
	if (!CodePointTrie$Fast8::$assertionsDisabled && !(0 <= c && c <= 0x0000FFFF)) {
		$throwNew($AssertionError);
	}
	return (int32_t)($nc(this->dataArray)->get(fastIndex(c)) & (uint32_t)255);
}

int32_t CodePointTrie$Fast8::suppGet(int32_t c) {
	if (!CodePointTrie$Fast8::$assertionsDisabled && !(0x00010000 <= c && c <= 0x0010FFFF)) {
		$throwNew($AssertionError);
	}
	$init($CodePointTrie$Type);
	return (int32_t)($nc(this->dataArray)->get(smallIndex($CodePointTrie$Type::FAST, c)) & (uint32_t)255);
}

void clinit$CodePointTrie$Fast8($Class* class$) {
	$load($CodePointTrie);
	CodePointTrie$Fast8::$assertionsDisabled = !$CodePointTrie::class$->desiredAssertionStatus();
}

CodePointTrie$Fast8::CodePointTrie$Fast8() {
}

$Class* CodePointTrie$Fast8::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Fast8, name, initialize, &_CodePointTrie$Fast8_ClassInfo_, clinit$CodePointTrie$Fast8, allocate$CodePointTrie$Fast8);
	return class$;
}

$Class* CodePointTrie$Fast8::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk