#include <sun/security/util/BitArray.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef BITS_PER_UNIT
#undef BYTES_PER_LINE
#undef NYBBLE

using $byteArray2 = $Array<int8_t, 2>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _BitArray_FieldInfo_[] = {
	{"repn", "[B", nullptr, $PRIVATE, $field(BitArray, repn)},
	{"length", "I", nullptr, $PRIVATE, $field(BitArray, length$)},
	{"BITS_PER_UNIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BitArray, BITS_PER_UNIT)},
	{"NYBBLE", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BitArray, NYBBLE)},
	{"BYTES_PER_LINE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BitArray, BYTES_PER_LINE)},
	{}
};

$MethodInfo _BitArray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BitArray::*)(int32_t)>(&BitArray::init$)), "java.lang.IllegalArgumentException"},
	{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(static_cast<void(BitArray::*)(int32_t,$bytes*)>(&BitArray::init$)), "java.lang.IllegalArgumentException"},
	{"<init>", "([Z)V", nullptr, $PUBLIC, $method(static_cast<void(BitArray::*)($booleans*)>(&BitArray::init$))},
	{"<init>", "(Lsun/security/util/BitArray;)V", nullptr, $PRIVATE, $method(static_cast<void(BitArray::*)(BitArray*)>(&BitArray::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)Z", nullptr, $PUBLIC, nullptr, "java.lang.ArrayIndexOutOfBoundsException"},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"position", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BitArray::position))},
	{"set", "(IZ)V", nullptr, $PUBLIC, nullptr, "java.lang.ArrayIndexOutOfBoundsException"},
	{"subscript", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BitArray::subscript))},
	{"toBooleanArray", "()[Z", nullptr, $PUBLIC},
	{"toByteArray", "()[B", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"truncate", "()Lsun/security/util/BitArray;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BitArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.BitArray",
	"java.lang.Object",
	nullptr,
	_BitArray_FieldInfo_,
	_BitArray_MethodInfo_
};

$Object* allocate$BitArray($Class* clazz) {
	return $of($alloc(BitArray));
}

$byteArray2* BitArray::NYBBLE = nullptr;

int32_t BitArray::subscript(int32_t idx) {
	$init(BitArray);
	return $div(idx, BitArray::BITS_PER_UNIT);
}

int32_t BitArray::position(int32_t idx) {
	$init(BitArray);
	return $sl(1, BitArray::BITS_PER_UNIT - 1 - ($mod(idx, BitArray::BITS_PER_UNIT)));
}

void BitArray::init$(int32_t length) {
	if (length < 0) {
		$throwNew($IllegalArgumentException, "Negative length for BitArray"_s);
	}
	this->length$ = length;
	$set(this, repn, $new($bytes, $div((length + BitArray::BITS_PER_UNIT - 1), BitArray::BITS_PER_UNIT)));
}

void BitArray::init$(int32_t length, $bytes* a) {
	if (length < 0) {
		$throwNew($IllegalArgumentException, "Negative length for BitArray"_s);
	}
	if ($nc(a)->length * BitArray::BITS_PER_UNIT < length) {
		$throwNew($IllegalArgumentException, "Byte array too short to represent bit array of given length"_s);
	}
	this->length$ = length;
	int32_t repLength = ($div((length + BitArray::BITS_PER_UNIT - 1), BitArray::BITS_PER_UNIT));
	int32_t unusedBits = repLength * BitArray::BITS_PER_UNIT - length;
	int8_t bitMask = (int8_t)($sl(255, unusedBits));
	$set(this, repn, $new($bytes, repLength));
	$System::arraycopy(a, 0, this->repn, 0, repLength);
	if (repLength > 0) {
		(*$nc(this->repn))[repLength - 1] &= (uint8_t)bitMask;
	}
}

void BitArray::init$($booleans* bits) {
	this->length$ = $nc(bits)->length;
	$set(this, repn, $new($bytes, (this->length$ + 7) / 8));
	for (int32_t i = 0; i < this->length$; ++i) {
		set(i, bits->get(i));
	}
}

void BitArray::init$(BitArray* ba) {
	this->length$ = $nc(ba)->length$;
	$set(this, repn, $cast($bytes, $nc(ba->repn)->clone()));
}

