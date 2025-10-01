#include <jdk/internal/icu/util/CodePointTrie$Small.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/icu/util/CodePointMap$StringIterator.h>
#include <jdk/internal/icu/util/CodePointTrie$Data.h>
#include <jdk/internal/icu/util/CodePointTrie$Small$SmallStringIterator.h>
#include <jdk/internal/icu/util/CodePointTrie$Type.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef SMALL

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CodePointMap$StringIterator = ::jdk::internal::icu::util::CodePointMap$StringIterator;
using $CodePointTrie = ::jdk::internal::icu::util::CodePointTrie;
using $CodePointTrie$Data = ::jdk::internal::icu::util::CodePointTrie$Data;
using $CodePointTrie$Small$SmallStringIterator = ::jdk::internal::icu::util::CodePointTrie$Small$SmallStringIterator;
using $CodePointTrie$Type = ::jdk::internal::icu::util::CodePointTrie$Type;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$CompoundAttribute _CodePointTrie$Small_MethodAnnotations_cpIndex1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _CodePointTrie$Small_MethodInfo_[] = {
	{"<init>", "([CLjdk/internal/icu/util/CodePointTrie$Data;III)V", nullptr, $PRIVATE, $method(static_cast<void(CodePointTrie$Small::*)($chars*,$CodePointTrie$Data*,int32_t,int32_t,int32_t)>(&CodePointTrie$Small::init$))},
	{"cpIndex", "(I)I", nullptr, $PROTECTED | $FINAL | $DEPRECATED, nullptr, nullptr, nullptr, _CodePointTrie$Small_MethodAnnotations_cpIndex1},
	{"fromBinary", "(Ljdk/internal/icu/util/CodePointTrie$ValueWidth;Ljava/nio/ByteBuffer;)Ljdk/internal/icu/util/CodePointTrie$Small;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CodePointTrie$Small*(*)($CodePointTrie$ValueWidth*,$ByteBuffer*)>(&CodePointTrie$Small::fromBinary))},
	{"getType", "()Ljdk/internal/icu/util/CodePointTrie$Type;", nullptr, $PUBLIC | $FINAL},
	{"stringIterator", "(Ljava/lang/CharSequence;I)Ljdk/internal/icu/util/CodePointMap$StringIterator;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _CodePointTrie$Small_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointTrie$Small", "jdk.internal.icu.util.CodePointTrie", "Small", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.icu.util.CodePointTrie$Small$SmallStringIterator", "jdk.internal.icu.util.CodePointTrie$Small", "SmallStringIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _CodePointTrie$Small_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.util.CodePointTrie$Small",
	"jdk.internal.icu.util.CodePointTrie",
	nullptr,
	nullptr,
	_CodePointTrie$Small_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointTrie$Small_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointTrie"
};

$Object* allocate$CodePointTrie$Small($Class* clazz) {
	return $of($alloc(CodePointTrie$Small));
}

void CodePointTrie$Small::init$($chars* index, $CodePointTrie$Data* data, int32_t highStart, int32_t index3NullOffset, int32_t dataNullOffset) {
	$CodePointTrie::init$(index, data, highStart, index3NullOffset, dataNullOffset);
}

CodePointTrie$Small* CodePointTrie$Small::fromBinary($CodePointTrie$ValueWidth* valueWidth, $ByteBuffer* bytes) {
	$init(CodePointTrie$Small);
	$init($CodePointTrie$Type);
	return $cast(CodePointTrie$Small, $CodePointTrie::fromBinary($CodePointTrie$Type::SMALL, valueWidth, bytes));
}

$CodePointTrie$Type* CodePointTrie$Small::getType() {
	$init($CodePointTrie$Type);
	return $CodePointTrie$Type::SMALL;
}

int32_t CodePointTrie$Small::cpIndex(int32_t c) {
	if (c >= 0) {
		if (c <= 4095) {
			return fastIndex(c);
		} else if (c <= 0x0010FFFF) {
			$init($CodePointTrie$Type);
			return smallIndex($CodePointTrie$Type::SMALL, c);
		}
	}
	return this->dataLength - 1;
}

$CodePointMap$StringIterator* CodePointTrie$Small::stringIterator($CharSequence* s, int32_t sIndex) {
	return $new($CodePointTrie$Small$SmallStringIterator, this, s, sIndex);
}

CodePointTrie$Small::CodePointTrie$Small() {
}

$Class* CodePointTrie$Small::load$($String* name, bool initialize) {
	$loadClass(CodePointTrie$Small, name, initialize, &_CodePointTrie$Small_ClassInfo_, allocate$CodePointTrie$Small);
	return class$;
}

$Class* CodePointTrie$Small::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk