#include <jdk/internal/org/objectweb/asm/ByteVector.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _ByteVector_FieldInfo_[] = {
	{"data", "[B", nullptr, 0, $field(ByteVector, data)},
	{"length", "I", nullptr, 0, $field(ByteVector, length)},
	{}
};

$MethodInfo _ByteVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ByteVector::*)()>(&ByteVector::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ByteVector::*)(int32_t)>(&ByteVector::init$))},
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(ByteVector::*)($bytes*)>(&ByteVector::init$))},
	{"encodeUtf8", "(Ljava/lang/String;II)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(static_cast<ByteVector*(ByteVector::*)($String*,int32_t,int32_t)>(&ByteVector::encodeUtf8))},
	{"enlarge", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ByteVector::*)(int32_t)>(&ByteVector::enlarge))},
	{"put11", "(II)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(static_cast<ByteVector*(ByteVector::*)(int32_t,int32_t)>(&ByteVector::put11))},
	{"put112", "(III)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(static_cast<ByteVector*(ByteVector::*)(int32_t,int32_t,int32_t)>(&ByteVector::put112))},
	{"put12", "(II)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(static_cast<ByteVector*(ByteVector::*)(int32_t,int32_t)>(&ByteVector::put12))},
	{"put122", "(III)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(static_cast<ByteVector*(ByteVector::*)(int32_t,int32_t,int32_t)>(&ByteVector::put122))},
	{"putByte", "(I)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC},
	{"putByteArray", "([BII)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC},
	{"putInt", "(I)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC},
	{"putLong", "(J)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC},
	{"putShort", "(I)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC},
	{"putUTF8", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteVector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.ByteVector",
	"java.lang.Object",
	nullptr,
	_ByteVector_FieldInfo_,
	_ByteVector_MethodInfo_
};

$Object* allocate$ByteVector($Class* clazz) {
	return $of($alloc(ByteVector));
}

void ByteVector::init$() {
	$set(this, data, $new($bytes, 64));
}

void ByteVector::init$(int32_t initialCapacity) {
	$set(this, data, $new($bytes, initialCapacity));
}

void ByteVector::init$($bytes* data) {
	$set(this, data, data);
	this->length = $nc(data)->length;
}

ByteVector* ByteVector::putByte(int32_t byteValue) {
	int32_t currentLength = this->length;
	if (currentLength + 1 > $nc(this->data)->length) {
		enlarge(1);
	}
	$nc(this->data)->set(currentLength++, (int8_t)byteValue);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::put11(int32_t byteValue1, int32_t byteValue2) {
	int32_t currentLength = this->length;
	if (currentLength + 2 > $nc(this->data)->length) {
		enlarge(2);
	}
	$var($bytes, currentData, this->data);
	$nc(currentData)->set(currentLength++, (int8_t)byteValue1);
	currentData->set(currentLength++, (int8_t)byteValue2);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::putShort(int32_t shortValue) {
	int32_t currentLength = this->length;
	if (currentLength + 2 > $nc(this->data)->length) {
		enlarge(2);
	}
	$var($bytes, currentData, this->data);
	$nc(currentData)->set(currentLength++, (int8_t)((int32_t)((uint32_t)shortValue >> 8)));
	currentData->set(currentLength++, (int8_t)shortValue);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::put12(int32_t byteValue, int32_t shortValue) {
	int32_t currentLength = this->length;
	if (currentLength + 3 > $nc(this->data)->length) {
		enlarge(3);
	}
	$var($bytes, currentData, this->data);
	$nc(currentData)->set(currentLength++, (int8_t)byteValue);
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)shortValue >> 8)));
	currentData->set(currentLength++, (int8_t)shortValue);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::put112(int32_t byteValue1, int32_t byteValue2, int32_t shortValue) {
	int32_t currentLength = this->length;
	if (currentLength + 4 > $nc(this->data)->length) {
		enlarge(4);
	}
	$var($bytes, currentData, this->data);
	$nc(currentData)->set(currentLength++, (int8_t)byteValue1);
	currentData->set(currentLength++, (int8_t)byteValue2);
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)shortValue >> 8)));
	currentData->set(currentLength++, (int8_t)shortValue);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::putInt(int32_t intValue) {
	int32_t currentLength = this->length;
	if (currentLength + 4 > $nc(this->data)->length) {
		enlarge(4);
	}
	$var($bytes, currentData, this->data);
	$nc(currentData)->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 24)));
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 16)));
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 8)));
	currentData->set(currentLength++, (int8_t)intValue);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::put122(int32_t byteValue, int32_t shortValue1, int32_t shortValue2) {
	int32_t currentLength = this->length;
	if (currentLength + 5 > $nc(this->data)->length) {
		enlarge(5);
	}
	$var($bytes, currentData, this->data);
	$nc(currentData)->set(currentLength++, (int8_t)byteValue);
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)shortValue1 >> 8)));
	currentData->set(currentLength++, (int8_t)shortValue1);
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)shortValue2 >> 8)));
	currentData->set(currentLength++, (int8_t)shortValue2);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::putLong(int64_t longValue) {
	int32_t currentLength = this->length;
	if (currentLength + 8 > $nc(this->data)->length) {
		enlarge(8);
	}
	$var($bytes, currentData, this->data);
	int32_t intValue = (int32_t)((int64_t)((uint64_t)longValue >> 32));
	$nc(currentData)->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 24)));
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 16)));
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 8)));
	currentData->set(currentLength++, (int8_t)intValue);
	intValue = (int32_t)longValue;
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 24)));
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 16)));
	currentData->set(currentLength++, (int8_t)((int32_t)((uint32_t)intValue >> 8)));
	currentData->set(currentLength++, (int8_t)intValue);
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::putUTF8($String* stringValue) {
	int32_t charLength = $nc(stringValue)->length();
	if (charLength > 0x0000FFFF) {
		$throwNew($IllegalArgumentException, "UTF8 string too large"_s);
	}
	int32_t currentLength = this->length;
	if (currentLength + 2 + charLength > $nc(this->data)->length) {
		enlarge(2 + charLength);
	}
	$var($bytes, currentData, this->data);
	$nc(currentData)->set(currentLength++, (int8_t)((int32_t)((uint32_t)charLength >> 8)));
	currentData->set(currentLength++, (int8_t)charLength);
	for (int32_t i = 0; i < charLength; ++i) {
		char16_t charValue = stringValue->charAt(i);
		if (charValue >= (char16_t)0x1 && charValue <= (char16_t)0x7F) {
			currentData->set(currentLength++, (int8_t)charValue);
		} else {
			this->length = currentLength;
			return encodeUtf8(stringValue, i, 0x0000FFFF);
		}
	}
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::encodeUtf8($String* stringValue, int32_t offset, int32_t maxByteLength) {
	int32_t charLength = $nc(stringValue)->length();
	int32_t byteLength = offset;
	for (int32_t i = offset; i < charLength; ++i) {
		char16_t charValue = stringValue->charAt(i);
		if (charValue >= 1 && charValue <= 127) {
			++byteLength;
		} else if (charValue <= 2047) {
			byteLength += 2;
		} else {
			byteLength += 3;
		}
	}
	if (byteLength > maxByteLength) {
		$throwNew($IllegalArgumentException, "UTF8 string too large"_s);
	}
	int32_t byteLengthOffset = this->length - offset - 2;
	if (byteLengthOffset >= 0) {
		$nc(this->data)->set(byteLengthOffset, (int8_t)((int32_t)((uint32_t)byteLength >> 8)));
		$nc(this->data)->set(byteLengthOffset + 1, (int8_t)byteLength);
	}
	if (this->length + byteLength - offset > $nc(this->data)->length) {
		enlarge(byteLength - offset);
	}
	int32_t currentLength = this->length;
	for (int32_t i = offset; i < charLength; ++i) {
		char16_t charValue = stringValue->charAt(i);
		if (charValue >= 1 && charValue <= 127) {
			$nc(this->data)->set(currentLength++, (int8_t)charValue);
		} else if (charValue <= 2047) {
			$nc(this->data)->set(currentLength++, (int8_t)(192 | ((int32_t)((charValue >> 6) & (uint32_t)31))));
			$nc(this->data)->set(currentLength++, (int8_t)(128 | ((int32_t)(charValue & (uint32_t)63))));
		} else {
			$nc(this->data)->set(currentLength++, (int8_t)(224 | ((int32_t)((charValue >> 12) & (uint32_t)15))));
			$nc(this->data)->set(currentLength++, (int8_t)(128 | ((int32_t)((charValue >> 6) & (uint32_t)63))));
			$nc(this->data)->set(currentLength++, (int8_t)(128 | ((int32_t)(charValue & (uint32_t)63))));
		}
	}
	this->length = currentLength;
	return this;
}

ByteVector* ByteVector::putByteArray($bytes* byteArrayValue, int32_t byteOffset, int32_t byteLength) {
	if (this->length + byteLength > $nc(this->data)->length) {
		enlarge(byteLength);
	}
	if (byteArrayValue != nullptr) {
		$System::arraycopy(byteArrayValue, byteOffset, this->data, this->length, byteLength);
	}
	this->length += byteLength;
	return this;
}

void ByteVector::enlarge(int32_t size) {
	int32_t doubleCapacity = 2 * $nc(this->data)->length;
	int32_t minimalCapacity = this->length + size;
	$var($bytes, newData, $new($bytes, doubleCapacity > minimalCapacity ? doubleCapacity : minimalCapacity));
	$System::arraycopy(this->data, 0, newData, 0, this->length);
	$set(this, data, newData);
}

ByteVector::ByteVector() {
}

$Class* ByteVector::load$($String* name, bool initialize) {
	$loadClass(ByteVector, name, initialize, &_ByteVector_ClassInfo_, allocate$ByteVector);
	return class$;
}

$Class* ByteVector::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk