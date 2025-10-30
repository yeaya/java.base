#include <jdk/internal/icu/util/CodePointTrie$Fast.h>

#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointMap$StringIterator.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$Fast$FastStringIterator.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef FAST

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointMap$StringIterator = ::jdk::internal::icu::util::CodePointMap$StringIterator;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$Fast$FastStringIterator = ::jdk::internal::icu::util::CodePointTrie$Fast$FastStringIterator;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$CompoundAttribute _CodePointTrie$Fast_MethodAnnotations_cpIndex2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _CodePointTrie$Fast_MethodInfo_[] = {
	{"<init>", "([CLjdk/internal/icu/util/CodePointTrie$Data;III)V", nullptr, $PRIVATE, $method(static_cast<void(CodePointTrie$Fast::*)($chars*,$CodePointTrie$Data*,int32_t,int32_t,int32_t)>(&CodePointTrie$Fast::init$))},
	{"bmpGet", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"cpIndex", "(I)I", nullptr, $PROTECTED | $FINAL | $DEPRECATED, nullptr, nullptr, nullptr, _CodePointTrie$Fast_MethodAnnotations_cpIndex2},
	{"fromBinary", "(Ljdk/internal/icu/util/CodePointTrie$ValueWidth;Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Fast;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointTrie$Fast*(*)($CodePointTrie$ValueWidth*,$ByteBuffer*)>(&CodePointTrie$Fast::fromBinary))},
	{"getType", "()Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $FINAL},
	{"stringIterator", "(Ljava/lang/CharSequence;I)Ljdk/internal/icu/util/CodePointMap$StringIterator;", nullptr, $PUBLIC | $FINAL},
	{"suppGet", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CodePointTrie$Fast_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Fast", "jdk.internal.icu.util.CodePointTrie", "Fast", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.icu.util.CodePointTrie$Fast$FastStringIterator", "jdk.internal.icu.util.CodePointTrie$Fast", "FastStringIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _CodePointTrie$Fast_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.util.CodePointTrie$Fast",
	"jdk.internal.icu.util.CodePointTrie",
	nullptr,
	nullptr,
	_CodePointTrie$Fast_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Fast_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Fast($Class* clazz) {
	return $of($alloc(CodePointTrie$Fast));
}

void CodePointTrie$Fast::init$($chars* index, $CodePointTrie$Data* data, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie::init$(index, data, highStart, index3NullOffset, dataNullOffset);
}

CodePointTrie$Fast* CodePointTrie$Fast::fromBinary($CodePointTrie$ValueWidth* valueWidth, $ByteBuffer* bytes) {
	$init(CodePointTrie$Fast);
	$init($CodePointTrie$Type);
	return $cast(CodePointTrie$Fast, $CodePointTrie::fromBinary($CodePointTrie$Type::FAST, valueWidth, bytes));
}

$CodePointTrie$Type* CodePointTrie$Fast::getType() {
	$init($CodePointTrie$Type);
	return $CodePointTrie$Type::FAST;
}

int32_t CodePointTrie$Fast::cpIndex(int32_t c) {
	if (c >= 0) {
		if (c <= 0x0000FFFF) {
			return fastIndex(c);
		} else if (c <= 0x0010FFFF) {
			$init($CodePointTrie$Type);
			return smallIndex($CodePointTrie$Type::FAST, c);
		}
	}
	return this->dataLength - 1;
}

$CodePointMap$StringIterator* CodePointTrie$Fast::stringIterator($CharSequence* s, int32_t sIndex) {
	return $new($CodePointTrie$Fast$FastStringIterator, this, s, sIndex);
}

CodePointTrie$Fast::CodePointTrie$Fast() {
}

$Class* CodePointTrie$Fast::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Fast, name, initialize, &_CodePointTrie$Fast_ClassInfo_, allocate$CodePointTrie$Fast);
	return class$;
}

$Class* CodePointTrie$Fast::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk