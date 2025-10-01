#include <java/io/DataOutputStream.h>

#include <java/io/DataOutput.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/UTFDataFormatException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $DataOutput = ::java::io::DataOutput;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $UTFDataFormatException = ::java::io::UTFDataFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _DataOutputStream_FieldInfo_[] = {
	{"written", "I", nullptr, $PROTECTED, $field(DataOutputStream, written)},
	{"bytearr", "[B", nullptr, $PRIVATE, $field(DataOutputStream, bytearr)},
	{"writeBuffer", "[B", nullptr, $PRIVATE | $FINAL, $field(DataOutputStream, writeBuffer)},
	{}
};

$MethodInfo _DataOutputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DataOutputStream::*)($OutputStream*)>(&DataOutputStream::init$))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"incCount", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(DataOutputStream::*)(int32_t)>(&DataOutputStream::incCount))},
	{"size", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(DataOutputStream::*)()>(&DataOutputStream::size))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tooLongMsg", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,int32_t)>(&DataOutputStream::tooLongMsg))},
	{"*write", "([B)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"writeBoolean", "(Z)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeByte", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeChar", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeChars", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeDouble", "(D)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeFloat", "(F)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeInt", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeLong", "(J)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeShort", "(I)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeUTF", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"writeUTF", "(Ljava/lang/String;Ljava/io/DataOutput;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,$DataOutput*)>(&DataOutputStream::writeUTF)), "java.io.IOException"},
	{}
};

$ClassInfo _DataOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.DataOutputStream",
	"java.io.FilterOutputStream",
	"java.io.DataOutput",
	_DataOutputStream_FieldInfo_,
	_DataOutputStream_MethodInfo_
};

$Object* allocate$DataOutputStream($Class* clazz) {
	return $of($alloc(DataOutputStream));
}

void DataOutputStream::write($bytes* b) {
	this->$FilterOutputStream::write(b);
}

int32_t DataOutputStream::hashCode() {
	 return this->$FilterOutputStream::hashCode();
}

bool DataOutputStream::equals(Object$* obj) {
	 return this->$FilterOutputStream::equals(obj);
}

$Object* DataOutputStream::clone() {
	 return this->$FilterOutputStream::clone();
}

$String* DataOutputStream::toString() {
	 return this->$FilterOutputStream::toString();
}

void DataOutputStream::finalize() {
	this->$FilterOutputStream::finalize();
}

void DataOutputStream::init$($OutputStream* out) {
	$FilterOutputStream::init$(out);
	$set(this, bytearr, nullptr);
	$set(this, writeBuffer, $new($bytes, 8));
}

void DataOutputStream::incCount(int32_t value) {
	int32_t temp = this->written + value;
	if (temp < 0) {
		temp = $Integer::MAX_VALUE;
	}
	this->written = temp;
}

void DataOutputStream::write(int32_t b) {
	$synchronized(this) {
		$nc(this->out)->write(b);
		incCount(1);
	}
}

void DataOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		$nc(this->out)->write(b, off, len);
		incCount(len);
	}
}

void DataOutputStream::flush() {
	$nc(this->out)->flush();
}

void DataOutputStream::writeBoolean(bool v) {
	$nc(this->out)->write(v ? 1 : 0);
	incCount(1);
}

void DataOutputStream::writeByte(int32_t v) {
	$nc(this->out)->write(v);
	incCount(1);
}

void DataOutputStream::writeShort(int32_t v) {
	$nc(this->writeBuffer)->set(0, (int8_t)((int32_t)((uint32_t)v >> 8)));
	$nc(this->writeBuffer)->set(1, (int8_t)((int32_t)((uint32_t)v >> 0)));
	$nc(this->out)->write(this->writeBuffer, 0, 2);
	incCount(2);
}

void DataOutputStream::writeChar(int32_t v) {
	$nc(this->writeBuffer)->set(0, (int8_t)((int32_t)((uint32_t)v >> 8)));
	$nc(this->writeBuffer)->set(1, (int8_t)((int32_t)((uint32_t)v >> 0)));
	$nc(this->out)->write(this->writeBuffer, 0, 2);
	incCount(2);
}

void DataOutputStream::writeInt(int32_t v) {
	$nc(this->writeBuffer)->set(0, (int8_t)((int32_t)((uint32_t)v >> 24)));
	$nc(this->writeBuffer)->set(1, (int8_t)((int32_t)((uint32_t)v >> 16)));
	$nc(this->writeBuffer)->set(2, (int8_t)((int32_t)((uint32_t)v >> 8)));
	$nc(this->writeBuffer)->set(3, (int8_t)((int32_t)((uint32_t)v >> 0)));
	$nc(this->out)->write(this->writeBuffer, 0, 4);
	incCount(4);
}

void DataOutputStream::writeLong(int64_t v) {
	$nc(this->writeBuffer)->set(0, (int8_t)((int64_t)((uint64_t)v >> 56)));
	$nc(this->writeBuffer)->set(1, (int8_t)((int64_t)((uint64_t)v >> 48)));
	$nc(this->writeBuffer)->set(2, (int8_t)((int64_t)((uint64_t)v >> 40)));
	$nc(this->writeBuffer)->set(3, (int8_t)((int64_t)((uint64_t)v >> 32)));
	$nc(this->writeBuffer)->set(4, (int8_t)((int64_t)((uint64_t)v >> 24)));
	$nc(this->writeBuffer)->set(5, (int8_t)((int64_t)((uint64_t)v >> 16)));
	$nc(this->writeBuffer)->set(6, (int8_t)((int64_t)((uint64_t)v >> 8)));
	$nc(this->writeBuffer)->set(7, (int8_t)((int64_t)((uint64_t)v >> 0)));
	$nc(this->out)->write(this->writeBuffer, 0, 8);
	incCount(8);
}

void DataOutputStream::writeFloat(float v) {
	writeInt($Float::floatToIntBits(v));
}

void DataOutputStream::writeDouble(double v) {
	writeLong($Double::doubleToLongBits(v));
}

void DataOutputStream::writeBytes($String* s) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		$nc(this->out)->write((int32_t)(int8_t)s->charAt(i));
	}
	incCount(len);
}

void DataOutputStream::writeChars($String* s) {
	int32_t len = $nc(s)->length();
	for (int32_t i = 0; i < len; ++i) {
		int32_t v = s->charAt(i);
		$nc(this->writeBuffer)->set(0, (int8_t)((int32_t)((uint32_t)v >> 8)));
		$nc(this->writeBuffer)->set(1, (int8_t)((int32_t)((uint32_t)v >> 0)));
		$nc(this->out)->write(this->writeBuffer, 0, 2);
	}
	incCount(len * 2);
}

void DataOutputStream::writeUTF($String* str) {
	writeUTF(str, this);
}

int32_t DataOutputStream::writeUTF($String* str, $DataOutput* out) {
	$init(DataOutputStream);
	int32_t strlen = $nc(str)->length();
	int32_t utflen = strlen;
	for (int32_t i = 0; i < strlen; ++i) {
		int32_t c = str->charAt(i);
		if (c >= 128 || c == 0) {
			utflen += (c >= 2048) ? 2 : 1;
		}
	}
	if (utflen > 0x0000FFFF || utflen < strlen) {
		$throwNew($UTFDataFormatException, $(tooLongMsg(str, utflen)));
	}
	$var($bytes, bytearr, nullptr);
	{
		$var(DataOutputStream, dos, nullptr);
		bool var$0 = $instanceOf(DataOutputStream, out);
		if (var$0) {
			$assign(dos, $cast(DataOutputStream, out));
			var$0 = true;
		}
		if (var$0) {
			if ($nc(dos)->bytearr == nullptr || ($nc($nc(dos)->bytearr)->length < (utflen + 2))) {
				$set(dos, bytearr, $new($bytes, (utflen * 2) + 2));
			}
			$assign(bytearr, $nc(dos)->bytearr);
		} else {
			$assign(bytearr, $new($bytes, utflen + 2));
		}
	}
	int32_t count = 0;
	$nc(bytearr)->set(count++, (int8_t)((int32_t)(((int32_t)((uint32_t)utflen >> 8)) & (uint32_t)255)));
	bytearr->set(count++, (int8_t)((int32_t)(((int32_t)((uint32_t)utflen >> 0)) & (uint32_t)255)));
	int32_t i = 0;
	for (i = 0; i < strlen; ++i) {
		int32_t c = str->charAt(i);
		if (c >= 128 || c == 0) {
			break;
		}
		bytearr->set(count++, (int8_t)c);
	}
	for (; i < strlen; ++i) {
		int32_t c = str->charAt(i);
		if (c < 128 && c != 0) {
			bytearr->set(count++, (int8_t)c);
		} else if (c >= 2048) {
			$nc(bytearr)->set(count++, (int8_t)(224 | ((int32_t)((c >> 12) & (uint32_t)15))));
			bytearr->set(count++, (int8_t)(128 | ((int32_t)((c >> 6) & (uint32_t)63))));
			bytearr->set(count++, (int8_t)(128 | ((int32_t)((c >> 0) & (uint32_t)63))));
		} else {
			$nc(bytearr)->set(count++, (int8_t)(192 | ((int32_t)((c >> 6) & (uint32_t)31))));
			bytearr->set(count++, (int8_t)(128 | ((int32_t)((c >> 0) & (uint32_t)63))));
		}
	}
	$nc(out)->write(bytearr, 0, utflen + 2);
	return utflen + 2;
}

$String* DataOutputStream::tooLongMsg($String* s, int32_t bits32) {
	$init(DataOutputStream);
	int32_t slen = $nc(s)->length();
	$var($String, head, s->substring(0, 8));
	$var($String, tail, s->substring(slen - 8, slen));
	int64_t actualLength = (int64_t)slen + $Integer::toUnsignedLong(bits32 - slen);
	return $str({"encoded string ("_s, head, "..."_s, tail, ") too long: "_s, $$str(actualLength), " bytes"_s});
}

int32_t DataOutputStream::size() {
	return this->written;
}

DataOutputStream::DataOutputStream() {
}

$Class* DataOutputStream::load$($String* name, bool initialize) {
	$loadClass(DataOutputStream, name, initialize, &_DataOutputStream_ClassInfo_, allocate$DataOutputStream);
	return class$;
}

$Class* DataOutputStream::class$ = nullptr;

	} // io
} // java