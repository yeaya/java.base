#include <jdk/internal/icu/impl/Trie2_16.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <jdk/internal/icu/impl/Trie2$UTrie2Header.h>
#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

#undef UTRIE2_DATA_MASK
#undef UTRIE2_INDEX_1_OFFSET
#undef UTRIE2_INDEX_2_MASK
#undef UTRIE2_INDEX_SHIFT
#undef UTRIE2_LSCP_INDEX_2_OFFSET
#undef UTRIE2_OMITTED_BMP_INDEX_1_LENGTH
#undef UTRIE2_SHIFT_1
#undef UTRIE2_SHIFT_2

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $Trie2 = ::jdk::internal::icu::impl::Trie2;
using $Trie2$ValueMapper = ::jdk::internal::icu::impl::Trie2$ValueMapper;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void Trie2_16::init$() {
	$Trie2::init$();
}

Trie2_16* Trie2_16::createFromSerialized($ByteBuffer* bytes) {
	$init(Trie2_16);
	return $cast(Trie2_16, $Trie2::createFromSerialized(bytes));
}

int32_t Trie2_16::get(int32_t codePoint) {
	int32_t value = 0;
	int32_t ix = 0;
	if (codePoint >= 0) {
		if (codePoint < 0x0000d800 || (codePoint > 0x0000dbff && codePoint <= 0x0000ffff)) {
			ix = $nc(this->index)->get($sr(codePoint, $Trie2::UTRIE2_SHIFT_2));
			ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + (codePoint & $Trie2::UTRIE2_DATA_MASK);
			value = this->index->get(ix);
			return value;
		}
		if (codePoint <= 0x0000ffff) {
			ix = $nc(this->index)->get($Trie2::UTRIE2_LSCP_INDEX_2_OFFSET + ($sr(codePoint - 0x0000d800, $Trie2::UTRIE2_SHIFT_2)));
			ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + (codePoint & $Trie2::UTRIE2_DATA_MASK);
			value = this->index->get(ix);
			return value;
		}
		if (codePoint < this->highStart) {
			ix = ($Trie2::UTRIE2_INDEX_1_OFFSET - $Trie2::UTRIE2_OMITTED_BMP_INDEX_1_LENGTH) + ($sr(codePoint, $Trie2::UTRIE2_SHIFT_1));
			ix = $nc(this->index)->get(ix);
			ix += ($sr(codePoint, $Trie2::UTRIE2_SHIFT_2)) & $Trie2::UTRIE2_INDEX_2_MASK;
			ix = this->index->get(ix);
			ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + (codePoint & $Trie2::UTRIE2_DATA_MASK);
			value = this->index->get(ix);
			return value;
		}
		if (codePoint <= 0x0010ffff) {
			value = $nc(this->index)->get(this->highValueIndex);
			return value;
		}
	}
	return this->errorValue;
}

int32_t Trie2_16::getFromU16SingleLead(char16_t codeUnit) {
	int32_t value = 0;
	int32_t ix = 0;
	ix = $nc(this->index)->get($sr(codeUnit, $Trie2::UTRIE2_SHIFT_2));
	ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + (codeUnit & $Trie2::UTRIE2_DATA_MASK);
	value = this->index->get(ix);
	return value;
}

int32_t Trie2_16::getSerializedLength() {
	return 16 + ($nc(this->header)->indexLength + this->dataLength) * 2;
}

$Iterator* Trie2_16::iterator($Trie2$ValueMapper* mapper) {
	return $Trie2::iterator(mapper);
}

$Iterator* Trie2_16::iterator() {
	return $Trie2::iterator();
}

Trie2_16::Trie2_16() {
}

$Class* Trie2_16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Trie2_16, init$, void)},
		{"createFromSerialized", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/impl/Trie2_16;", nullptr, $PUBLIC | $STATIC, $staticMethod(Trie2_16, createFromSerialized, Trie2_16*, $ByteBuffer*), "java.io.IOException"},
		{"get", "(I)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Trie2_16, get, int32_t, int32_t)},
		{"getFromU16SingleLead", "(C)I", nullptr, $PUBLIC, $virtualMethod(Trie2_16, getFromU16SingleLead, int32_t, char16_t)},
		{"getSerializedLength", "()I", nullptr, $PUBLIC, $method(Trie2_16, getSerializedLength, int32_t)},
		{"iterator", "(Ljdk/internal/icu/impl/Trie2$ValueMapper;)Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Trie2_16, iterator, $Iterator*, $Trie2$ValueMapper*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Trie2_16, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.Trie2_16",
		"jdk.internal.icu.impl.Trie2",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Trie2_16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie2_16);
	});
	return class$;
}

$Class* Trie2_16::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk