#include <sun/security/util/DerIndefLenConverter.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef CLASS_MASK
#undef FORM_MASK
#undef LEN_LONG
#undef LEN_MASK
#undef SKIP_EOC_BYTES
#undef TAG_MASK

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DerIndefLenConverter_FieldInfo_[] = {
	{"TAG_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DerIndefLenConverter, TAG_MASK)},
	{"FORM_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DerIndefLenConverter, FORM_MASK)},
	{"CLASS_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DerIndefLenConverter, CLASS_MASK)},
	{"LEN_LONG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DerIndefLenConverter, LEN_LONG)},
	{"LEN_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DerIndefLenConverter, LEN_MASK)},
	{"SKIP_EOC_BYTES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DerIndefLenConverter, SKIP_EOC_BYTES)},
	{"data", "[B", nullptr, $PRIVATE, $field(DerIndefLenConverter, data)},
	{"newData", "[B", nullptr, $PRIVATE, $field(DerIndefLenConverter, newData)},
	{"newDataPos", "I", nullptr, $PRIVATE, $field(DerIndefLenConverter, newDataPos)},
	{"dataPos", "I", nullptr, $PRIVATE, $field(DerIndefLenConverter, dataPos)},
	{"dataSize", "I", nullptr, $PRIVATE, $field(DerIndefLenConverter, dataSize)},
	{"index", "I", nullptr, $PRIVATE, $field(DerIndefLenConverter, index)},
	{"unresolved", "I", nullptr, $PRIVATE, $field(DerIndefLenConverter, unresolved)},
	{"ndefsList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Object;>;", $PRIVATE, $field(DerIndefLenConverter, ndefsList)},
	{"numOfTotalLenBytes", "I", nullptr, $PRIVATE, $field(DerIndefLenConverter, numOfTotalLenBytes)},
	{}
};

$MethodInfo _DerIndefLenConverter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DerIndefLenConverter, init$, void)},
	{"convertBytes", "([B)[B", nullptr, 0, $virtualMethod(DerIndefLenConverter, convertBytes, $bytes*, $bytes*), "java.io.IOException"},
	{"convertStream", "(Ljava/io/InputStream;B)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(DerIndefLenConverter, convertStream, $bytes*, $InputStream*, int8_t), "java.io.IOException"},
	{"getLengthBytes", "(I)[B", nullptr, $PRIVATE, $method(DerIndefLenConverter, getLengthBytes, $bytes*, int32_t)},
	{"getNumOfLenBytes", "(I)I", nullptr, $PRIVATE, $method(DerIndefLenConverter, getNumOfLenBytes, int32_t, int32_t)},
	{"isEOC", "(I)Z", nullptr, $PRIVATE, $method(DerIndefLenConverter, isEOC, bool, int32_t)},
	{"isIndefinite", "(I)Z", nullptr, $STATIC, $staticMethod(DerIndefLenConverter, isIndefinite, bool, int32_t)},
	{"isLongForm", "(I)Z", nullptr, $STATIC, $staticMethod(DerIndefLenConverter, isLongForm, bool, int32_t)},
	{"parseLength", "()I", nullptr, $PRIVATE, $method(DerIndefLenConverter, parseLength, int32_t), "java.io.IOException"},
	{"parseTag", "()V", nullptr, $PRIVATE, $method(DerIndefLenConverter, parseTag, void), "java.io.IOException"},
	{"parseValue", "(I)V", nullptr, $PRIVATE, $method(DerIndefLenConverter, parseValue, void, int32_t)},
	{"writeLength", "(I)V", nullptr, $PRIVATE, $method(DerIndefLenConverter, writeLength, void, int32_t)},
	{"writeLengthAndValue", "()V", nullptr, $PRIVATE, $method(DerIndefLenConverter, writeLengthAndValue, void), "java.io.IOException"},
	{"writeTag", "()V", nullptr, $PRIVATE, $method(DerIndefLenConverter, writeTag, void)},
	{"writeValue", "(I)V", nullptr, $PRIVATE, $method(DerIndefLenConverter, writeValue, void, int32_t)},
	{}
};

$ClassInfo _DerIndefLenConverter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.DerIndefLenConverter",
	"java.lang.Object",
	nullptr,
	_DerIndefLenConverter_FieldInfo_,
	_DerIndefLenConverter_MethodInfo_
};

$Object* allocate$DerIndefLenConverter($Class* clazz) {
	return $of($alloc(DerIndefLenConverter));
}

bool DerIndefLenConverter::isEOC(int32_t tag) {
	return ((((int32_t)(tag & (uint32_t)DerIndefLenConverter::TAG_MASK)) == 0) && (((int32_t)(tag & (uint32_t)DerIndefLenConverter::FORM_MASK)) == 0) && (((int32_t)(tag & (uint32_t)DerIndefLenConverter::CLASS_MASK)) == 0));
}

bool DerIndefLenConverter::isLongForm(int32_t lengthByte) {
	return (((int32_t)(lengthByte & (uint32_t)DerIndefLenConverter::LEN_LONG)) == DerIndefLenConverter::LEN_LONG);
}

void DerIndefLenConverter::init$() {
	this->unresolved = 0;
	$set(this, ndefsList, $new($ArrayList));
	this->numOfTotalLenBytes = 0;
}

bool DerIndefLenConverter::isIndefinite(int32_t lengthByte) {
	return (isLongForm(lengthByte) && (((int32_t)(lengthByte & (uint32_t)DerIndefLenConverter::LEN_MASK)) == 0));
}

void DerIndefLenConverter::parseTag() {
	$useLocalCurrentObjectStackCache();
	if (isEOC($nc(this->data)->get(this->dataPos)) && ($nc(this->data)->get(this->dataPos + 1) == 0)) {
		int32_t numOfEncapsulatedLenBytes = 0;
		$var($Object, elem, nullptr);
		int32_t index = 0;
		for (index = $nc(this->ndefsList)->size() - 1; index >= 0; --index) {
			$assign(elem, $nc(this->ndefsList)->get(index));
			if ($instanceOf($Integer, elem)) {
				break;
			} else {
				numOfEncapsulatedLenBytes += $nc(($cast($bytes, elem)))->length - 3;
			}
		}
		if (index < 0) {
			$throwNew($IOException, "EOC does not have matching indefinite-length tag"_s);
		}
		int32_t sectionLen = this->dataPos - $nc(($cast($Integer, elem)))->intValue() + numOfEncapsulatedLenBytes;
		$var($bytes, sectionLenBytes, getLengthBytes(sectionLen));
		$nc(this->ndefsList)->set(index, sectionLenBytes);
		--this->unresolved;
		this->numOfTotalLenBytes += ($nc(sectionLenBytes)->length - 3);
	}
	++this->dataPos;
}

void DerIndefLenConverter::writeTag() {
	if (this->dataPos == this->dataSize) {
		return;
	}
	int32_t tag = $nc(this->data)->get(this->dataPos++);
	if (isEOC(tag) && ($nc(this->data)->get(this->dataPos) == 0)) {
		++this->dataPos;
		writeTag();
	} else {
		$nc(this->newData)->set(this->newDataPos++, (int8_t)tag);
	}
}

int32_t DerIndefLenConverter::parseLength() {
	int32_t curLen = 0;
	if (this->dataPos == this->dataSize) {
		return curLen;
	}
	int32_t lenByte = (int32_t)($nc(this->data)->get(this->dataPos++) & (uint32_t)255);
	if (isIndefinite(lenByte)) {
		$nc(this->ndefsList)->add($($Integer::valueOf(this->dataPos)));
		++this->unresolved;
		return curLen;
	}
	if (isLongForm(lenByte)) {
		lenByte &= (uint32_t)DerIndefLenConverter::LEN_MASK;
		if (lenByte > 4) {
			$throwNew($IOException, "Too much data"_s);
		}
		if ((this->dataSize - this->dataPos) < (lenByte + 1)) {
			return -1;
		}
		for (int32_t i = 0; i < lenByte; ++i) {
			curLen = (curLen << 8) + ((int32_t)($nc(this->data)->get(this->dataPos++) & (uint32_t)255));
		}
		if (curLen < 0) {
			$throwNew($IOException, "Invalid length bytes"_s);
		}
	} else {
		curLen = ((int32_t)(lenByte & (uint32_t)DerIndefLenConverter::LEN_MASK));
	}
	return curLen;
}

void DerIndefLenConverter::writeLengthAndValue() {
	if (this->dataPos == this->dataSize) {
		return;
	}
	int32_t curLen = 0;
	int32_t lenByte = (int32_t)($nc(this->data)->get(this->dataPos++) & (uint32_t)255);
	if (isIndefinite(lenByte)) {
		$var($bytes, lenBytes, $cast($bytes, $nc(this->ndefsList)->get(this->index++)));
		$System::arraycopy(lenBytes, 0, this->newData, this->newDataPos, $nc(lenBytes)->length);
		this->newDataPos += $nc(lenBytes)->length;
		return;
	}
	if (isLongForm(lenByte)) {
		lenByte &= (uint32_t)DerIndefLenConverter::LEN_MASK;
		for (int32_t i = 0; i < lenByte; ++i) {
			curLen = (curLen << 8) + ((int32_t)($nc(this->data)->get(this->dataPos++) & (uint32_t)255));
		}
		if (curLen < 0) {
			$throwNew($IOException, "Invalid length bytes"_s);
		}
	} else {
		curLen = ((int32_t)(lenByte & (uint32_t)DerIndefLenConverter::LEN_MASK));
	}
	writeLength(curLen);
	writeValue(curLen);
}

void DerIndefLenConverter::writeLength(int32_t curLen) {
	if (curLen < 128) {
		$nc(this->newData)->set(this->newDataPos++, (int8_t)curLen);
	} else if (curLen < (1 << 8)) {
		$nc(this->newData)->set(this->newDataPos++, (int8_t)129);
		$nc(this->newData)->set(this->newDataPos++, (int8_t)curLen);
	} else if (curLen < (1 << 16)) {
		$nc(this->newData)->set(this->newDataPos++, (int8_t)130);
		$nc(this->newData)->set(this->newDataPos++, (int8_t)(curLen >> 8));
		$nc(this->newData)->set(this->newDataPos++, (int8_t)curLen);
	} else if (curLen < (1 << 24)) {
		$nc(this->newData)->set(this->newDataPos++, (int8_t)131);
		$nc(this->newData)->set(this->newDataPos++, (int8_t)(curLen >> 16));
		$nc(this->newData)->set(this->newDataPos++, (int8_t)(curLen >> 8));
		$nc(this->newData)->set(this->newDataPos++, (int8_t)curLen);
	} else {
		$nc(this->newData)->set(this->newDataPos++, (int8_t)132);
		$nc(this->newData)->set(this->newDataPos++, (int8_t)(curLen >> 24));
		$nc(this->newData)->set(this->newDataPos++, (int8_t)(curLen >> 16));
		$nc(this->newData)->set(this->newDataPos++, (int8_t)(curLen >> 8));
		$nc(this->newData)->set(this->newDataPos++, (int8_t)curLen);
	}
}

$bytes* DerIndefLenConverter::getLengthBytes(int32_t curLen) {
	$var($bytes, lenBytes, nullptr);
	int32_t index = 0;
	if (curLen < 128) {
		$assign(lenBytes, $new($bytes, 1));
		lenBytes->set(index++, (int8_t)curLen);
	} else if (curLen < (1 << 8)) {
		$assign(lenBytes, $new($bytes, 2));
		lenBytes->set(index++, (int8_t)129);
		lenBytes->set(index++, (int8_t)curLen);
	} else if (curLen < (1 << 16)) {
		$assign(lenBytes, $new($bytes, 3));
		lenBytes->set(index++, (int8_t)130);
		lenBytes->set(index++, (int8_t)(curLen >> 8));
		lenBytes->set(index++, (int8_t)curLen);
	} else if (curLen < (1 << 24)) {
		$assign(lenBytes, $new($bytes, 4));
		lenBytes->set(index++, (int8_t)131);
		lenBytes->set(index++, (int8_t)(curLen >> 16));
		lenBytes->set(index++, (int8_t)(curLen >> 8));
		lenBytes->set(index++, (int8_t)curLen);
	} else {
		$assign(lenBytes, $new($bytes, 5));
		lenBytes->set(index++, (int8_t)132);
		lenBytes->set(index++, (int8_t)(curLen >> 24));
		lenBytes->set(index++, (int8_t)(curLen >> 16));
		lenBytes->set(index++, (int8_t)(curLen >> 8));
		lenBytes->set(index++, (int8_t)curLen);
	}
	return lenBytes;
}

int32_t DerIndefLenConverter::getNumOfLenBytes(int32_t len) {
	int32_t numOfLenBytes = 0;
	if (len < 128) {
		numOfLenBytes = 1;
	} else if (len < (1 << 8)) {
		numOfLenBytes = 2;
	} else if (len < (1 << 16)) {
		numOfLenBytes = 3;
	} else if (len < (1 << 24)) {
		numOfLenBytes = 4;
	} else {
		numOfLenBytes = 5;
	}
	return numOfLenBytes;
}

void DerIndefLenConverter::parseValue(int32_t curLen) {
	this->dataPos += curLen;
}

void DerIndefLenConverter::writeValue(int32_t curLen) {
	for (int32_t i = 0; i < curLen; ++i) {
		$nc(this->newData)->set(this->newDataPos++, $nc(this->data)->get(this->dataPos++));
	}
}

$bytes* DerIndefLenConverter::convertBytes($bytes* indefData) {
	$set(this, data, indefData);
	this->dataPos = 0;
	this->index = 0;
	this->dataSize = $nc(this->data)->length;
	int32_t len = 0;
	int32_t unused = 0;
	while (this->dataPos < this->dataSize) {
		if (this->dataPos + 2 > this->dataSize) {
			return nullptr;
		}
		parseTag();
		len = parseLength();
		if (len < 0) {
			return nullptr;
		}
		parseValue(len);
		if (this->unresolved == 0) {
			unused = this->dataSize - this->dataPos;
			this->dataSize = this->dataPos;
			break;
		}
	}
	if (this->unresolved != 0) {
		return nullptr;
	}
	$set(this, newData, $new($bytes, this->dataSize + this->numOfTotalLenBytes + unused));
	this->dataPos = 0;
	this->newDataPos = 0;
	this->index = 0;
	while (this->dataPos < this->dataSize) {
		writeTag();
		writeLengthAndValue();
	}
	$System::arraycopy(indefData, this->dataSize, this->newData, this->dataSize + this->numOfTotalLenBytes, unused);
	return this->newData;
}

$bytes* DerIndefLenConverter::convertStream($InputStream* in, int8_t tag) {
	$useLocalCurrentObjectStackCache();
	int32_t offset = 2;
	int32_t readLen = $nc(in)->available();
	$var($bytes, indefData, $new($bytes, readLen + offset));
	indefData->set(0, tag);
	indefData->set(1, (int8_t)128);
	while (true) {
		int32_t bytesRead = in->readNBytes(indefData, offset, readLen);
		if (bytesRead != readLen) {
			readLen = bytesRead;
			$assign(indefData, $Arrays::copyOf(indefData, offset + bytesRead));
		}
		$var(DerIndefLenConverter, derIn, $new(DerIndefLenConverter));
		$var($bytes, result, derIn->convertBytes(indefData));
		if (result == nullptr) {
			int32_t next = in->read();
			if (next == -1) {
				$throwNew($IOException, "not all indef len BER resolved"_s);
			}
			int32_t more = in->available();
			$assign(indefData, $Arrays::copyOf(indefData, offset + readLen + 1 + more));
			indefData->set(offset + readLen, (int8_t)next);
			offset = offset + readLen + 1;
			readLen = more;
		} else {
			return result;
		}
	}
}

DerIndefLenConverter::DerIndefLenConverter() {
}

$Class* DerIndefLenConverter::load$($String* name, bool initialize) {
	$loadClass(DerIndefLenConverter, name, initialize, &_DerIndefLenConverter_ClassInfo_, allocate$DerIndefLenConverter);
	return class$;
}

$Class* DerIndefLenConverter::class$ = nullptr;

		} // util
	} // security
} // sun