#include <java/util/zip/CRC32C.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/lang/ref/Reference.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/nio/ch/DirectBuffer.h>
#include <jcpp.h>

#undef ADDRESS_SIZE
#undef ARRAY_BYTE_BASE_OFFSET
#undef ARRAY_BYTE_INDEX_SCALE
#undef BIG_ENDIAN
#undef BYTES
#undef CRC32C
#undef CRC32C_POLY
#undef LITTLE_ENDIAN
#undef REVERSED_CRC32C_POLY
#undef SIZE
#undef UNSAFE

using $intArray2 = $Array<int32_t, 2>;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Reference = ::java::lang::ref::Reference;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $DirectBuffer = ::sun::nio::ch::DirectBuffer;

namespace java {
	namespace util {
		namespace zip {

bool CRC32C::$assertionsDisabled = false;
int32_t CRC32C::REVERSED_CRC32C_POLY = 0;
$Unsafe* CRC32C::UNSAFE = nullptr;
$ints* CRC32C::byteTable = nullptr;
$intArray2* CRC32C::byteTables = nullptr;
$ints* CRC32C::byteTable0 = nullptr;
$ints* CRC32C::byteTable1 = nullptr;
$ints* CRC32C::byteTable2 = nullptr;
$ints* CRC32C::byteTable3 = nullptr;
$ints* CRC32C::byteTable4 = nullptr;
$ints* CRC32C::byteTable5 = nullptr;
$ints* CRC32C::byteTable6 = nullptr;
$ints* CRC32C::byteTable7 = nullptr;

void CRC32C::init$() {
	this->crc = -1;
}

void CRC32C::update(int32_t b) {
	this->crc = ((int32_t)((uint32_t)this->crc >> 8)) ^ $nc(CRC32C::byteTable)->get((this->crc ^ (b & 0xff)) & 0xff);
}

void CRC32C::update($bytes* b, int32_t off, int32_t len) {
	if (b == nullptr) {
		$throwNew($NullPointerException);
	}
	if (off < 0 || len < 0 || off > $nc(b)->length - len) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	this->crc = updateBytes(this->crc, b, off, (off + len));
}

void CRC32C::update($ByteBuffer* buffer) {
	$useLocalObjectStack();
	int32_t pos = $nc(buffer)->position();
	int32_t limit = buffer->limit();
	if (!CRC32C::$assertionsDisabled && !(pos <= limit)) {
		$throwNew($AssertionError);
	}
	int32_t rem = limit - pos;
	if (rem <= 0) {
		return;
	}
	if (buffer->isDirect()) {
		$var($Throwable, var$0, nullptr);
		try {
			this->crc = updateDirectByteBuffer(this->crc, $cast($DirectBuffer, buffer)->address(), pos, limit);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$Reference::reachabilityFence(buffer);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	} else if (buffer->hasArray()) {
		int32_t var$2 = this->crc;
		$var($bytes, var$3, $cast($bytes, buffer->array()));
		int32_t var$4 = pos + buffer->arrayOffset();
		this->crc = updateBytes(var$2, var$3, var$4, limit + buffer->arrayOffset());
	} else {
		$var($bytes, b, $new($bytes, $Math::min(buffer->remaining(), 4096)));
		while (buffer->hasRemaining()) {
			int32_t length = $Math::min(buffer->remaining(), b->length);
			buffer->get(b, 0, length);
			update(b, 0, length);
		}
	}
	buffer->position(limit);
}

void CRC32C::reset() {
	this->crc = -1;
}

int64_t CRC32C::getValue() {
	return (~this->crc) & (int64_t)0xffffffff;
}

int32_t CRC32C::updateBytes(int32_t crc, $bytes* b, int32_t off, int32_t end) {
	$init(CRC32C);
	$init($Unsafe);
	if (end - off >= 8 && $Unsafe::ARRAY_BYTE_INDEX_SCALE == 1) {
		int32_t alignLength = (8 - (($Unsafe::ARRAY_BYTE_BASE_OFFSET + off) & 7)) & 7;
		for (int32_t alignEnd = off + alignLength; off < alignEnd; ++off) {
			crc = ((int32_t)((uint32_t)crc >> 8)) ^ $nc(CRC32C::byteTable)->get((crc ^ $nc(b)->get(off)) & 0xff);
		}
		$init($ByteOrder);
		if ($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) {
			crc = $Integer::reverseBytes(crc);
		}
		for (; off < (end - $Long::BYTES); off += $Long::BYTES) {
			int32_t firstHalf = 0;
			int32_t secondHalf = 0;
			if ($Unsafe::ADDRESS_SIZE == 4) {
				firstHalf = $nc(CRC32C::UNSAFE)->getInt(b, (int64_t)$Unsafe::ARRAY_BYTE_BASE_OFFSET + off);
				secondHalf = CRC32C::UNSAFE->getInt(b, (int64_t)$Unsafe::ARRAY_BYTE_BASE_OFFSET + off + $Integer::BYTES);
			} else {
				int64_t value = $nc(CRC32C::UNSAFE)->getLong(b, (int64_t)$Unsafe::ARRAY_BYTE_BASE_OFFSET + off);
				if ($ByteOrder::nativeOrder() == $ByteOrder::LITTLE_ENDIAN) {
					firstHalf = (int32_t)value;
					secondHalf = (int32_t)((int64_t)((uint64_t)value >> 32));
				} else {
					firstHalf = (int32_t)((int64_t)((uint64_t)value >> 32));
					secondHalf = (int32_t)value;
				}
			}
			crc ^= firstHalf;
			if ($ByteOrder::nativeOrder() == $ByteOrder::LITTLE_ENDIAN) {
				crc = (((((($nc(CRC32C::byteTable7)->get(crc & 0xff) ^ $nc(CRC32C::byteTable6)->get(((int32_t)((uint32_t)crc >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable5)->get(((int32_t)((uint32_t)crc >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable4)->get((int32_t)((uint32_t)crc >> 24))) ^ $nc(CRC32C::byteTable3)->get(secondHalf & 0xff)) ^ $nc(CRC32C::byteTable2)->get(((int32_t)((uint32_t)secondHalf >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable1)->get(((int32_t)((uint32_t)secondHalf >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable0)->get((int32_t)((uint32_t)secondHalf >> 24));
			} else {
				crc = (((((($nc(CRC32C::byteTable0)->get(secondHalf & 0xff) ^ $nc(CRC32C::byteTable1)->get(((int32_t)((uint32_t)secondHalf >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable2)->get(((int32_t)((uint32_t)secondHalf >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable3)->get((int32_t)((uint32_t)secondHalf >> 24))) ^ $nc(CRC32C::byteTable4)->get(crc & 0xff)) ^ $nc(CRC32C::byteTable5)->get(((int32_t)((uint32_t)crc >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable6)->get(((int32_t)((uint32_t)crc >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable7)->get((int32_t)((uint32_t)crc >> 24));
			}
		}
		if ($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) {
			crc = $Integer::reverseBytes(crc);
		}
	}
	for (; off < end; ++off) {
		crc = ((int32_t)((uint32_t)crc >> 8)) ^ $nc(CRC32C::byteTable)->get((crc ^ $nc(b)->get(off)) & 0xff);
	}
	return crc;
}

int32_t CRC32C::updateDirectByteBuffer(int32_t crc, int64_t address, int32_t off, int32_t end) {
	$init(CRC32C);
	if (end - off >= 8) {
		int32_t alignLength = (8 - (int32_t)((address + off) & 7)) & 7;
		for (int32_t alignEnd = off + alignLength; off < alignEnd; ++off) {
			crc = ((int32_t)((uint32_t)crc >> 8)) ^ $nc(CRC32C::byteTable)->get((crc ^ $nc(CRC32C::UNSAFE)->getByte(address + off)) & 0xff);
		}
		$init($ByteOrder);
		if ($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) {
			crc = $Integer::reverseBytes(crc);
		}
		for (; off <= (end - $Long::BYTES); off += $Long::BYTES) {
			int32_t firstHalf = $nc(CRC32C::UNSAFE)->getInt(address + off);
			int32_t secondHalf = CRC32C::UNSAFE->getInt(address + off + $Integer::BYTES);
			crc ^= firstHalf;
			if ($ByteOrder::nativeOrder() == $ByteOrder::LITTLE_ENDIAN) {
				crc = (((((($nc(CRC32C::byteTable7)->get(crc & 0xff) ^ $nc(CRC32C::byteTable6)->get(((int32_t)((uint32_t)crc >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable5)->get(((int32_t)((uint32_t)crc >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable4)->get((int32_t)((uint32_t)crc >> 24))) ^ $nc(CRC32C::byteTable3)->get(secondHalf & 0xff)) ^ $nc(CRC32C::byteTable2)->get(((int32_t)((uint32_t)secondHalf >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable1)->get(((int32_t)((uint32_t)secondHalf >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable0)->get((int32_t)((uint32_t)secondHalf >> 24));
			} else {
				crc = (((((($nc(CRC32C::byteTable0)->get(secondHalf & 0xff) ^ $nc(CRC32C::byteTable1)->get(((int32_t)((uint32_t)secondHalf >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable2)->get(((int32_t)((uint32_t)secondHalf >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable3)->get((int32_t)((uint32_t)secondHalf >> 24))) ^ $nc(CRC32C::byteTable4)->get(crc & 0xff)) ^ $nc(CRC32C::byteTable5)->get(((int32_t)((uint32_t)crc >> 8)) & 0xff)) ^ $nc(CRC32C::byteTable6)->get(((int32_t)((uint32_t)crc >> 16)) & 0xff)) ^ $nc(CRC32C::byteTable7)->get((int32_t)((uint32_t)crc >> 24));
			}
		}
		if ($ByteOrder::nativeOrder() == $ByteOrder::BIG_ENDIAN) {
			crc = $Integer::reverseBytes(crc);
		}
	}
	for (; off < end; ++off) {
		crc = ((int32_t)((uint32_t)crc >> 8)) ^ $nc(CRC32C::byteTable)->get((crc ^ $nc(CRC32C::UNSAFE)->getByte(address + off)) & 0xff);
	}
	return crc;
}

void CRC32C::clinit$($Class* clazz) {
	$useLocalObjectStack();
	CRC32C::$assertionsDisabled = !CRC32C::class$->desiredAssertionStatus();
	CRC32C::REVERSED_CRC32C_POLY = $Integer::reverse(CRC32C::CRC32C_POLY);
	$assignStatic(CRC32C::UNSAFE, $Unsafe::getUnsafe());
	$assignStatic(CRC32C::byteTables, $new($intArray2, 8, 256));
	$assignStatic(CRC32C::byteTable0, CRC32C::byteTables->get(0));
	$assignStatic(CRC32C::byteTable1, CRC32C::byteTables->get(1));
	$assignStatic(CRC32C::byteTable2, CRC32C::byteTables->get(2));
	$assignStatic(CRC32C::byteTable3, CRC32C::byteTables->get(3));
	$assignStatic(CRC32C::byteTable4, CRC32C::byteTables->get(4));
	$assignStatic(CRC32C::byteTable5, CRC32C::byteTables->get(5));
	$assignStatic(CRC32C::byteTable6, CRC32C::byteTables->get(6));
	$assignStatic(CRC32C::byteTable7, CRC32C::byteTables->get(7));
	{
		for (int32_t index = 0; index < $nc(CRC32C::byteTables->get(0))->length; ++index) {
			int32_t r = index;
			for (int32_t i = 0; i < $Byte::SIZE; ++i) {
				if ((r & 1) != 0) {
					r = ((int32_t)((uint32_t)r >> 1)) ^ CRC32C::REVERSED_CRC32C_POLY;
				} else {
					$usrAssign(r, 1);
				}
			}
			$nc(CRC32C::byteTables->get(0))->set(index, r);
		}
		for (int32_t index = 0; index < $nc(CRC32C::byteTables->get(0))->length; ++index) {
			int32_t r = $nc(CRC32C::byteTables->get(0))->get(index);
			for (int32_t k = 1; k < CRC32C::byteTables->length; ++k) {
				r = $nc(CRC32C::byteTables->get(0))->get(r & 0xff) ^ ((int32_t)((uint32_t)r >> 8));
				$nc(CRC32C::byteTables->get(k))->set(index, r);
			}
		}
		$init($ByteOrder);
		if ($ByteOrder::nativeOrder() == $ByteOrder::LITTLE_ENDIAN) {
			$assignStatic(CRC32C::byteTable, CRC32C::byteTables->get(0));
		} else {
			$assignStatic(CRC32C::byteTable, $new($ints, $nc(CRC32C::byteTable0)->length));
			$System::arraycopy(CRC32C::byteTable0, 0, CRC32C::byteTable, 0, CRC32C::byteTable0->length);
			{
				$var($intArray2, arr$, CRC32C::byteTables);
				for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
					$var($ints, table, arr$->get(i$));
					for (int32_t index = 0; index < $nc(table)->length; ++index) {
						table->set(index, $Integer::reverseBytes(table->get(index)));
					}
				}
			}
		}
	}
}

CRC32C::CRC32C() {
}

$Class* CRC32C::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CRC32C, $assertionsDisabled)},
		{"CRC32C_POLY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CRC32C, CRC32C_POLY)},
		{"REVERSED_CRC32C_POLY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, REVERSED_CRC32C_POLY)},
		{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, UNSAFE)},
		{"byteTable", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable)},
		{"byteTables", "[[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTables)},
		{"byteTable0", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable0)},
		{"byteTable1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable1)},
		{"byteTable2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable2)},
		{"byteTable3", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable3)},
		{"byteTable4", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable4)},
		{"byteTable5", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable5)},
		{"byteTable6", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable6)},
		{"byteTable7", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRC32C, byteTable7)},
		{"crc", "I", nullptr, $PRIVATE, $field(CRC32C, crc)},
		{}
	};
	$CompoundAttribute updateBytesmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute updateDirectByteBuffermethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CRC32C, init$, void)},
		{"getValue", "()J", nullptr, $PUBLIC, $virtualMethod(CRC32C, getValue, int64_t)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(CRC32C, reset, void)},
		{"update", "(I)V", nullptr, $PUBLIC, $virtualMethod(CRC32C, update, void, int32_t)},
		{"update", "([BII)V", nullptr, $PUBLIC, $virtualMethod(CRC32C, update, void, $bytes*, int32_t, int32_t)},
		{"update", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(CRC32C, update, void, $ByteBuffer*)},
		{"updateBytes", "(I[BII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(CRC32C, updateBytes, int32_t, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, updateBytesmethodAnnotations$$},
		{"updateDirectByteBuffer", "(IJII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(CRC32C, updateDirectByteBuffer, int32_t, int32_t, int64_t, int32_t, int32_t), nullptr, nullptr, updateDirectByteBuffermethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.zip.CRC32C",
		"java.lang.Object",
		"java.util.zip.Checksum",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CRC32C, name, initialize, &classInfo$$, CRC32C::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CRC32C);
	});
	return class$;
}

$Class* CRC32C::class$ = nullptr;

		} // zip
	} // util
} // java