bool BitArray::get(int32_t index) {
	if (index < 0 || index >= this->length$) {
		$throwNew($ArrayIndexOutOfBoundsException, $($Integer::toString(index)));
	}
	int8_t var$0 = $nc(this->repn)->get(subscript(index));
	return ((int32_t)(var$0 & (uint32_t)position(index))) != 0;
}

void BitArray::set(int32_t index, bool value) {
	if (index < 0 || index >= this->length$) {
		$throwNew($ArrayIndexOutOfBoundsException, $($Integer::toString(index)));
	}
	int32_t idx = subscript(index);
	int32_t bit = position(index);
	if (value) {
		(*$nc(this->repn))[idx] |= bit;
	} else {
		(*$nc(this->repn))[idx] &= (uint8_t)~bit;
	}
}

int32_t BitArray::length() {
	return this->length$;
}

$bytes* BitArray::toByteArray() {
	return $cast($bytes, $nc(this->repn)->clone());
}

bool BitArray::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (obj == nullptr || !($instanceOf(BitArray, obj))) {
		return false;
	}
	$var(BitArray, ba, $cast(BitArray, obj));
	if ($nc(ba)->length$ != this->length$) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->repn)->length; i += 1) {
		if ($nc(this->repn)->get(i) != $nc($nc(ba)->repn)->get(i)) {
			return false;
		}
	}
	return true;
}

$booleans* BitArray::toBooleanArray() {
	$var($booleans, bits, $new($booleans, this->length$));
	for (int32_t i = 0; i < this->length$; ++i) {
		bits->set(i, get(i));
	}
	return bits;
}

int32_t BitArray::hashCode() {
	int32_t hashCode = 0;
	for (int32_t i = 0; i < $nc(this->repn)->length; ++i) {
		hashCode = 31 * hashCode + $nc(this->repn)->get(i);
	}
	return hashCode ^ this->length$;
}

$Object* BitArray::clone() {
	return $of($new(BitArray, this));
}

$String* BitArray::toString() {
	if (this->length$ == 0) {
		return ""_s;
	}
	$var($ByteArrayOutputStream, out, $new($ByteArrayOutputStream));
	for (int32_t i = 0; i < $nc(this->repn)->length - 1; ++i) {
		out->write($nc(BitArray::NYBBLE)->get((int32_t)(($nc(this->repn)->get(i) >> 4) & (uint32_t)15)), 0, 4);
		out->write($nc(BitArray::NYBBLE)->get((int32_t)($nc(this->repn)->get(i) & (uint32_t)15)), 0, 4);
		if ($mod(i, BitArray::BYTES_PER_LINE) == BitArray::BYTES_PER_LINE - 1) {
			out->write((int32_t)u'\n');
		} else {
			out->write((int32_t)u' ');
		}
	}
	for (int32_t i = BitArray::BITS_PER_UNIT * ($nc(this->repn)->length - 1); i < this->length$; ++i) {
		out->write((int32_t)(get(i) ? u'1' : u'0'));
	}
	return $new($String, $(out->toByteArray()));
}

BitArray* BitArray::truncate() {
	for (int32_t i = this->length$ - 1; i >= 0; --i) {
		if (get(i)) {
			return $new(BitArray, i + 1, $($Arrays::copyOf(this->repn, $div((i + BitArray::BITS_PER_UNIT), BitArray::BITS_PER_UNIT))));
		}
	}
	return $new(BitArray, 1);
}

void clinit$BitArray($Class* class$) {
	$assignStatic(BitArray::NYBBLE, $new($byteArray2, {
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'1'
		}),
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'1'
		}),
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'1'
		}),
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'1'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'0',
			(int8_t)u'1'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'1',
			(int8_t)u'1'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'0',
			(int8_t)u'1'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'0'
		}),
		$$new($bytes, {
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'1',
			(int8_t)u'1'
		})
	}));
}

BitArray::BitArray() {
}

$Class* BitArray::load$($String* name, bool initialize) {
	$loadClass(BitArray, name, initialize, &_BitArray_ClassInfo_, clinit$BitArray, allocate$BitArray);
	return class$;
}

$Class* BitArray::class$ = nullptr;

		} // util
	} // security
} // sun