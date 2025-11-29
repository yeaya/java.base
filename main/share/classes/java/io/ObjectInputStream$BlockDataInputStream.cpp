#include <java/io/ObjectInputStream$BlockDataInputStream.h>

#include <java/io/Bits.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream$PeekInputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/io/UTFDataFormatException.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef CHAR_BUF_SIZE
#undef HEADER_BLOCKED
#undef MAX_BLOCK_SIZE
#undef MAX_HEADER_SIZE
#undef MAX_VALUE

using $Bits = ::java::io::Bits;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$PeekInputStream = ::java::io::ObjectInputStream$PeekInputStream;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $UTFDataFormatException = ::java::io::UTFDataFormatException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectInputStream$BlockDataInputStream_FieldInfo_[] = {
	{"this$0", "Ljava/io/ObjectInputStream;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectInputStream$BlockDataInputStream, this$0)},
	{"MAX_BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInputStream$BlockDataInputStream, MAX_BLOCK_SIZE)},
	{"MAX_HEADER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInputStream$BlockDataInputStream, MAX_HEADER_SIZE)},
	{"CHAR_BUF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInputStream$BlockDataInputStream, CHAR_BUF_SIZE)},
	{"HEADER_BLOCKED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectInputStream$BlockDataInputStream, HEADER_BLOCKED)},
	{"buf", "[B", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$BlockDataInputStream, buf)},
	{"hbuf", "[B", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$BlockDataInputStream, hbuf)},
	{"cbuf", "[C", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$BlockDataInputStream, cbuf)},
	{"blkmode", "Z", nullptr, $PRIVATE, $field(ObjectInputStream$BlockDataInputStream, blkmode)},
	{"pos", "I", nullptr, $PRIVATE, $field(ObjectInputStream$BlockDataInputStream, pos)},
	{"end", "I", nullptr, $PRIVATE, $field(ObjectInputStream$BlockDataInputStream, end)},
	{"unread", "I", nullptr, $PRIVATE, $field(ObjectInputStream$BlockDataInputStream, unread)},
	{"in", "Ljava/io/ObjectInputStream$PeekInputStream;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$BlockDataInputStream, in)},
	{"din", "Ljava/io/DataInputStream;", nullptr, $PRIVATE | $FINAL, $field(ObjectInputStream$BlockDataInputStream, din)},
	{}
};

$MethodInfo _ObjectInputStream$BlockDataInputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/ObjectInputStream;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(ObjectInputStream$BlockDataInputStream::*)($ObjectInputStream*,$InputStream*)>(&ObjectInputStream$BlockDataInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"currentBlockRemaining", "()I", nullptr, 0},
	{"getBlockDataMode", "()Z", nullptr, 0},
	{"getBytesRead", "()J", nullptr, 0},
	{"peek", "()I", nullptr, 0, nullptr, "java.io.IOException"},
	{"peekByte", "()B", nullptr, 0, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BIIZ)I", nullptr, 0, nullptr, "java.io.IOException"},
	{"readBlockHeader", "(Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ObjectInputStream$BlockDataInputStream::*)(bool)>(&ObjectInputStream$BlockDataInputStream::readBlockHeader)), "java.io.IOException"},
	{"readBoolean", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readBooleans", "([ZII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readByte", "()B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readChar", "()C", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readChars", "([CII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readDouble", "()D", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readDoubles", "([DII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readFloat", "()F", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFloats", "([FII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readFully", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([BIIZ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readInts", "([III)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readLong", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readLongUTF", "()Ljava/lang/String;", nullptr, 0, nullptr, "java.io.IOException"},
	{"readLongs", "([JII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readShort", "()S", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readShorts", "([SII)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUTFBody", "(J)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ObjectInputStream$BlockDataInputStream::*)(int64_t)>(&ObjectInputStream$BlockDataInputStream::readUTFBody)), "java.io.IOException"},
	{"readUTFChar", "(Ljava/lang/StringBuilder;J)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ObjectInputStream$BlockDataInputStream::*)($StringBuilder*,int64_t)>(&ObjectInputStream$BlockDataInputStream::readUTFChar)), "java.io.IOException"},
	{"readUTFSpan", "(Ljava/lang/StringBuilder;J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(ObjectInputStream$BlockDataInputStream::*)($StringBuilder*,int64_t)>(&ObjectInputStream$BlockDataInputStream::readUTFSpan)), "java.io.IOException"},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"refill", "()V", nullptr, $PRIVATE, $method(static_cast<void(ObjectInputStream$BlockDataInputStream::*)()>(&ObjectInputStream$BlockDataInputStream::refill)), "java.io.IOException"},
	{"setBlockDataMode", "(Z)Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skipBlockData", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"skipBytes", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectInputStream$BlockDataInputStream_InnerClassesInfo_[] = {
	{"java.io.ObjectInputStream$BlockDataInputStream", "java.io.ObjectInputStream", "BlockDataInputStream", $PRIVATE},
	{}
};

$ClassInfo _ObjectInputStream$BlockDataInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectInputStream$BlockDataInputStream",
	"java.io.InputStream",
	"java.io.DataInput",
	_ObjectInputStream$BlockDataInputStream_FieldInfo_,
	_ObjectInputStream$BlockDataInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputStream$BlockDataInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputStream"
};

$Object* allocate$ObjectInputStream$BlockDataInputStream($Class* clazz) {
	return $of($alloc(ObjectInputStream$BlockDataInputStream));
}

int32_t ObjectInputStream$BlockDataInputStream::hashCode() {
	 return this->$InputStream::hashCode();
}

bool ObjectInputStream$BlockDataInputStream::equals(Object$* obj) {
	 return this->$InputStream::equals(obj);
}

$Object* ObjectInputStream$BlockDataInputStream::clone() {
	 return this->$InputStream::clone();
}

$String* ObjectInputStream$BlockDataInputStream::toString() {
	 return this->$InputStream::toString();
}

void ObjectInputStream$BlockDataInputStream::finalize() {
	this->$InputStream::finalize();
}

void ObjectInputStream$BlockDataInputStream::init$($ObjectInputStream* this$0, $InputStream* in) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, buf, $new($bytes, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE));
	$set(this, hbuf, $new($bytes, ObjectInputStream$BlockDataInputStream::MAX_HEADER_SIZE));
	$set(this, cbuf, $new($chars, ObjectInputStream$BlockDataInputStream::CHAR_BUF_SIZE));
	this->blkmode = false;
	this->pos = 0;
	this->end = -1;
	this->unread = 0;
	$set(this, in, $new($ObjectInputStream$PeekInputStream, in));
	$set(this, din, $new($DataInputStream, this));
}

bool ObjectInputStream$BlockDataInputStream::setBlockDataMode(bool newmode) {
	if (this->blkmode == newmode) {
		return this->blkmode;
	}
	if (newmode) {
		this->pos = 0;
		this->end = 0;
		this->unread = 0;
	} else if (this->pos < this->end) {
		$throwNew($IllegalStateException, "unread block data"_s);
	}
	this->blkmode = newmode;
	return !this->blkmode;
}

bool ObjectInputStream$BlockDataInputStream::getBlockDataMode() {
	return this->blkmode;
}

void ObjectInputStream$BlockDataInputStream::skipBlockData() {
	if (!this->blkmode) {
		$throwNew($IllegalStateException, "not in block data mode"_s);
	}
	while (this->end >= 0) {
		refill();
	}
}

int32_t ObjectInputStream$BlockDataInputStream::readBlockHeader(bool canBlock) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->defaultDataEnd) {
		return -1;
	}
	try {
		for (;;) {
			int32_t avail = canBlock ? $Integer::MAX_VALUE : $nc(this->in)->available();
			if (avail == 0) {
				return ObjectInputStream$BlockDataInputStream::HEADER_BLOCKED;
			}
			int32_t tc = $nc(this->in)->peek();
			{
				int32_t len = 0;
				switch (tc) {
				case 119:
					{
						if (avail < 2) {
							return ObjectInputStream$BlockDataInputStream::HEADER_BLOCKED;
						}
						$nc(this->in)->readFully(this->hbuf, 0, 2);
						return (int32_t)($nc(this->hbuf)->get(1) & (uint32_t)255);
					}
				case 122:
					{
						if (avail < 5) {
							return ObjectInputStream$BlockDataInputStream::HEADER_BLOCKED;
						}
						$nc(this->in)->readFully(this->hbuf, 0, 5);
						len = $Bits::getInt(this->hbuf, 1);
						if (len < 0) {
							$throwNew($StreamCorruptedException, $$str({"illegal block data header length: "_s, $$str(len)}));
						}
						return len;
					}
				case 121:
					{
						$nc(this->in)->read();
						this->this$0->handleReset();
						break;
					}
				default:
					{
						if (tc >= 0 && (tc < (int8_t)112 || tc > (int8_t)126)) {
							$throwNew($StreamCorruptedException, $($String::format("invalid type code: %02X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(tc)))}))));
						}
						return -1;
					}
				}
			}
		}
	} catch ($EOFException& ex) {
		$throwNew($StreamCorruptedException, "unexpected EOF while reading block data header"_s);
	}
	$shouldNotReachHere();
}

void ObjectInputStream$BlockDataInputStream::refill() {
	try {
		do {
			this->pos = 0;
			if (this->unread > 0) {
				int32_t n = $nc(this->in)->read(this->buf, 0, $Math::min(this->unread, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE));
				if (n >= 0) {
					this->end = n;
					this->unread -= n;
				} else {
					$throwNew($StreamCorruptedException, "unexpected EOF in middle of data block"_s);
				}
			} else {
				int32_t n = readBlockHeader(true);
				if (n >= 0) {
					this->end = 0;
					this->unread = n;
				} else {
					this->end = -1;
					this->unread = 0;
				}
			}
		} while (this->pos == this->end);
	} catch ($IOException& ex) {
		this->pos = 0;
		this->end = -1;
		this->unread = 0;
		$throw(ex);
	}
}

int32_t ObjectInputStream$BlockDataInputStream::currentBlockRemaining() {
	if (this->blkmode) {
		return (this->end >= 0) ? (this->end - this->pos) + this->unread : 0;
	} else {
		$throwNew($IllegalStateException);
	}
}

int32_t ObjectInputStream$BlockDataInputStream::peek() {
	if (this->blkmode) {
		if (this->pos == this->end) {
			refill();
		}
		return (this->end >= 0) ? ((int32_t)($nc(this->buf)->get(this->pos) & (uint32_t)255)) : -1;
	} else {
		return $nc(this->in)->peek();
	}
}

int8_t ObjectInputStream$BlockDataInputStream::peekByte() {
	int32_t val = peek();
	if (val < 0) {
		$throwNew($EOFException);
	}
	return (int8_t)val;
}

int32_t ObjectInputStream$BlockDataInputStream::read() {
	if (this->blkmode) {
		if (this->pos == this->end) {
			refill();
		}
		return (this->end >= 0) ? ((int32_t)($nc(this->buf)->get(this->pos++) & (uint32_t)255)) : -1;
	} else {
		return $nc(this->in)->read();
	}
}

int32_t ObjectInputStream$BlockDataInputStream::read($bytes* b, int32_t off, int32_t len) {
	return read(b, off, len, false);
}

int64_t ObjectInputStream$BlockDataInputStream::skip(int64_t len) {
	int64_t remain = len;
	while (remain > 0) {
		if (this->blkmode) {
			if (this->pos == this->end) {
				refill();
			}
			if (this->end < 0) {
				break;
			}
			int32_t nread = (int32_t)$Math::min(remain, (int64_t)(this->end - this->pos));
			remain -= nread;
			this->pos += nread;
		} else {
			int32_t nread = (int32_t)$Math::min(remain, (int64_t)ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE);
			if ((nread = $nc(this->in)->read(this->buf, 0, nread)) < 0) {
				break;
			}
			remain -= nread;
		}
	}
	return len - remain;
}

int32_t ObjectInputStream$BlockDataInputStream::available() {
	if (this->blkmode) {
		if ((this->pos == this->end) && (this->unread == 0)) {
			int32_t n = 0;
			while ((n = readBlockHeader(false)) == 0) {
			}
			switch (n) {
			case ObjectInputStream$BlockDataInputStream::HEADER_BLOCKED:
				{
					break;
				}
			case -1:
				{
					this->pos = 0;
					this->end = -1;
					break;
				}
			default:
				{
					this->pos = 0;
					this->end = 0;
					this->unread = n;
					break;
				}
			}
		}
		int32_t unreadAvail = (this->unread > 0) ? $Math::min($nc(this->in)->available(), this->unread) : 0;
		return (this->end >= 0) ? (this->end - this->pos) + unreadAvail : 0;
	} else {
		return $nc(this->in)->available();
	}
}

void ObjectInputStream$BlockDataInputStream::close() {
	if (this->blkmode) {
		this->pos = 0;
		this->end = -1;
		this->unread = 0;
	}
	$nc(this->in)->close();
}

int32_t ObjectInputStream$BlockDataInputStream::read($bytes* b, int32_t off, int32_t len, bool copy) {
	if (len == 0) {
		return 0;
	} else if (this->blkmode) {
		if (this->pos == this->end) {
			refill();
		}
		if (this->end < 0) {
			return -1;
		}
		int32_t nread = $Math::min(len, this->end - this->pos);
		$System::arraycopy(this->buf, this->pos, b, off, nread);
		this->pos += nread;
		return nread;
	} else if (copy) {
		int32_t nread = $nc(this->in)->read(this->buf, 0, $Math::min(len, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE));
		if (nread > 0) {
			$System::arraycopy(this->buf, 0, b, off, nread);
		}
		return nread;
	} else {
		return $nc(this->in)->read(b, off, len);
	}
}

void ObjectInputStream$BlockDataInputStream::readFully($bytes* b) {
	readFully(b, 0, $nc(b)->length, false);
}

void ObjectInputStream$BlockDataInputStream::readFully($bytes* b, int32_t off, int32_t len) {
	readFully(b, off, len, false);
}

void ObjectInputStream$BlockDataInputStream::readFully($bytes* b, int32_t off, int32_t len, bool copy) {
	while (len > 0) {
		int32_t n = read(b, off, len, copy);
		if (n < 0) {
			$throwNew($EOFException);
		}
		off += n;
		len -= n;
	}
}

int32_t ObjectInputStream$BlockDataInputStream::skipBytes(int32_t n) {
	return $nc(this->din)->skipBytes(n);
}

bool ObjectInputStream$BlockDataInputStream::readBoolean() {
	int32_t v = read();
	if (v < 0) {
		$throwNew($EOFException);
	}
	return (v != 0);
}

int8_t ObjectInputStream$BlockDataInputStream::readByte() {
	int32_t v = read();
	if (v < 0) {
		$throwNew($EOFException);
	}
	return (int8_t)v;
}

int32_t ObjectInputStream$BlockDataInputStream::readUnsignedByte() {
	int32_t v = read();
	if (v < 0) {
		$throwNew($EOFException);
	}
	return v;
}

char16_t ObjectInputStream$BlockDataInputStream::readChar() {
	if (!this->blkmode) {
		this->pos = 0;
		$nc(this->in)->readFully(this->buf, 0, 2);
	} else if (this->end - this->pos < 2) {
		return $nc(this->din)->readChar();
	}
	char16_t v = $Bits::getChar(this->buf, this->pos);
	this->pos += 2;
	return v;
}

int16_t ObjectInputStream$BlockDataInputStream::readShort() {
	if (!this->blkmode) {
		this->pos = 0;
		$nc(this->in)->readFully(this->buf, 0, 2);
	} else if (this->end - this->pos < 2) {
		return $nc(this->din)->readShort();
	}
	int16_t v = $Bits::getShort(this->buf, this->pos);
	this->pos += 2;
	return v;
}

int32_t ObjectInputStream$BlockDataInputStream::readUnsignedShort() {
	if (!this->blkmode) {
		this->pos = 0;
		$nc(this->in)->readFully(this->buf, 0, 2);
	} else if (this->end - this->pos < 2) {
		return $nc(this->din)->readUnsignedShort();
	}
	int32_t v = (int32_t)($Bits::getShort(this->buf, this->pos) & (uint32_t)0x0000FFFF);
	this->pos += 2;
	return v;
}

int32_t ObjectInputStream$BlockDataInputStream::readInt() {
	if (!this->blkmode) {
		this->pos = 0;
		$nc(this->in)->readFully(this->buf, 0, 4);
	} else if (this->end - this->pos < 4) {
		return $nc(this->din)->readInt();
	}
	int32_t v = $Bits::getInt(this->buf, this->pos);
	this->pos += 4;
	return v;
}

float ObjectInputStream$BlockDataInputStream::readFloat() {
	if (!this->blkmode) {
		this->pos = 0;
		$nc(this->in)->readFully(this->buf, 0, 4);
	} else if (this->end - this->pos < 4) {
		return $nc(this->din)->readFloat();
	}
	float v = $Bits::getFloat(this->buf, this->pos);
	this->pos += 4;
	return v;
}

int64_t ObjectInputStream$BlockDataInputStream::readLong() {
	if (!this->blkmode) {
		this->pos = 0;
		$nc(this->in)->readFully(this->buf, 0, 8);
	} else if (this->end - this->pos < 8) {
		return $nc(this->din)->readLong();
	}
	int64_t v = $Bits::getLong(this->buf, this->pos);
	this->pos += 8;
	return v;
}

double ObjectInputStream$BlockDataInputStream::readDouble() {
	if (!this->blkmode) {
		this->pos = 0;
		$nc(this->in)->readFully(this->buf, 0, 8);
	} else if (this->end - this->pos < 8) {
		return $nc(this->din)->readDouble();
	}
	double v = $Bits::getDouble(this->buf, this->pos);
	this->pos += 8;
	return v;
}

$String* ObjectInputStream$BlockDataInputStream::readUTF() {
	return readUTFBody(readUnsignedShort());
}

$String* ObjectInputStream$BlockDataInputStream::readLine() {
	return $nc(this->din)->readLine();
}

void ObjectInputStream$BlockDataInputStream::readBooleans($booleans* v, int32_t off, int32_t len) {
	int32_t stop = 0;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (!this->blkmode) {
			int32_t span = $Math::min(endoff - off, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE);
			$nc(this->in)->readFully(this->buf, 0, span);
			stop = off + span;
			this->pos = 0;
		} else if (this->end - this->pos < 1) {
			$nc(v)->set(off++, $nc(this->din)->readBoolean());
			continue;
		} else {
			stop = $Math::min(endoff, off + this->end - this->pos);
		}
		while (off < stop) {
			$nc(v)->set(off++, $Bits::getBoolean(this->buf, this->pos++));
		}
	}
}

void ObjectInputStream$BlockDataInputStream::readChars($chars* v, int32_t off, int32_t len) {
	int32_t stop = 0;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (!this->blkmode) {
			int32_t span = $Math::min(endoff - off, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE >> 1);
			$nc(this->in)->readFully(this->buf, 0, span << 1);
			stop = off + span;
			this->pos = 0;
		} else if (this->end - this->pos < 2) {
			$nc(v)->set(off++, $nc(this->din)->readChar());
			continue;
		} else {
			stop = $Math::min(endoff, off + ((this->end - this->pos) >> 1));
		}
		while (off < stop) {
			$nc(v)->set(off++, $Bits::getChar(this->buf, this->pos));
			this->pos += 2;
		}
	}
}

void ObjectInputStream$BlockDataInputStream::readShorts($shorts* v, int32_t off, int32_t len) {
	int32_t stop = 0;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (!this->blkmode) {
			int32_t span = $Math::min(endoff - off, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE >> 1);
			$nc(this->in)->readFully(this->buf, 0, span << 1);
			stop = off + span;
			this->pos = 0;
		} else if (this->end - this->pos < 2) {
			$nc(v)->set(off++, $nc(this->din)->readShort());
			continue;
		} else {
			stop = $Math::min(endoff, off + ((this->end - this->pos) >> 1));
		}
		while (off < stop) {
			$nc(v)->set(off++, $Bits::getShort(this->buf, this->pos));
			this->pos += 2;
		}
	}
}

void ObjectInputStream$BlockDataInputStream::readInts($ints* v, int32_t off, int32_t len) {
	int32_t stop = 0;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (!this->blkmode) {
			int32_t span = $Math::min(endoff - off, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE >> 2);
			$nc(this->in)->readFully(this->buf, 0, span << 2);
			stop = off + span;
			this->pos = 0;
		} else if (this->end - this->pos < 4) {
			$nc(v)->set(off++, $nc(this->din)->readInt());
			continue;
		} else {
			stop = $Math::min(endoff, off + ((this->end - this->pos) >> 2));
		}
		while (off < stop) {
			$nc(v)->set(off++, $Bits::getInt(this->buf, this->pos));
			this->pos += 4;
		}
	}
}

void ObjectInputStream$BlockDataInputStream::readFloats($floats* v, int32_t off, int32_t len) {
	int32_t stop = 0;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (!this->blkmode) {
			int32_t span = $Math::min(endoff - off, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE >> 2);
			$nc(this->in)->readFully(this->buf, 0, span << 2);
			stop = off + span;
			this->pos = 0;
		} else if (this->end - this->pos < 4) {
			$nc(v)->set(off++, $nc(this->din)->readFloat());
			continue;
		} else {
			stop = $Math::min(endoff, ((this->end - this->pos) >> 2));
		}
		while (off < stop) {
			$nc(v)->set(off++, $Bits::getFloat(this->buf, this->pos));
			this->pos += 4;
		}
	}
}

void ObjectInputStream$BlockDataInputStream::readLongs($longs* v, int32_t off, int32_t len) {
	int32_t stop = 0;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (!this->blkmode) {
			int32_t span = $Math::min(endoff - off, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE >> 3);
			$nc(this->in)->readFully(this->buf, 0, span << 3);
			stop = off + span;
			this->pos = 0;
		} else if (this->end - this->pos < 8) {
			$nc(v)->set(off++, $nc(this->din)->readLong());
			continue;
		} else {
			stop = $Math::min(endoff, off + ((this->end - this->pos) >> 3));
		}
		while (off < stop) {
			$nc(v)->set(off++, $Bits::getLong(this->buf, this->pos));
			this->pos += 8;
		}
	}
}

void ObjectInputStream$BlockDataInputStream::readDoubles($doubles* v, int32_t off, int32_t len) {
	int32_t stop = 0;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (!this->blkmode) {
			int32_t span = $Math::min(endoff - off, ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE >> 3);
			$nc(this->in)->readFully(this->buf, 0, span << 3);
			stop = off + span;
			this->pos = 0;
		} else if (this->end - this->pos < 8) {
			$nc(v)->set(off++, $nc(this->din)->readDouble());
			continue;
		} else {
			stop = $Math::min(endoff - off, ((this->end - this->pos) >> 3));
		}
		while (off < stop) {
			$nc(v)->set(off++, $Bits::getDouble(this->buf, this->pos));
			this->pos += 8;
		}
	}
}

$String* ObjectInputStream$BlockDataInputStream::readLongUTF() {
	return readUTFBody(readLong());
}

$String* ObjectInputStream$BlockDataInputStream::readUTFBody(int64_t utflen) {
	$var($StringBuilder, sbuf, nullptr);
	if (utflen > 0 && utflen < $Integer::MAX_VALUE) {
		int32_t initialCapacity = $Math::min((int32_t)utflen, 0x0000FFFF);
		$assign(sbuf, $new($StringBuilder, initialCapacity));
	} else {
		$assign(sbuf, $new($StringBuilder));
	}
	if (!this->blkmode) {
		this->end = (this->pos = 0);
	}
	while (utflen > 0) {
		int32_t avail = this->end - this->pos;
		if (avail >= 3 || (int64_t)avail == utflen) {
			utflen -= readUTFSpan(sbuf, utflen);
		} else if (this->blkmode) {
			utflen -= readUTFChar(sbuf, utflen);
		} else {
			if (avail > 0) {
				$System::arraycopy(this->buf, this->pos, this->buf, 0, avail);
			}
			this->pos = 0;
			this->end = (int32_t)$Math::min((int64_t)ObjectInputStream$BlockDataInputStream::MAX_BLOCK_SIZE, utflen);
			$nc(this->in)->readFully(this->buf, avail, this->end - avail);
		}
	}
	return $nc(sbuf)->toString();
}

int64_t ObjectInputStream$BlockDataInputStream::readUTFSpan($StringBuilder* sbuf, int64_t utflen) {
	int32_t cpos = 0;
	int32_t start = this->pos;
	int32_t avail = $Math::min(this->end - this->pos, ObjectInputStream$BlockDataInputStream::CHAR_BUF_SIZE);
	int32_t stop = this->pos + ((utflen > avail) ? avail - 2 : (int32_t)utflen);
	bool outOfBounds = false;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				while (this->pos < stop) {
					int32_t b1 = 0;
					int32_t b2 = 0;
					int32_t b3 = 0;
					b1 = (int32_t)($nc(this->buf)->get(this->pos++) & (uint32_t)255);
					switch (b1 >> 4) {
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
							$nc(this->cbuf)->set(cpos++, (char16_t)b1);
							break;
						}
					case 12:
						{}
					case 13:
						{
							{
								b2 = $nc(this->buf)->get(this->pos++);
								if (((int32_t)(b2 & (uint32_t)192)) != 128) {
									$throwNew($UTFDataFormatException);
								}
								$nc(this->cbuf)->set(cpos++, (char16_t)((((int32_t)(b1 & (uint32_t)31)) << 6) | (((int32_t)(b2 & (uint32_t)63)) << 0)));
							}
							break;
						}
					case 14:
						{
							{
								b3 = $nc(this->buf)->get(this->pos + 1);
								b2 = $nc(this->buf)->get(this->pos + 0);
								this->pos += 2;
								if (((int32_t)(b2 & (uint32_t)192)) != 128 || ((int32_t)(b3 & (uint32_t)192)) != 128) {
									$throwNew($UTFDataFormatException);
								}
								$nc(this->cbuf)->set(cpos++, (char16_t)(((((int32_t)(b1 & (uint32_t)15)) << 12) | (((int32_t)(b2 & (uint32_t)63)) << 6)) | (((int32_t)(b3 & (uint32_t)63)) << 0)));
							}
							break;
						}
					default:
						{
							$throwNew($UTFDataFormatException);
						}
					}
				}
			} catch ($ArrayIndexOutOfBoundsException& ex) {
				outOfBounds = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (outOfBounds || (this->pos - start) > utflen) {
				this->pos = start + (int32_t)utflen;
				$throwNew($UTFDataFormatException);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$nc(sbuf)->append(this->cbuf, 0, cpos);
	return this->pos - start;
}

int32_t ObjectInputStream$BlockDataInputStream::readUTFChar($StringBuilder* sbuf, int64_t utflen) {
	int32_t b1 = 0;
	int32_t b2 = 0;
	int32_t b3 = 0;
	b1 = (int32_t)(readByte() & (uint32_t)255);
	switch (b1 >> 4) {
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
				$nc(sbuf)->append((char16_t)b1);
				return 1;
			}
		}
	case 12:
		{}
	case 13:
		{
			{
				if (utflen < 2) {
					$throwNew($UTFDataFormatException);
				}
				b2 = readByte();
				if (((int32_t)(b2 & (uint32_t)192)) != 128) {
					$throwNew($UTFDataFormatException);
				}
				$nc(sbuf)->append((char16_t)((((int32_t)(b1 & (uint32_t)31)) << 6) | (((int32_t)(b2 & (uint32_t)63)) << 0)));
				return 2;
			}
		}
	case 14:
		{
			{
				if (utflen < 3) {
					if (utflen == 2) {
						readByte();
					}
					$throwNew($UTFDataFormatException);
				}
				b2 = readByte();
				b3 = readByte();
				if (((int32_t)(b2 & (uint32_t)192)) != 128 || ((int32_t)(b3 & (uint32_t)192)) != 128) {
					$throwNew($UTFDataFormatException);
				}
				$nc(sbuf)->append((char16_t)(((((int32_t)(b1 & (uint32_t)15)) << 12) | (((int32_t)(b2 & (uint32_t)63)) << 6)) | (((int32_t)(b3 & (uint32_t)63)) << 0)));
				return 3;
			}
		}
	default:
		{
			$throwNew($UTFDataFormatException);
		}
	}
}

int64_t ObjectInputStream$BlockDataInputStream::getBytesRead() {
	return $nc(this->in)->getBytesRead();
}

ObjectInputStream$BlockDataInputStream::ObjectInputStream$BlockDataInputStream() {
}

$Class* ObjectInputStream$BlockDataInputStream::load$($String* name, bool initialize) {
	$loadClass(ObjectInputStream$BlockDataInputStream, name, initialize, &_ObjectInputStream$BlockDataInputStream_ClassInfo_, allocate$ObjectInputStream$BlockDataInputStream);
	return class$;
}

$Class* ObjectInputStream$BlockDataInputStream::class$ = nullptr;

	} // io
} // java