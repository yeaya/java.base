#include <java/util/Base64$DecInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/util/Base64.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$FieldInfo _Base64$DecInputStream_FieldInfo_[] = {
	{"is", "Ljava/io/InputStream;", nullptr, $PRIVATE | $FINAL, $field(Base64$DecInputStream, is)},
	{"isMIME", "Z", nullptr, $PRIVATE | $FINAL, $field(Base64$DecInputStream, isMIME)},
	{"base64", "[I", nullptr, $PRIVATE | $FINAL, $field(Base64$DecInputStream, base64)},
	{"bits", "I", nullptr, $PRIVATE, $field(Base64$DecInputStream, bits)},
	{"wpos", "I", nullptr, $PRIVATE, $field(Base64$DecInputStream, wpos)},
	{"rpos", "I", nullptr, $PRIVATE, $field(Base64$DecInputStream, rpos)},
	{"eof", "Z", nullptr, $PRIVATE, $field(Base64$DecInputStream, eof$)},
	{"closed", "Z", nullptr, $PRIVATE, $field(Base64$DecInputStream, closed)},
	{"sbBuf", "[B", nullptr, $PRIVATE, $field(Base64$DecInputStream, sbBuf)},
	{}
};

$MethodInfo _Base64$DecInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;[IZ)V", nullptr, 0, $method(Base64$DecInputStream, init$, void, $InputStream*, $ints*, bool)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(Base64$DecInputStream, available, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Base64$DecInputStream, close, void), "java.io.IOException"},
	{"eof", "([BIII)I", nullptr, $PRIVATE, $method(Base64$DecInputStream, eof, int32_t, $bytes*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"leftovers", "([BIII)I", nullptr, $PRIVATE, $method(Base64$DecInputStream, leftovers, int32_t, $bytes*, int32_t, int32_t, int32_t)},
	{"padding", "([BIII)I", nullptr, $PRIVATE, $method(Base64$DecInputStream, padding, int32_t, $bytes*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(Base64$DecInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(Base64$DecInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _Base64$DecInputStream_InnerClassesInfo_[] = {
	{"java.util.Base64$DecInputStream", "java.util.Base64", "DecInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Base64$DecInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Base64$DecInputStream",
	"java.io.InputStream",
	nullptr,
	_Base64$DecInputStream_FieldInfo_,
	_Base64$DecInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Base64$DecInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Base64"
};

$Object* allocate$Base64$DecInputStream($Class* clazz) {
	return $of($alloc(Base64$DecInputStream));
}

void Base64$DecInputStream::init$($InputStream* is, $ints* base64, bool isMIME) {
	$InputStream::init$();
	this->bits = 0;
	this->wpos = 0;
	this->rpos = 0;
	this->eof$ = false;
	this->closed = false;
	$set(this, sbBuf, $new($bytes, 1));
	$set(this, is, is);
	$set(this, base64, base64);
	this->isMIME = isMIME;
}

int32_t Base64$DecInputStream::read() {
	return read(this->sbBuf, 0, 1) == -1 ? -1 : (int32_t)($nc(this->sbBuf)->get(0) & (uint32_t)255);
}

int32_t Base64$DecInputStream::leftovers($bytes* b, int32_t off, int32_t pos, int32_t limit) {
	this->eof$ = true;
	while (this->rpos - 8 >= this->wpos && pos != limit) {
		this->rpos -= 8;
		$nc(b)->set(pos++, (int8_t)($sr(this->bits, this->rpos)));
	}
	return pos - off != 0 || this->rpos - 8 >= this->wpos ? pos - off : -1;
}

int32_t Base64$DecInputStream::eof($bytes* b, int32_t off, int32_t pos, int32_t limit) {
	if (this->wpos == 18) {
		$throwNew($IOException, "Base64 stream has one un-decoded dangling byte."_s);
	}
	this->rpos = 24;
	return leftovers(b, off, pos, limit);
}

int32_t Base64$DecInputStream::padding($bytes* b, int32_t off, int32_t pos, int32_t limit) {
	$useLocalCurrentObjectStackCache();
	if (this->wpos >= 18 || this->wpos == 12 && $nc(this->is)->read() != u'=') {
		$throwNew($IOException, $$str({"Illegal base64 ending sequence:"_s, $$str(this->wpos)}));
	}
	this->rpos = 24;
	return leftovers(b, off, pos, limit);
}

int32_t Base64$DecInputStream::read($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (this->closed) {
		$throwNew($IOException, "Stream is closed"_s);
	}
	$Objects::checkFromIndexSize(off, len, $nc(b)->length);
	if (len == 0) {
		return 0;
	}
	int32_t pos = off;
	int32_t limit = off + len;
	if (this->eof$) {
		return leftovers(b, off, pos, limit);
	}
	if (this->rpos == 16) {
		$nc(b)->set(pos++, (int8_t)(this->bits >> 8));
		this->rpos = 8;
		if (pos == limit) {
			return len;
		}
	}
	if (this->rpos == 8) {
		$nc(b)->set(pos++, (int8_t)this->bits);
		this->rpos = 0;
		if (pos == limit) {
			return len;
		}
	}
	this->bits = 0;
	this->wpos = 24;
	for (;;) {
		int32_t i = $nc(this->is)->read();
		if (i < 0) {
			return eof(b, off, pos, limit);
		}
		int32_t v = $nc(this->base64)->get(i);
		if (v < 0) {
			if (v == -1) {
				if (this->isMIME) {
					continue;
				}
				$throwNew($IOException, $$str({"Illegal base64 character 0x"_s, $($Integer::toHexString(i))}));
			}
			return padding(b, off, pos, limit);
		}
		this->wpos -= 6;
		this->bits |= $sl(v, this->wpos);
		if (this->wpos != 0) {
			continue;
		}
		if (limit - pos >= 3) {
			$nc(b)->set(pos++, (int8_t)(this->bits >> 16));
			b->set(pos++, (int8_t)(this->bits >> 8));
			b->set(pos++, (int8_t)this->bits);
			this->bits = 0;
			this->wpos = 24;
			if (pos == limit) {
				return len;
			}
			continue;
		}
		$nc(b)->set(pos++, (int8_t)(this->bits >> 16));
		if (pos == limit) {
			this->rpos = 16;
			return len;
		}
		b->set(pos++, (int8_t)(this->bits >> 8));
		this->rpos = 8;
		return len;
	}
}

int32_t Base64$DecInputStream::available() {
	if (this->closed) {
		$throwNew($IOException, "Stream is closed"_s);
	}
	return $nc(this->is)->available();
}

void Base64$DecInputStream::close() {
	if (!this->closed) {
		this->closed = true;
		$nc(this->is)->close();
	}
}

Base64$DecInputStream::Base64$DecInputStream() {
}

$Class* Base64$DecInputStream::load$($String* name, bool initialize) {
	$loadClass(Base64$DecInputStream, name, initialize, &_Base64$DecInputStream_ClassInfo_, allocate$Base64$DecInputStream);
	return class$;
}

$Class* Base64$DecInputStream::class$ = nullptr;

	} // util
} // java