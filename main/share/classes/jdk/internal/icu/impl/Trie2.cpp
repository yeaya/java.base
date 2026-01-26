#include <jdk/internal/icu/impl/Trie2.h>

#include <java/lang/Math.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Iterator.h>
#include <jdk/internal/icu/impl/Trie2$1.h>
#include <jdk/internal/icu/impl/Trie2$Trie2Iterator.h>
#include <jdk/internal/icu/impl/Trie2$UTrie2Header.h>
#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>
#include <jdk/internal/icu/impl/Trie2_16.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN
#undef UTRIE2_BAD_UTF8_DATA_OFFSET
#undef UTRIE2_DATA_BLOCK_LENGTH
#undef UTRIE2_DATA_GRANULARITY
#undef UTRIE2_DATA_MASK
#undef UTRIE2_INDEX_1_OFFSET
#undef UTRIE2_INDEX_2_BLOCK_LENGTH
#undef UTRIE2_INDEX_2_BMP_LENGTH
#undef UTRIE2_INDEX_2_MASK
#undef UTRIE2_INDEX_SHIFT
#undef UTRIE2_LSCP_INDEX_2_LENGTH
#undef UTRIE2_LSCP_INDEX_2_OFFSET
#undef UTRIE2_OMITTED_BMP_INDEX_1_LENGTH
#undef UTRIE2_OPTIONS_VALUE_BITS_MASK
#undef UTRIE2_SHIFT_1
#undef UTRIE2_SHIFT_1_2
#undef UTRIE2_SHIFT_2

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Iterator = ::java::util::Iterator;
using $Trie2$1 = ::jdk::internal::icu::impl::Trie2$1;
using $Trie2$Trie2Iterator = ::jdk::internal::icu::impl::Trie2$Trie2Iterator;
using $Trie2$UTrie2Header = ::jdk::internal::icu::impl::Trie2$UTrie2Header;
using $Trie2$ValueMapper = ::jdk::internal::icu::impl::Trie2$ValueMapper;
using $Trie2_16 = ::jdk::internal::icu::impl::Trie2_16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Trie2_FieldInfo_[] = {
	{"defaultValueMapper", "Ljdk/internal/icu/impl/Trie2$ValueMapper;", nullptr, $PRIVATE | $STATIC, $staticField(Trie2, defaultValueMapper)},
	{"header", "Ljdk/internal/icu/impl/Trie2$UTrie2Header;", nullptr, 0, $field(Trie2, header)},
	{"index", "[C", nullptr, 0, $field(Trie2, index)},
	{"data16", "I", nullptr, 0, $field(Trie2, data16)},
	{"data32", "[I", nullptr, 0, $field(Trie2, data32)},
	{"indexLength", "I", nullptr, 0, $field(Trie2, indexLength)},
	{"dataLength", "I", nullptr, 0, $field(Trie2, dataLength)},
	{"index2NullOffset", "I", nullptr, 0, $field(Trie2, index2NullOffset)},
	{"initialValue", "I", nullptr, 0, $field(Trie2, initialValue)},
	{"errorValue", "I", nullptr, 0, $field(Trie2, errorValue)},
	{"highStart", "I", nullptr, 0, $field(Trie2, highStart)},
	{"highValueIndex", "I", nullptr, 0, $field(Trie2, highValueIndex)},
	{"dataNullOffset", "I", nullptr, 0, $field(Trie2, dataNullOffset)},
	{"UTRIE2_OPTIONS_VALUE_BITS_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_OPTIONS_VALUE_BITS_MASK)},
	{"UTRIE2_SHIFT_1", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_SHIFT_1)},
	{"UTRIE2_SHIFT_2", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_SHIFT_2)},
	{"UTRIE2_SHIFT_1_2", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_SHIFT_1_2)},
	{"UTRIE2_OMITTED_BMP_INDEX_1_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_OMITTED_BMP_INDEX_1_LENGTH)},
	{"UTRIE2_INDEX_2_BLOCK_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_INDEX_2_BLOCK_LENGTH)},
	{"UTRIE2_INDEX_2_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_INDEX_2_MASK)},
	{"UTRIE2_DATA_BLOCK_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_DATA_BLOCK_LENGTH)},
	{"UTRIE2_DATA_MASK", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_DATA_MASK)},
	{"UTRIE2_INDEX_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_INDEX_SHIFT)},
	{"UTRIE2_DATA_GRANULARITY", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_DATA_GRANULARITY)},
	{"UTRIE2_LSCP_INDEX_2_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_LSCP_INDEX_2_OFFSET)},
	{"UTRIE2_LSCP_INDEX_2_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_LSCP_INDEX_2_LENGTH)},
	{"UTRIE2_INDEX_2_BMP_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_INDEX_2_BMP_LENGTH)},
	{"UTRIE2_UTF8_2B_INDEX_2_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_UTF8_2B_INDEX_2_OFFSET)},
	{"UTRIE2_UTF8_2B_INDEX_2_LENGTH", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_UTF8_2B_INDEX_2_LENGTH)},
	{"UTRIE2_INDEX_1_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_INDEX_1_OFFSET)},
	{"UTRIE2_BAD_UTF8_DATA_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(Trie2, UTRIE2_BAD_UTF8_DATA_OFFSET)},
	{}
};

$MethodInfo _Trie2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Trie2, init$, void)},
	{"createFromSerialized", "(Ljava/nio/ByteBuffer;)Ljdk/internal/icu/impl/Trie2;", nullptr, $PUBLIC | $STATIC, $staticMethod(Trie2, createFromSerialized, Trie2*, $ByteBuffer*), "java.io.IOException"},
	{"get", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trie2, get, int32_t, int32_t)},
	{"getFromU16SingleLead", "(C)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trie2, getFromU16SingleLead, int32_t, char16_t)},
	{"hashByte", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Trie2, hashByte, int32_t, int32_t, int32_t)},
	{"hashInt", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Trie2, hashInt, int32_t, int32_t, int32_t)},
	{"hashUChar32", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Trie2, hashUChar32, int32_t, int32_t, int32_t)},
	{"initHash", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(Trie2, initHash, int32_t)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljdk/internal/icu/impl/Trie2$Range;>;", $PUBLIC, $virtualMethod(Trie2, iterator, $Iterator*)},
	{"iterator", "(Ljdk/internal/icu/impl/Trie2$ValueMapper;)Ljava/util/Iterator;", "(Ljdk/internal/icu/impl/Trie2$ValueMapper;)Ljava/util/Iterator<Ljdk/internal/icu/impl/Trie2$Range;>;", $PUBLIC, $virtualMethod(Trie2, iterator, $Iterator*, $Trie2$ValueMapper*)},
	{"rangeEnd", "(III)I", nullptr, 0, $virtualMethod(Trie2, rangeEnd, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _Trie2_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie2$Trie2Iterator", "jdk.internal.icu.impl.Trie2", "Trie2Iterator", 0},
	{"jdk.internal.icu.impl.Trie2$UTrie2Header", "jdk.internal.icu.impl.Trie2", "UTrie2Header", $STATIC},
	{"jdk.internal.icu.impl.Trie2$ValueMapper", "jdk.internal.icu.impl.Trie2", "ValueMapper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.icu.impl.Trie2$Range", "jdk.internal.icu.impl.Trie2", "Range", $PUBLIC | $STATIC},
	{"jdk.internal.icu.impl.Trie2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Trie2_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.impl.Trie2",
	"java.lang.Object",
	"java.lang.Iterable",
	_Trie2_FieldInfo_,
	_Trie2_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Ljdk/internal/icu/impl/Trie2$Range;>;",
	nullptr,
	_Trie2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie2$Trie2Iterator,jdk.internal.icu.impl.Trie2$UTrie2Header,jdk.internal.icu.impl.Trie2$ValueMapper,jdk.internal.icu.impl.Trie2$Range,jdk.internal.icu.impl.Trie2$1"
};

$Object* allocate$Trie2($Class* clazz) {
	return $of($alloc(Trie2));
}

$Trie2$ValueMapper* Trie2::defaultValueMapper = nullptr;

void Trie2::init$() {
}

Trie2* Trie2::createFromSerialized($ByteBuffer* bytes) {
	$init(Trie2);
	$useLocalCurrentObjectStackCache();
	$var($ByteOrder, outerByteOrder, $nc(bytes)->order());
	{
		$var($Throwable, var$0, nullptr);
		$var(Trie2, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Trie2$UTrie2Header, header, $new($Trie2$UTrie2Header));
			header->signature = bytes->getInt();
			{
				bool isBigEndian = false;
				switch (header->signature) {
				case 0x54726932:
					{
						break;
					}
				case 0x32697254:
					{
						$init($ByteOrder);
						isBigEndian = outerByteOrder == $ByteOrder::BIG_ENDIAN;
						bytes->order(isBigEndian ? $ByteOrder::LITTLE_ENDIAN : $ByteOrder::BIG_ENDIAN);
						header->signature = 0x54726932;
						break;
					}
				default:
					{
						$throwNew($IllegalArgumentException, "Buffer does not contain a serialized UTrie2"_s);
					}
				}
			}
			header->options = bytes->getChar();
			header->indexLength = bytes->getChar();
			header->shiftedDataLength = bytes->getChar();
			header->index2NullOffset = bytes->getChar();
			header->dataNullOffset = bytes->getChar();
			header->shiftedHighStart = bytes->getChar();
			if (((int32_t)(header->options & (uint32_t)Trie2::UTRIE2_OPTIONS_VALUE_BITS_MASK)) != 0) {
				$throwNew($IllegalArgumentException, "UTrie2 serialized format error."_s);
			}
			$var(Trie2, This, nullptr);
			$assign(This, $new($Trie2_16));
			$set(This, header, header);
			This->indexLength = header->indexLength;
			This->dataLength = $sl(header->shiftedDataLength, Trie2::UTRIE2_INDEX_SHIFT);
			This->index2NullOffset = header->index2NullOffset;
			This->dataNullOffset = header->dataNullOffset;
			This->highStart = $sl(header->shiftedHighStart, Trie2::UTRIE2_SHIFT_1);
			This->highValueIndex = This->dataLength - Trie2::UTRIE2_DATA_GRANULARITY;
			This->highValueIndex += This->indexLength;
			int32_t indexArraySize = This->indexLength;
			indexArraySize += This->dataLength;
			$set(This, index, $new($chars, indexArraySize));
			int32_t i = 0;
			for (i = 0; i < This->indexLength; ++i) {
				$nc(This->index)->set(i, bytes->getChar());
			}
			This->data16 = This->indexLength;
			for (i = 0; i < This->dataLength; ++i) {
				$nc(This->index)->set(This->data16 + i, bytes->getChar());
			}
			$set(This, data32, nullptr);
			This->initialValue = $nc(This->index)->get(This->dataNullOffset);
			This->errorValue = $nc(This->index)->get(This->data16 + Trie2::UTRIE2_BAD_UTF8_DATA_OFFSET);
			$assign(var$2, This);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			bytes->order(outerByteOrder);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Iterator* Trie2::iterator() {
	return iterator(Trie2::defaultValueMapper);
}

$Iterator* Trie2::iterator($Trie2$ValueMapper* mapper) {
	return $new($Trie2$Trie2Iterator, this, mapper);
}

int32_t Trie2::rangeEnd(int32_t start, int32_t limitp, int32_t val) {
	int32_t c = 0;
	int32_t limit = $Math::min(this->highStart, limitp);
	for (c = start + 1; c < limit; ++c) {
		if (get(c) != val) {
			break;
		}
	}
	if (c >= this->highStart) {
		c = limitp;
	}
	return c - 1;
}

int32_t Trie2::initHash() {
	$init(Trie2);
	return (int32_t)0x811C9DC5;
}

int32_t Trie2::hashByte(int32_t h, int32_t b) {
	$init(Trie2);
	h = h * 0x01000193;
	h = h ^ b;
	return h;
}

int32_t Trie2::hashUChar32(int32_t h, int32_t c) {
	$init(Trie2);
	h = Trie2::hashByte(h, (int32_t)(c & (uint32_t)255));
	h = Trie2::hashByte(h, (int32_t)((c >> 8) & (uint32_t)255));
	h = Trie2::hashByte(h, c >> 16);
	return h;
}

int32_t Trie2::hashInt(int32_t h, int32_t i) {
	$init(Trie2);
	h = Trie2::hashByte(h, (int32_t)(i & (uint32_t)255));
	h = Trie2::hashByte(h, (int32_t)((i >> 8) & (uint32_t)255));
	h = Trie2::hashByte(h, (int32_t)((i >> 16) & (uint32_t)255));
	h = Trie2::hashByte(h, (int32_t)((i >> 24) & (uint32_t)255));
	return h;
}

void clinit$Trie2($Class* class$) {
	$assignStatic(Trie2::defaultValueMapper, $new($Trie2$1));
}

Trie2::Trie2() {
}

$Class* Trie2::load$($String* name, bool initialize) {
	$loadClass(Trie2, name, initialize, &_Trie2_ClassInfo_, clinit$Trie2, allocate$Trie2);
	return class$;
}

$Class* Trie2::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk