#include <jdk/internal/org/objectweb/asm/ByteVector.h>
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
	this->data->set(currentLength++, (int8_t)byteValue);
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
	if (charLength > 0x0000ffff) {
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
		if (charValue >= (char16_t)0x01 && charValue <= (char16_t)0x7f) {
			currentData->set(currentLength++, (int8_t)charValue);
		} else {
			this->length = currentLength;
			return encodeUtf8(stringValue, i, 0x0000ffff);
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
		this->data->set(byteLengthOffset + 1, (int8_t)byteLength);
	}
	if (this->length + byteLength - offset > $nc(this->data)->length) {
		enlarge(byteLength - offset);
	}
	int32_t currentLength = this->length;
	for (int32_t i = offset; i < charLength; ++i) {
		char16_t charValue = stringValue->charAt(i);
		if (charValue >= 1 && charValue <= 127) {
			this->data->set(currentLength++, (int8_t)charValue);
		} else if (charValue <= 2047) {
			this->data->set(currentLength++, (int8_t)(0xc0 | ((charValue >> 6) & 0x1f)));
			this->data->set(currentLength++, (int8_t)(0x80 | (charValue & 0x3f)));
		} else {
			this->data->set(currentLength++, (int8_t)(0xe0 | ((charValue >> 12) & 0x0f)));
			this->data->set(currentLength++, (int8_t)(0x80 | ((charValue >> 6) & 0x3f)));
			this->data->set(currentLength++, (int8_t)(0x80 | (charValue & 0x3f)));
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
	$FieldInfo fieldInfos$$[] = {
		{"data", "[B", nullptr, 0, $field(ByteVector, data)},
		{"length", "I", nullptr, 0, $field(ByteVector, length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ByteVector, init$, void)},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(ByteVector, init$, void, int32_t)},
		{"<init>", "([B)V", nullptr, 0, $method(ByteVector, init$, void, $bytes*)},
		{"encodeUtf8", "(Ljava/lang/String;II)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(ByteVector, encodeUtf8, ByteVector*, $String*, int32_t, int32_t)},
		{"enlarge", "(I)V", nullptr, $PRIVATE, $method(ByteVector, enlarge, void, int32_t)},
		{"put11", "(II)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(ByteVector, put11, ByteVector*, int32_t, int32_t)},
		{"put112", "(III)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(ByteVector, put112, ByteVector*, int32_t, int32_t, int32_t)},
		{"put12", "(II)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(ByteVector, put12, ByteVector*, int32_t, int32_t)},
		{"put122", "(III)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $FINAL, $method(ByteVector, put122, ByteVector*, int32_t, int32_t, int32_t)},
		{"putByte", "(I)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC, $virtualMethod(ByteVector, putByte, ByteVector*, int32_t)},
		{"putByteArray", "([BII)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC, $virtualMethod(ByteVector, putByteArray, ByteVector*, $bytes*, int32_t, int32_t)},
		{"putInt", "(I)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC, $virtualMethod(ByteVector, putInt, ByteVector*, int32_t)},
		{"putLong", "(J)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC, $virtualMethod(ByteVector, putLong, ByteVector*, int64_t)},
		{"putShort", "(I)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC, $virtualMethod(ByteVector, putShort, ByteVector*, int32_t)},
		{"putUTF8", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PUBLIC, $virtualMethod(ByteVector, putUTF8, ByteVector*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.ByteVector",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteVector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteVector);
	});
	return class$;
}

$Class* ByteVector::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk