#include <java/io/ObjectOutputStream$BlockDataOutputStream.h>

#include <java/io/Bits.h>
#include <java/io/DataOutputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/UTFDataFormatException.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef CHAR_BUF_SIZE
#undef MAX_BLOCK_SIZE
#undef MAX_HEADER_SIZE

using $Bits = ::java::io::Bits;
using $DataOutputStream = ::java::io::DataOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $UTFDataFormatException = ::java::io::UTFDataFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectOutputStream$BlockDataOutputStream_FieldInfo_[] = {
	{"MAX_BLOCK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectOutputStream$BlockDataOutputStream, MAX_BLOCK_SIZE)},
	{"MAX_HEADER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectOutputStream$BlockDataOutputStream, MAX_HEADER_SIZE)},
	{"CHAR_BUF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectOutputStream$BlockDataOutputStream, CHAR_BUF_SIZE)},
	{"buf", "[B", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$BlockDataOutputStream, buf)},
	{"hbuf", "[B", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$BlockDataOutputStream, hbuf)},
	{"cbuf", "[C", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$BlockDataOutputStream, cbuf)},
	{"blkmode", "Z", nullptr, $PRIVATE, $field(ObjectOutputStream$BlockDataOutputStream, blkmode)},
	{"pos", "I", nullptr, $PRIVATE, $field(ObjectOutputStream$BlockDataOutputStream, pos)},
	{"out", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$BlockDataOutputStream, out)},
	{"dout", "Ljava/io/DataOutputStream;", nullptr, $PRIVATE | $FINAL, $field(ObjectOutputStream$BlockDataOutputStream, dout)},
	{}
};

$MethodInfo _ObjectOutputStream$BlockDataOutputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(ObjectOutputStream$BlockDataOutputStream, init$, void, $OutputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, close, void), "java.io.IOException"},
	{"drain", "()V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, drain, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, flush, void), "java.io.IOException"},
	{"getBlockDataMode", "()Z", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, getBlockDataMode, bool)},
	{"getUTFLength", "(Ljava/lang/String;)J", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, getUTFLength, int64_t, $String*)},
	{"setBlockDataMode", "(Z)Z", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, setBlockDataMode, bool, bool), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, write, void, int32_t), "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, write, void, $bytes*), "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"write", "([BIIZ)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, write, void, $bytes*, int32_t, int32_t, bool), "java.io.IOException"},
	{"writeBlockHeader", "(I)V", nullptr, $PRIVATE, $method(ObjectOutputStream$BlockDataOutputStream, writeBlockHeader, void, int32_t), "java.io.IOException"},
	{"writeBoolean", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeBoolean, void, bool), "java.io.IOException"},
	{"writeBooleans", "([ZII)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeBooleans, void, $booleans*, int32_t, int32_t), "java.io.IOException"},
	{"writeByte", "(I)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeByte, void, int32_t), "java.io.IOException"},
	{"writeBytes", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeBytes, void, $String*), "java.io.IOException"},
	{"writeChar", "(I)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeChar, void, int32_t), "java.io.IOException"},
	{"writeChars", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeChars, void, $String*), "java.io.IOException"},
	{"writeChars", "([CII)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeChars, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"writeDouble", "(D)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeDouble, void, double), "java.io.IOException"},
	{"writeDoubles", "([DII)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeDoubles, void, $doubles*, int32_t, int32_t), "java.io.IOException"},
	{"writeFloat", "(F)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeFloat, void, float), "java.io.IOException"},
	{"writeFloats", "([FII)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeFloats, void, $floats*, int32_t, int32_t), "java.io.IOException"},
	{"writeInt", "(I)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeInt, void, int32_t), "java.io.IOException"},
	{"writeInts", "([III)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeInts, void, $ints*, int32_t, int32_t), "java.io.IOException"},
	{"writeLong", "(J)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeLong, void, int64_t), "java.io.IOException"},
	{"writeLongUTF", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeLongUTF, void, $String*), "java.io.IOException"},
	{"writeLongUTF", "(Ljava/lang/String;J)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeLongUTF, void, $String*, int64_t), "java.io.IOException"},
	{"writeLongs", "([JII)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeLongs, void, $longs*, int32_t, int32_t), "java.io.IOException"},
	{"writeShort", "(I)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeShort, void, int32_t), "java.io.IOException"},
	{"writeShorts", "([SII)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeShorts, void, $shorts*, int32_t, int32_t), "java.io.IOException"},
	{"writeUTF", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeUTF, void, $String*), "java.io.IOException"},
	{"writeUTF", "(Ljava/lang/String;J)V", nullptr, 0, $virtualMethod(ObjectOutputStream$BlockDataOutputStream, writeUTF, void, $String*, int64_t), "java.io.IOException"},
	{"writeUTFBody", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(ObjectOutputStream$BlockDataOutputStream, writeUTFBody, void, $String*), "java.io.IOException"},
	{}
};

$InnerClassInfo _ObjectOutputStream$BlockDataOutputStream_InnerClassesInfo_[] = {
	{"java.io.ObjectOutputStream$BlockDataOutputStream", "java.io.ObjectOutputStream", "BlockDataOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectOutputStream$BlockDataOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectOutputStream$BlockDataOutputStream",
	"java.io.OutputStream",
	"java.io.DataOutput",
	_ObjectOutputStream$BlockDataOutputStream_FieldInfo_,
	_ObjectOutputStream$BlockDataOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectOutputStream$BlockDataOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectOutputStream"
};

$Object* allocate$ObjectOutputStream$BlockDataOutputStream($Class* clazz) {
	return $of($alloc(ObjectOutputStream$BlockDataOutputStream));
}

int32_t ObjectOutputStream$BlockDataOutputStream::hashCode() {
	 return this->$OutputStream::hashCode();
}

bool ObjectOutputStream$BlockDataOutputStream::equals(Object$* obj) {
	 return this->$OutputStream::equals(obj);
}

$Object* ObjectOutputStream$BlockDataOutputStream::clone() {
	 return this->$OutputStream::clone();
}

$String* ObjectOutputStream$BlockDataOutputStream::toString() {
	 return this->$OutputStream::toString();
}

void ObjectOutputStream$BlockDataOutputStream::finalize() {
	this->$OutputStream::finalize();
}

void ObjectOutputStream$BlockDataOutputStream::init$($OutputStream* out) {
	$OutputStream::init$();
	$set(this, buf, $new($bytes, ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE));
	$set(this, hbuf, $new($bytes, ObjectOutputStream$BlockDataOutputStream::MAX_HEADER_SIZE));
	$set(this, cbuf, $new($chars, ObjectOutputStream$BlockDataOutputStream::CHAR_BUF_SIZE));
	this->blkmode = false;
	this->pos = 0;
	$set(this, out, out);
	$set(this, dout, $new($DataOutputStream, this));
}

bool ObjectOutputStream$BlockDataOutputStream::setBlockDataMode(bool mode) {
	if (this->blkmode == mode) {
		return this->blkmode;
	}
	drain();
	this->blkmode = mode;
	return !this->blkmode;
}

bool ObjectOutputStream$BlockDataOutputStream::getBlockDataMode() {
	return this->blkmode;
}

void ObjectOutputStream$BlockDataOutputStream::write(int32_t b) {
	if (this->pos >= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		drain();
	}
	$nc(this->buf)->set(this->pos++, (int8_t)b);
}

void ObjectOutputStream$BlockDataOutputStream::write($bytes* b) {
	write(b, 0, $nc(b)->length, false);
}

void ObjectOutputStream$BlockDataOutputStream::write($bytes* b, int32_t off, int32_t len) {
	write(b, off, len, false);
}

void ObjectOutputStream$BlockDataOutputStream::flush() {
	drain();
	$nc(this->out)->flush();
}

void ObjectOutputStream$BlockDataOutputStream::close() {
	flush();
	$nc(this->out)->close();
}

void ObjectOutputStream$BlockDataOutputStream::write($bytes* b, int32_t off, int32_t len, bool copy) {
	if (!(copy || this->blkmode)) {
		drain();
		$nc(this->out)->write(b, off, len);
		return;
	}
	while (len > 0) {
		if (this->pos >= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
			drain();
		}
		if (len >= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE && !copy && this->pos == 0) {
			writeBlockHeader(ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE);
			$nc(this->out)->write(b, off, ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE);
			off += ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE;
			len -= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE;
		} else {
			int32_t wlen = $Math::min(len, ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos);
			$System::arraycopy(b, off, this->buf, this->pos, wlen);
			this->pos += wlen;
			off += wlen;
			len -= wlen;
		}
	}
}

void ObjectOutputStream$BlockDataOutputStream::drain() {
	if (this->pos == 0) {
		return;
	}
	if (this->blkmode) {
		writeBlockHeader(this->pos);
	}
	$nc(this->out)->write(this->buf, 0, this->pos);
	this->pos = 0;
}

void ObjectOutputStream$BlockDataOutputStream::writeBlockHeader(int32_t len) {
	if (len <= 255) {
		$nc(this->hbuf)->set(0, (int8_t)119);
		$nc(this->hbuf)->set(1, (int8_t)len);
		$nc(this->out)->write(this->hbuf, 0, 2);
	} else {
		$nc(this->hbuf)->set(0, (int8_t)122);
		$Bits::putInt(this->hbuf, 1, len);
		$nc(this->out)->write(this->hbuf, 0, 5);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeBoolean(bool v) {
	if (this->pos >= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		drain();
	}
	$Bits::putBoolean(this->buf, this->pos++, v);
}

void ObjectOutputStream$BlockDataOutputStream::writeByte(int32_t v) {
	if (this->pos >= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		drain();
	}
	$nc(this->buf)->set(this->pos++, (int8_t)v);
}

void ObjectOutputStream$BlockDataOutputStream::writeChar(int32_t v) {
	if (this->pos + 2 <= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		$Bits::putChar(this->buf, this->pos, (char16_t)v);
		this->pos += 2;
	} else {
		$nc(this->dout)->writeChar(v);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeShort(int32_t v) {
	if (this->pos + 2 <= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		$Bits::putShort(this->buf, this->pos, (int16_t)v);
		this->pos += 2;
	} else {
		$nc(this->dout)->writeShort(v);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeInt(int32_t v) {
	if (this->pos + 4 <= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		$Bits::putInt(this->buf, this->pos, v);
		this->pos += 4;
	} else {
		$nc(this->dout)->writeInt(v);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeFloat(float v) {
	if (this->pos + 4 <= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		$Bits::putFloat(this->buf, this->pos, v);
		this->pos += 4;
	} else {
		$nc(this->dout)->writeFloat(v);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeLong(int64_t v) {
	if (this->pos + 8 <= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		$Bits::putLong(this->buf, this->pos, v);
		this->pos += 8;
	} else {
		$nc(this->dout)->writeLong(v);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeDouble(double v) {
	if (this->pos + 8 <= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
		$Bits::putDouble(this->buf, this->pos, v);
		this->pos += 8;
	} else {
		$nc(this->dout)->writeDouble(v);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeBytes($String* s) {
	int32_t endoff = $nc(s)->length();
	int32_t cpos = 0;
	int32_t csize = 0;
	for (int32_t off = 0; off < endoff;) {
		if (cpos >= csize) {
			cpos = 0;
			csize = $Math::min(endoff - off, ObjectOutputStream$BlockDataOutputStream::CHAR_BUF_SIZE);
			s->getChars(off, off + csize, this->cbuf, 0);
		}
		if (this->pos >= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
			drain();
		}
		int32_t n = $Math::min(csize - cpos, ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos);
		int32_t stop = this->pos + n;
		while (this->pos < stop) {
			$nc(this->buf)->set(this->pos++, (int8_t)$nc(this->cbuf)->get(cpos++));
		}
		off += n;
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeChars($String* s) {
	int32_t endoff = $nc(s)->length();
	for (int32_t off = 0; off < endoff;) {
		int32_t csize = $Math::min(endoff - off, ObjectOutputStream$BlockDataOutputStream::CHAR_BUF_SIZE);
		s->getChars(off, off + csize, this->cbuf, 0);
		writeChars(this->cbuf, 0, csize);
		off += csize;
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeUTF($String* s) {
	writeUTF(s, getUTFLength(s));
}

void ObjectOutputStream$BlockDataOutputStream::writeBooleans($booleans* v, int32_t off, int32_t len) {
	int32_t endoff = off + len;
	while (off < endoff) {
		if (this->pos >= ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE) {
			drain();
		}
		int32_t stop = $Math::min(endoff, off + (ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos));
		while (off < stop) {
			$Bits::putBoolean(this->buf, this->pos++, $nc(v)->get(off++));
		}
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeChars($chars* v, int32_t off, int32_t len) {
	int32_t limit = ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - 2;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (this->pos <= limit) {
			int32_t avail = (ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos) >> 1;
			int32_t stop = $Math::min(endoff, off + avail);
			while (off < stop) {
				$Bits::putChar(this->buf, this->pos, $nc(v)->get(off++));
				this->pos += 2;
			}
		} else {
			$nc(this->dout)->writeChar($nc(v)->get(off++));
		}
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeShorts($shorts* v, int32_t off, int32_t len) {
	int32_t limit = ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - 2;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (this->pos <= limit) {
			int32_t avail = (ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos) >> 1;
			int32_t stop = $Math::min(endoff, off + avail);
			while (off < stop) {
				$Bits::putShort(this->buf, this->pos, $nc(v)->get(off++));
				this->pos += 2;
			}
		} else {
			$nc(this->dout)->writeShort($nc(v)->get(off++));
		}
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeInts($ints* v, int32_t off, int32_t len) {
	int32_t limit = ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - 4;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (this->pos <= limit) {
			int32_t avail = (ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos) >> 2;
			int32_t stop = $Math::min(endoff, off + avail);
			while (off < stop) {
				$Bits::putInt(this->buf, this->pos, $nc(v)->get(off++));
				this->pos += 4;
			}
		} else {
			$nc(this->dout)->writeInt($nc(v)->get(off++));
		}
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeFloats($floats* v, int32_t off, int32_t len) {
	int32_t limit = ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - 4;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (this->pos <= limit) {
			int32_t avail = (ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos) >> 2;
			int32_t stop = $Math::min(endoff, off + avail);
			while (off < stop) {
				$Bits::putFloat(this->buf, this->pos, $nc(v)->get(off++));
				this->pos += 4;
			}
		} else {
			$nc(this->dout)->writeFloat($nc(v)->get(off++));
		}
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeLongs($longs* v, int32_t off, int32_t len) {
	int32_t limit = ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - 8;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (this->pos <= limit) {
			int32_t avail = (ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos) >> 3;
			int32_t stop = $Math::min(endoff, off + avail);
			while (off < stop) {
				$Bits::putLong(this->buf, this->pos, $nc(v)->get(off++));
				this->pos += 8;
			}
		} else {
			$nc(this->dout)->writeLong($nc(v)->get(off++));
		}
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeDoubles($doubles* v, int32_t off, int32_t len) {
	int32_t limit = ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - 8;
	int32_t endoff = off + len;
	while (off < endoff) {
		if (this->pos <= limit) {
			int32_t avail = (ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - this->pos) >> 3;
			int32_t stop = $Math::min(endoff, off + avail);
			while (off < stop) {
				$Bits::putDouble(this->buf, this->pos, $nc(v)->get(off++));
				this->pos += 8;
			}
		} else {
			$nc(this->dout)->writeDouble($nc(v)->get(off++));
		}
	}
}

int64_t ObjectOutputStream$BlockDataOutputStream::getUTFLength($String* s) {
	int32_t len = $nc(s)->length();
	int64_t utflen = 0;
	for (int32_t off = 0; off < len;) {
		int32_t csize = $Math::min(len - off, ObjectOutputStream$BlockDataOutputStream::CHAR_BUF_SIZE);
		s->getChars(off, off + csize, this->cbuf, 0);
		for (int32_t cpos = 0; cpos < csize; ++cpos) {
			char16_t c = $nc(this->cbuf)->get(cpos);
			if (c >= 1 && c <= 127) {
				++utflen;
			} else if (c > 2047) {
				utflen += 3;
			} else {
				utflen += 2;
			}
		}
		off += csize;
	}
	return utflen;
}

void ObjectOutputStream$BlockDataOutputStream::writeUTF($String* s, int64_t utflen) {
	if (utflen > (int64_t)65535) {
		$throwNew($UTFDataFormatException);
	}
	writeShort((int32_t)utflen);
	if (utflen == (int64_t)$nc(s)->length()) {
		writeBytes(s);
	} else {
		writeUTFBody(s);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeLongUTF($String* s) {
	writeLongUTF(s, getUTFLength(s));
}

void ObjectOutputStream$BlockDataOutputStream::writeLongUTF($String* s, int64_t utflen) {
	writeLong(utflen);
	if (utflen == (int64_t)$nc(s)->length()) {
		writeBytes(s);
	} else {
		writeUTFBody(s);
	}
}

void ObjectOutputStream$BlockDataOutputStream::writeUTFBody($String* s) {
	int32_t limit = ObjectOutputStream$BlockDataOutputStream::MAX_BLOCK_SIZE - 3;
	int32_t len = $nc(s)->length();
	for (int32_t off = 0; off < len;) {
		int32_t csize = $Math::min(len - off, ObjectOutputStream$BlockDataOutputStream::CHAR_BUF_SIZE);
		s->getChars(off, off + csize, this->cbuf, 0);
		for (int32_t cpos = 0; cpos < csize; ++cpos) {
			char16_t c = $nc(this->cbuf)->get(cpos);
			if (this->pos <= limit) {
				if (c <= 127 && c != 0) {
					$nc(this->buf)->set(this->pos++, (int8_t)c);
				} else if (c > 2047) {
					$nc(this->buf)->set(this->pos + 2, (int8_t)(128 | ((int32_t)((c >> 0) & (uint32_t)63))));
					$nc(this->buf)->set(this->pos + 1, (int8_t)(128 | ((int32_t)((c >> 6) & (uint32_t)63))));
					$nc(this->buf)->set(this->pos + 0, (int8_t)(224 | ((int32_t)((c >> 12) & (uint32_t)15))));
					this->pos += 3;
				} else {
					$nc(this->buf)->set(this->pos + 1, (int8_t)(128 | ((int32_t)((c >> 0) & (uint32_t)63))));
					$nc(this->buf)->set(this->pos + 0, (int8_t)(192 | ((int32_t)((c >> 6) & (uint32_t)31))));
					this->pos += 2;
				}
			} else if (c <= 127 && c != 0) {
				write((int32_t)c);
			} else if (c > 2047) {
				write(224 | ((int32_t)((c >> 12) & (uint32_t)15)));
				write(128 | ((int32_t)((c >> 6) & (uint32_t)63)));
				write(128 | ((int32_t)((c >> 0) & (uint32_t)63)));
			} else {
				write(192 | ((int32_t)((c >> 6) & (uint32_t)31)));
				write(128 | ((int32_t)((c >> 0) & (uint32_t)63)));
			}
		}
		off += csize;
	}
}

ObjectOutputStream$BlockDataOutputStream::ObjectOutputStream$BlockDataOutputStream() {
}

$Class* ObjectOutputStream$BlockDataOutputStream::load$($String* name, bool initialize) {
	$loadClass(ObjectOutputStream$BlockDataOutputStream, name, initialize, &_ObjectOutputStream$BlockDataOutputStream_ClassInfo_, allocate$ObjectOutputStream$BlockDataOutputStream);
	return class$;
}

$Class* ObjectOutputStream$BlockDataOutputStream::class$ = nullptr;

	} // io
} // java