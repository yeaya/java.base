#include <jdk/internal/icu/util/CodePointTrie$Fast32.h>

#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$Data32.h>
#include <jdk/internal/icu/util/CodePointTrie$Fast.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_32
#undef FAST

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$Data32 = ::jdk::internal::icu::util::CodePointTrie$Data32;
using $CodePointTrie$Fast = ::jdk::internal::icu::util::CodePointTrie$Fast;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointTrie$Fast32_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$Fast32, $assertionsDisabled)},
	{"dataArray", "[I", nullptr, $PRIVATE | $FINAL, $field(CodePointTrie$Fast32, dataArray)},
	{}
};

$MethodInfo _CodePointTrie$Fast32_MethodInfo_[] = {
	{"<init>", "([C[IIII)V", nullptr, 0, $method(static_cast<void(CodePointTrie$Fast32::*)($chars*,$ints*,int32_t,int32_t,int32_t)>(&CodePointTrie$Fast32::init$))},
	{"bmpGet", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Fast32;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointTrie$Fast32*(*)($ByteBuffer*)>(&CodePointTrie$Fast32::fromBinary))},
	{"get", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"suppGet", "(I)I", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _CodePointTrie$Fast32_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Fast32", "jdk.internal.icu.util.CodePointTrie", "Fast32", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointTrie$Fast", "jdk.internal.icu.util.CodePointTrie", "Fast", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointTrie$Fast32_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointTrie$Fast32",
	"jdk.internal.icu.util.CodePointTrie$Fast",
	nullptr,
	_CodePointTrie$Fast32_FieldInfo_,
	_CodePointTrie$Fast32_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Fast32_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Fast32($Class* clazz) {
	return $of($alloc(CodePointTrie$Fast32));
}

bool CodePointTrie$Fast32::$assertionsDisabled = false;

void CodePointTrie$Fast32::init$($chars* index, $ints* data32, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie$Fast::init$(index, $$new($CodePointTrie$Data32, data32), highStart, index3NullOffset, dataNullOffset);
	$set(this, dataArray, data32);
}

CodePointTrie$Fast32* CodePointTrie$Fast32::fromBinary($ByteBuffer* bytes) {
	$init(CodePointTrie$Fast32);
	$init($CodePointTrie$Type);
	$init($CodePointTrie$ValueWidth);
	return $cast(CodePointTrie$Fast32, $CodePointTrie::fromBinary($CodePointTrie$Type::FAST, $CodePointTrie$ValueWidth::BITS_32, bytes));
}

int32_t CodePointTrie$Fast32::get(int32_t c) {
	return $nc(this->dataArray)->get(cpIndex(c));
}

int32_t CodePointTrie$Fast32::bmpGet(int32_t c) {
	if (!CodePointTrie$Fast32::$assertionsDisabled && !(0 <= c && c <= 0x0000FFFF)) {
		$throwNew($AssertionError);
	}
	return $nc(this->dataArray)->get(fastIndex(c));
}

int32_t CodePointTrie$Fast32::suppGet(int32_t c) {
	if (!CodePointTrie$Fast32::$assertionsDisabled && !(0x00010000 <= c && c <= 0x0010FFFF)) {
		$throwNew($AssertionError);
	}
	$init($CodePointTrie$Type);
	return $nc(this->dataArray)->get(smallIndex($CodePointTrie$Type::FAST, c));
}

void clinit$CodePointTrie$Fast32($Class* class$) {
	$load($CodePointTrie);
	CodePointTrie$Fast32::$assertionsDisabled = !$CodePointTrie::class$->desiredAssertionStatus();
}

CodePointTrie$Fast32::CodePointTrie$Fast32() {
}

$Class* CodePointTrie$Fast32::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Fast32, name, initialize, &_CodePointTrie$Fast32_ClassInfo_, clinit$CodePointTrie$Fast32, allocate$CodePointTrie$Fast32);
	return class$;
}

$Class* CodePointTrie$Fast32::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk