#include <jdk/internal/icu/util/CodePointTrie$Small8.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$Data8.h>
#include <jdk/internal/icu/util/CodePointTrie$Small.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef SMALL
#undef BITS_8

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$Data8 = ::jdk::internal::icu::util::CodePointTrie$Data8;
using $CodePointTrie$Small = ::jdk::internal::icu::util::CodePointTrie$Small;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$MethodInfo _CodePointTrie$Small8_MethodInfo_[] = {
	{"<init>", "([C[BIII)V", nullptr, 0, $method(static_cast<void(CodePointTrie$Small8::*)($chars*,$bytes*,int32_t,int32_t,int32_t)>(&CodePointTrie$Small8::init$))},
	{"fromBinary", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Small8;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointTrie$Small8*(*)($ByteBuffer*)>(&CodePointTrie$Small8::fromBinary))},
	{}
};

$InnerClassInfo _CodePointTrie$Small8_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Small8", "jdk.internal.icu.util.CodePointTrie", "Small8", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.util.CodePointTrie$Small", "jdk.internal.icu.util.CodePointTrie", "Small", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CodePointTrie$Small8_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointTrie$Small8",
	"jdk.internal.icu.util.CodePointTrie$Small",
	nullptr,
	nullptr,
	_CodePointTrie$Small8_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Small8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Small8($Class* clazz) {
	return $of($alloc(CodePointTrie$Small8));
}

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
	$loadClass(CodePointTrie$Small8, name, initialize, &_CodePointTrie$Small8_ClassInfo_, allocate$CodePointTrie$Small8);
	return class$;
}

$Class* CodePointTrie$Small8::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk