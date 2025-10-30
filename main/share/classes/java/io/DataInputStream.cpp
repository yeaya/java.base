#include <java/io/DataInputStream.h>

#include <java/io/DataInput.h>
#include <java/io/EOFException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PushbackInputStream.h>
#include <java/io/UTFDataFormatException.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $DataInput = ::java::io::DataInput;
using $EOFException = ::java::io::EOFException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $PushbackInputStream = ::java::io::PushbackInputStream;
using $UTFDataFormatException = ::java::io::UTFDataFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace io {

$CompoundAttribute _DataInputStream_MethodAnnotations_readLine11[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DataInputStream_FieldInfo_[] = {
	{"bytearr", "[B", nullptr, $PRIVATE, $field(DataInputStream, bytearr)},
	{"chararr", "[C", nullptr, $PRIVATE, $field(DataInputStream, chararr)},
	{"readBuffer", "[B", nullptr, $PRIVATE, $field(DataInputStream, readBuffer)},
	{"lineBuffer", "[C", nullptr, $PRIVATE, $field(DataInputStream, lineBuffer)},
	{}
};

$MethodInfo _DataInputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DataInputStream::*)($InputStream*)>(&DataInputStream::init$))},
	{"read", "([B)I", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readBoolean", "()Z", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readByte", "()B", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readChar", "()C", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readDouble", "()D", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readFloat", "()F", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readFully", "([B)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readFully", "([BII)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _DataInputStream_MethodAnnotations_readLine11},
	{"readLong", "()J", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readShort", "()S", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readUTF", "(Ljava/io/DataInput;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)($DataInput*)>(&DataInputStream::readUTF)), "java.io.IOException"},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"skipBytes", "(I)I", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DataInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.DataInputStream",
	"java.io.FilterInputStream",
	"java.io.DataInput",
	_DataInputStream_FieldInfo_,
	_DataInputStream_MethodInfo_
};

$Object* allocate$DataInputStream($Class* clazz) {
	return $of($alloc(DataInputStream));
}

int32_t DataInputStream::hashCode() {
	 return this->$FilterInputStream::hashCode();
}

bool DataInputStream::equals(Object$* obj) {
	 return this->$FilterInputStream::equals(obj);
}

$Object* DataInputStream::clone() {
	 return this->$FilterInputStream::clone();
}

$String* DataInputStream::toString() {
	 return this->$FilterInputStream::toString();
}

void DataInputStream::finalize() {
	this->$FilterInputStream::finalize();
}

void DataInputStream::init$($InputStream* in) {
	$FilterInputStream::init$(in);
	$set(this, bytearr, $new($bytes, 80));
	$set(this, chararr, $new($chars, 80));
	$set(this, readBuffer, $new($bytes, 8));
}

int32_t DataInputStream::read($bytes* b) {
	return $nc(this->in)->read(b, 0, $nc(b)->length);
}

int32_t DataInputStream::read($bytes* b, int32_t off, int32_t len) {
	return $nc(this->in)->read(b, off, len);
}

void DataInputStream::readFully($bytes* b) {
	readFully(b, 0, $nc(b)->length);
}

void DataInputStream::readFully($bytes* b, int32_t off, int32_t len) {
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	int32_t n = 0;
	while (n < len) {
		int32_t count = $nc(this->in)->read(b, off + n, len - n);
		if (count < 0) {
			$throwNew($EOFException);
		}
		n += count;
	}
}

int32_t DataInputStream::skipBytes(int32_t n) {
	int32_t total = 0;
	int32_t cur = 0;
	while ((total < n) && ((cur = (int32_t)$nc(this->in)->skip(n - total)) > 0)) {
		total += cur;
	}
	return total;
}

bool DataInputStream::readBoolean() {
	int32_t ch = $nc(this->in)->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return (ch != 0);
}

int8_t DataInputStream::readByte() {
	int32_t ch = $nc(this->in)->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return (int8_t)(ch);
}

int32_t DataInputStream::readUnsignedByte() {
	int32_t ch = $nc(this->in)->read();
	if (ch < 0) {
		$throwNew($EOFException);
	}
	return ch;
}

int16_t DataInputStream::readShort() {
	int32_t ch1 = $nc(this->in)->read();
	int32_t ch2 = $nc(this->in)->read();
	if ((ch1 | ch2) < 0) {
		$throwNew($EOFException);
	}
	return (int16_t)((ch1 << 8) + (ch2 << 0));
}

int32_t DataInputStream::readUnsignedShort() {
	int32_t ch1 = $nc(this->in)->read();
	int32_t ch2 = $nc(this->in)->read();
	if ((ch1 | ch2) < 0) {
		$throwNew($EOFException);
	}
	return (ch1 << 8) + (ch2 << 0);
}

char16_t DataInputStream::readChar() {
	int32_t ch1 = $nc(this->in)->read();
	int32_t ch2 = $nc(this->in)->read();
	if ((ch1 | ch2) < 0) {
		$throwNew($EOFException);
	}
	return (char16_t)((ch1 << 8) + (ch2 << 0));
}

int32_t DataInputStream::readInt() {
	int32_t ch1 = $nc(this->in)->read();
	int32_t ch2 = $nc(this->in)->read();
	int32_t ch3 = $nc(this->in)->read();
	int32_t ch4 = $nc(this->in)->read();
	if ((((ch1 | ch2) | ch3) | ch4) < 0) {
		$throwNew($EOFException);
	}
	return ((ch1 << 24) + (ch2 << 16) + (ch3 << 8) + (ch4 << 0));
}

int64_t DataInputStream::readLong() {
	readFully(this->readBuffer, 0, 8);
	return (((int64_t)$nc(this->readBuffer)->get(0) << 56) + ((int64_t)((int32_t)($nc(this->readBuffer)->get(1) & (uint32_t)255)) << 48) + ((int64_t)((int32_t)($nc(this->readBuffer)->get(2) & (uint32_t)255)) << 40) + ((int64_t)((int32_t)($nc(this->readBuffer)->get(3) & (uint32_t)255)) << 32) + ((int64_t)((int32_t)($nc(this->readBuffer)->get(4) & (uint32_t)255)) << 24) + (((int32_t)($nc(this->readBuffer)->get(5) & (uint32_t)255)) << 16) + (((int32_t)($nc(this->readBuffer)->get(6) & (uint32_t)255)) << 8) + (((int32_t)($nc(this->readBuffer)->get(7) & (uint32_t)255)) << 0));
}

float DataInputStream::readFloat() {
	return $Float::intBitsToFloat(readInt());
}

double DataInputStream::readDouble() {
	return $Double::longBitsToDouble(readLong());
}

$String* DataInputStream::readLine() {
	$var($chars, buf, this->lineBuffer);
	if (buf == nullptr) {
		$assign(buf, ($set(this, lineBuffer, $new($chars, 128))));
	}
	int32_t room = $nc(buf)->length;
	int32_t offset = 0;
	int32_t c = 0;
	bool loop$break = false;
	while (true) {
		{
			int32_t c2 = 0;
			switch (c = $nc(this->in)->read()) {
			case -1:
				{}
			case u'\n':
				{
					loop$break = true;
					break;
				}
			case u'\r':
				{
					c2 = $nc(this->in)->read();
					if ((c2 != u'\n') && (c2 != -1)) {
						if (!($instanceOf($PushbackInputStream, this->in))) {
							$set(this, in, $new($PushbackInputStream, this->in));
						}
						$nc(($cast($PushbackInputStream, this->in)))->unread(c2);
					}
					loop$break = true;
					break;
				}
			default:
				{
					if (--room < 0) {
						$assign(buf, $new($chars, offset + 128));
						room = buf->length - offset - 1;
						$System::arraycopy(this->lineBuffer, 0, buf, 0, offset);
						$set(this, lineBuffer, buf);
					}
					buf->set(offset++, (char16_t)c);
					break;
				}
			}

			if (loop$break) {
				break;
			}
		}
	}
	if ((c == -1) && (offset == 0)) {
		return nullptr;
	}
	return $String::copyValueOf(buf, 0, offset);
}

$String* DataInputStream::readUTF() {
	return readUTF(this);
}

$String* DataInputStream::readUTF($DataInput* in) {
	$init(DataInputStream);
	$useLocalCurrentObjectStackCache();
	int32_t utflen = $nc(in)->readUnsignedShort();
	$var($bytes, bytearr, nullptr);
	$var($chars, chararr, nullptr);
	{
		$var(DataInputStream, dis, nullptr);
		bool var$0 = $instanceOf(DataInputStream, in);
		if (var$0) {
			$assign(dis, $cast(DataInputStream, in));
			var$0 = true;
		}
		if (var$0) {
			if ($nc($nc(dis)->bytearr)->length < utflen) {
				$set(dis, bytearr, $new($bytes, utflen * 2));
				$set(dis, chararr, $new($chars, utflen * 2));
			}
			$assign(chararr, $nc(dis)->chararr);
			$assign(bytearr, dis->bytearr);
		} else {
			$assign(bytearr, $new($bytes, utflen));
			$assign(chararr, $new($chars, utflen));
		}
	}
	int32_t c = 0;
	int32_t char2 = 0;
	int32_t char3 = 0;
	int32_t count = 0;
	int32_t chararr_count = 0;
	in->readFully(bytearr, 0, utflen);
	while (count < utflen) {
		c = (int32_t)((int32_t)$nc(bytearr)->get(count) & (uint32_t)255);
		if (c > 127) {
			break;
		}
		++count;
		$nc(chararr)->set(chararr_count++, (char16_t)c);
	}
	while (count < utflen) {
		c = (int32_t)((int32_t)$nc(bytearr)->get(count) & (uint32_t)255);
		switch (c >> 4) {
		case 0:
			{}
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{}
		case 7:
			{
				{
					++count;
					$nc(chararr)->set(chararr_count++, (char16_t)c);
				}
				break;
			}
		case 12:
			{}
		case 13:
			{
				{
					count += 2;
					if (count > utflen) {
						$throwNew($UTFDataFormatException, "malformed input: partial character at end"_s);
					}
					char2 = (int32_t)bytearr->get(count - 1);
					if (((int32_t)(char2 & (uint32_t)192)) != 128) {
						$throwNew($UTFDataFormatException, $$str({"malformed input around byte "_s, $$str(count)}));
					}
					$nc(chararr)->set(chararr_count++, (char16_t)((((int32_t)(c & (uint32_t)31)) << 6) | ((int32_t)(char2 & (uint32_t)63))));
				}
				break;
			}
		case 14:
			{
				{
					count += 3;
					if (count > utflen) {
						$throwNew($UTFDataFormatException, "malformed input: partial character at end"_s);
					}
					char2 = (int32_t)bytearr->get(count - 2);
					char3 = (int32_t)bytearr->get(count - 1);
					if ((((int32_t)(char2 & (uint32_t)192)) != 128) || (((int32_t)(char3 & (uint32_t)192)) != 128)) {
						$throwNew($UTFDataFormatException, $$str({"malformed input around byte "_s, $$str((count - 1))}));
					}
					$nc(chararr)->set(chararr_count++, (char16_t)(((((int32_t)(c & (uint32_t)15)) << 12) | (((int32_t)(char2 & (uint32_t)63)) << 6)) | (((int32_t)(char3 & (uint32_t)63)) << 0)));
				}
				break;
			}
		default:
			{
				$throwNew($UTFDataFormatException, $$str({"malformed input around byte "_s, $$str(count)}));
			}
		}
	}
	return $new($String, chararr, 0, chararr_count);
}

DataInputStream::DataInputStream() {
}

$Class* DataInputStream::load$($String* name, bool initialize) {
	$loadClass(DataInputStream, name, initialize, &_DataInputStream_ClassInfo_, allocate$DataInputStream);
	return class$;
}

$Class* DataInputStream::class$ = nullptr;

	} // io
} // java