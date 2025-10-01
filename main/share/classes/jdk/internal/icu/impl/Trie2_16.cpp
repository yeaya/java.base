#include <jdk/internal/icu/impl/Trie2_16.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/Iterator.h>
#include <jdk/internal/icu/impl/Trie2$UTrie2Header.h>
#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

#undef UTRIE2_INDEX_1_OFFSET
#undef UTRIE2_DATA_MASK
#undef UTRIE2_INDEX_SHIFT
#undef UTRIE2_OMITTED_BMP_INDEX_1_LENGTH
#undef UTRIE2_SHIFT_1
#undef UTRIE2_SHIFT_2
#undef UTRIE2_INDEX_2_MASK
#undef UTRIE2_LSCP_INDEX_2_OFFSET

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Iterator = ::java::util::Iterator;
using $Trie2 = ::jdk::internal::icu::impl::Trie2;
using $Trie2$UTrie2Header = ::jdk::internal::icu::impl::Trie2$UTrie2Header;
using $Trie2$ValueMapper = ::jdk::internal::icu::impl::Trie2$ValueMapper;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _Trie2_16_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Trie2_16::*)()>(&Trie2_16::init$))},
	{"createFromSerialized", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/impl/Trie2_16;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Trie2_16*(*)($ByteBuffer*)>(&Trie2_16::createFromSerialized)), "java.io.IOException"},
	{"get", "(I)I", nullptr, $PUBLIC | $FINAL},
	{"getFromU16SingleLead", "(C)I", nullptr, $PUBLIC},
	{"getSerializedLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Trie2_16::*)()>(&Trie2_16::getSerializedLength))},
	{"iterator", "(Ljdk/internal/icu/impl/Trie2$ValueMapper;)Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _Trie2_16_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Trie2_16",
	"jdk.internal.icu.impl.Trie2",
	nullptr,
	nullptr,
	_Trie2_16_MethodInfo_
};

$Object* allocate$Trie2_16($Class* clazz) {
	return $of($alloc(Trie2_16));
}

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
		if (codePoint < 0x0000D800 || (codePoint > 0x0000DBFF && codePoint <= 0x0000FFFF)) {
			ix = $nc(this->index)->get($sr(codePoint, $Trie2::UTRIE2_SHIFT_2));
			ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + ((int32_t)(codePoint & (uint32_t)$Trie2::UTRIE2_DATA_MASK));
			value = $nc(this->index)->get(ix);
			return value;
		}
		if (codePoint <= 0x0000FFFF) {
			ix = $nc(this->index)->get($Trie2::UTRIE2_LSCP_INDEX_2_OFFSET + ($sr(codePoint - 0x0000D800, $Trie2::UTRIE2_SHIFT_2)));
			ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + ((int32_t)(codePoint & (uint32_t)$Trie2::UTRIE2_DATA_MASK));
			value = $nc(this->index)->get(ix);
			return value;
		}
		if (codePoint < this->highStart) {
			ix = ($Trie2::UTRIE2_INDEX_1_OFFSET - $Trie2::UTRIE2_OMITTED_BMP_INDEX_1_LENGTH) + ($sr(codePoint, $Trie2::UTRIE2_SHIFT_1));
			ix = $nc(this->index)->get(ix);
			ix += (int32_t)(($sr(codePoint, $Trie2::UTRIE2_SHIFT_2)) & (uint32_t)$Trie2::UTRIE2_INDEX_2_MASK);
			ix = $nc(this->index)->get(ix);
			ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + ((int32_t)(codePoint & (uint32_t)$Trie2::UTRIE2_DATA_MASK));
			value = $nc(this->index)->get(ix);
			return value;
		}
		if (codePoint <= 0x0010FFFF) {
			value = $nc(this->index)->get(this->highValueIndex);
			return value;
		}
	}
	return this->errorValue;
}

int32_t Trie2_16::getFromU16SingleLead(char16_t codeUnit) {
	int32_t value = 0;
	int32_t ix = 0;
	ix = $nc(this->index)->get($sr((int32_t)codeUnit, $Trie2::UTRIE2_SHIFT_2));
	ix = ($sl(ix, $Trie2::UTRIE2_INDEX_SHIFT)) + ((int32_t)(codeUnit & (uint32_t)$Trie2::UTRIE2_DATA_MASK));
	value = $nc(this->index)->get(ix);
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
	$loadClass(Trie2_16, name, initialize, &_Trie2_16_ClassInfo_, allocate$Trie2_16);
	return class$;
}

$Class* Trie2_16::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk