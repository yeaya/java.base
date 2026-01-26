#include <java/util/jar/Manifest$FastInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/util/jar/Manifest.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _Manifest$FastInputStream_FieldInfo_[] = {
	{"buf", "[B", nullptr, $PRIVATE, $field(Manifest$FastInputStream, buf)},
	{"count", "I", nullptr, $PRIVATE, $field(Manifest$FastInputStream, count)},
	{"pos", "I", nullptr, $PRIVATE, $field(Manifest$FastInputStream, pos)},
	{}
};

$MethodInfo _Manifest$FastInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(Manifest$FastInputStream, init$, void, $InputStream*)},
	{"<init>", "(Ljava/io/InputStream;I)V", nullptr, 0, $method(Manifest$FastInputStream, init$, void, $InputStream*, int32_t)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, available, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, close, void), "java.io.IOException"},
	{"fill", "()V", nullptr, $PRIVATE, $method(Manifest$FastInputStream, fill, void), "java.io.IOException"},
	{"peek", "()B", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, peek, int8_t), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"readLine", "([BII)I", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, readLine, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"readLine", "([B)I", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, readLine, int32_t, $bytes*), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(Manifest$FastInputStream, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _Manifest$FastInputStream_InnerClassesInfo_[] = {
	{"java.util.jar.Manifest$FastInputStream", "java.util.jar.Manifest", "FastInputStream", $STATIC},
	{}
};

$ClassInfo _Manifest$FastInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.Manifest$FastInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_Manifest$FastInputStream_FieldInfo_,
	_Manifest$FastInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Manifest$FastInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.Manifest"
};

$Object* allocate$Manifest$FastInputStream($Class* clazz) {
	return $of($alloc(Manifest$FastInputStream));
}

void Manifest$FastInputStream::init$($InputStream* in) {
	Manifest$FastInputStream::init$(in, 8192);
}

void Manifest$FastInputStream::init$($InputStream* in, int32_t size) {
	$FilterInputStream::init$(in);
	this->count = 0;
	this->pos = 0;
	$set(this, buf, $new($bytes, size));
}

int32_t Manifest$FastInputStream::read() {
	if (this->pos >= this->count) {
		fill();
		if (this->pos >= this->count) {
			return -1;
		}
	}
	return $Byte::toUnsignedInt($nc(this->buf)->get(this->pos++));
}

int32_t Manifest$FastInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t avail = this->count - this->pos;
	if (avail <= 0) {
		if (len >= $nc(this->buf)->length) {
			return $nc(this->in)->read(b, off, len);
		}
		fill();
		avail = this->count - this->pos;
		if (avail <= 0) {
			return -1;
		}
	}
	if (len > avail) {
		len = avail;
	}
	$System::arraycopy(this->buf, this->pos, b, off, len);
	this->pos += len;
	return len;
}

int32_t Manifest$FastInputStream::readLine($bytes* b, int32_t off, int32_t len) {
	$var($bytes, tbuf, this->buf);
	int32_t total = 0;
	while (total < len) {
		int32_t avail = this->count - this->pos;
		if (avail <= 0) {
			fill();
			avail = this->count - this->pos;
			if (avail <= 0) {
				return -1;
			}
		}
		int32_t n = len - total;
		if (n > avail) {
			n = avail;
		}
		int32_t tpos = this->pos;
		int32_t maxpos = tpos + n;
		int8_t c = (int8_t)0;
		while (true) {
			bool var$1 = tpos < maxpos;
			bool var$0 = var$1 && (c = $nc(tbuf)->get(tpos++)) != u'\n';
			if (!(var$0 && c != u'\r')) {
				break;
			}
			{
			}
		}
		if (c == u'\r' && tpos < maxpos && $nc(tbuf)->get(tpos) == u'\n') {
			++tpos;
		}
		n = tpos - this->pos;
		$System::arraycopy(tbuf, this->pos, b, off, n);
		off += n;
		total += n;
		this->pos = tpos;
		c = $nc(tbuf)->get(tpos - 1);
		if (c == u'\n') {
			break;
		}
		if (c == u'\r') {
			if (this->count == this->pos) {
				fill();
				if (this->pos < this->count && tbuf->get(this->pos) == u'\n') {
					if (total < len) {
						$nc(b)->set(off++, (int8_t)u'\n');
						++total;
					} else {
						$nc(b)->set(off - 1, (int8_t)u'\n');
					}
					++this->pos;
				}
			}
			break;
		}
	}
	return total;
}

int8_t Manifest$FastInputStream::peek() {
	if (this->pos == this->count) {
		fill();
	}
	if (this->pos == this->count) {
		return (int8_t)-1;
	}
	return $nc(this->buf)->get(this->pos);
}

int32_t Manifest$FastInputStream::readLine($bytes* b) {
	return readLine(b, 0, $nc(b)->length);
}

int64_t Manifest$FastInputStream::skip(int64_t n) {
	if (n <= 0) {
		return 0;
	}
	int64_t avail = this->count - this->pos;
	if (avail <= 0) {
		return $nc(this->in)->skip(n);
	}
	if (n > avail) {
		n = avail;
	}
	this->pos += n;
	return n;
}

int32_t Manifest$FastInputStream::available() {
	return (this->count - this->pos) + $nc(this->in)->available();
}

void Manifest$FastInputStream::close() {
	if (this->in != nullptr) {
		$nc(this->in)->close();
		$set(this, in, nullptr);
		$set(this, buf, nullptr);
	}
}

void Manifest$FastInputStream::fill() {
	this->count = (this->pos = 0);
	int32_t n = $nc(this->in)->read(this->buf, 0, $nc(this->buf)->length);
	if (n > 0) {
		this->count = n;
	}
}

Manifest$FastInputStream::Manifest$FastInputStream() {
}

$Class* Manifest$FastInputStream::load$($String* name, bool initialize) {
	$loadClass(Manifest$FastInputStream, name, initialize, &_Manifest$FastInputStream_ClassInfo_, allocate$Manifest$FastInputStream);
	return class$;
}

$Class* Manifest$FastInputStream::class$ = nullptr;

		} // jar
	} // util
} // java