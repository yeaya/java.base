#include <java/util/Base64$EncOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/util/Base64.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void Base64$EncOutputStream::init$($OutputStream* os, $chars* base64, $bytes* newline, int32_t linemax, bool doPadding) {
	$FilterOutputStream::init$(os);
	this->leftover = 0;
	this->closed = false;
	this->linepos = 0;
	$set(this, base64, base64);
	$set(this, newline, newline);
	this->linemax = linemax;
	this->doPadding = doPadding;
	$set(this, buf, $new($bytes, linemax <= 0 ? 8124 : linemax));
}

void Base64$EncOutputStream::write(int32_t b) {
	$var($bytes, buf, $new($bytes, 1));
	buf->set(0, (int8_t)(b & 0xff));
	write(buf, 0, 1);
}

void Base64$EncOutputStream::checkNewline() {
	if (this->linepos == this->linemax) {
		$nc(this->out)->write(this->newline);
		this->linepos = 0;
	}
}

void Base64$EncOutputStream::writeb4(char16_t b1, char16_t b2, char16_t b3, char16_t b4) {
	$nc(this->buf)->set(0, (int8_t)b1);
	this->buf->set(1, (int8_t)b2);
	this->buf->set(2, (int8_t)b3);
	this->buf->set(3, (int8_t)b4);
	$nc(this->out)->write(this->buf, 0, 4);
}

void Base64$EncOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if (this->closed) {
		$throwNew($IOException, "Stream is closed"_s);
	}
	if (off < 0 || len < 0 || len > $nc(b)->length - off) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
	if (len == 0) {
		return;
	}
	if (this->leftover != 0) {
		if (this->leftover == 1) {
			this->b1 = $nc(b)->get(off++) & 0xff;
			--len;
			if (len == 0) {
				++this->leftover;
				return;
			}
		}
		this->b2 = $nc(b)->get(off++) & 0xff;
		--len;
		checkNewline();
		writeb4($nc(this->base64)->get(this->b0 >> 2), $nc(this->base64)->get(((this->b0 << 4) & 0x3f) | (this->b1 >> 4)), $nc(this->base64)->get(((this->b1 << 2) & 0x3f) | (this->b2 >> 6)), $nc(this->base64)->get(this->b2 & 0x3f));
		this->linepos += 4;
	}
	int32_t nBits24 = len / 3;
	this->leftover = len - (nBits24 * 3);
	while (nBits24 > 0) {
		checkNewline();
		int32_t dl = this->linemax <= 0 ? $nc(this->buf)->length : $nc(this->buf)->length - this->linepos;
		int32_t sl = off + $Math::min(nBits24, dl / 4) * 3;
		int32_t dp = 0;
		for (int32_t sp = off; sp < sl;) {
			int32_t var$1 = ($nc(b)->get(sp++) & 0xff) << 16;
			int32_t var$0 = var$1 | ((b->get(sp++) & 0xff) << 8);
			int32_t bits = var$0 | (b->get(sp++) & 0xff);
			$nc(this->buf)->set(dp++, (int8_t)$nc(this->base64)->get(((int32_t)((uint32_t)bits >> 18)) & 0x3f));
			this->buf->set(dp++, (int8_t)this->base64->get(((int32_t)((uint32_t)bits >> 12)) & 0x3f));
			this->buf->set(dp++, (int8_t)this->base64->get(((int32_t)((uint32_t)bits >> 6)) & 0x3f));
			this->buf->set(dp++, (int8_t)this->base64->get(bits & 0x3f));
		}
		$nc(this->out)->write(this->buf, 0, dp);
		off = sl;
		this->linepos += dp;
		nBits24 -= dp / 4;
	}
	if (this->leftover == 1) {
		this->b0 = $nc(b)->get(off++) & 0xff;
	} else if (this->leftover == 2) {
		this->b0 = $nc(b)->get(off++) & 0xff;
		this->b1 = b->get(off++) & 0xff;
	}
}

void Base64$EncOutputStream::close() {
	if (!this->closed) {
		this->closed = true;
		if (this->leftover == 1) {
			checkNewline();
			$nc(this->out)->write($nc(this->base64)->get(this->b0 >> 2));
			this->out->write(this->base64->get((this->b0 << 4) & 0x3f));
			if (this->doPadding) {
				this->out->write(u'=');
				this->out->write(u'=');
			}
		} else if (this->leftover == 2) {
			checkNewline();
			$nc(this->out)->write($nc(this->base64)->get(this->b0 >> 2));
			this->out->write(this->base64->get(((this->b0 << 4) & 0x3f) | (this->b1 >> 4)));
			this->out->write(this->base64->get((this->b1 << 2) & 0x3f));
			if (this->doPadding) {
				this->out->write(u'=');
			}
		}
		this->leftover = 0;
		$nc(this->out)->close();
	}
}

Base64$EncOutputStream::Base64$EncOutputStream() {
}

$Class* Base64$EncOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"leftover", "I", nullptr, $PRIVATE, $field(Base64$EncOutputStream, leftover)},
		{"b0", "I", nullptr, $PRIVATE, $field(Base64$EncOutputStream, b0)},
		{"b1", "I", nullptr, $PRIVATE, $field(Base64$EncOutputStream, b1)},
		{"b2", "I", nullptr, $PRIVATE, $field(Base64$EncOutputStream, b2)},
		{"closed", "Z", nullptr, $PRIVATE, $field(Base64$EncOutputStream, closed)},
		{"base64", "[C", nullptr, $PRIVATE | $FINAL, $field(Base64$EncOutputStream, base64)},
		{"newline", "[B", nullptr, $PRIVATE | $FINAL, $field(Base64$EncOutputStream, newline)},
		{"linemax", "I", nullptr, $PRIVATE | $FINAL, $field(Base64$EncOutputStream, linemax)},
		{"doPadding", "Z", nullptr, $PRIVATE | $FINAL, $field(Base64$EncOutputStream, doPadding)},
		{"linepos", "I", nullptr, $PRIVATE, $field(Base64$EncOutputStream, linepos)},
		{"buf", "[B", nullptr, $PRIVATE, $field(Base64$EncOutputStream, buf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;[C[BIZ)V", nullptr, 0, $method(Base64$EncOutputStream, init$, void, $OutputStream*, $chars*, $bytes*, int32_t, bool)},
		{"checkNewline", "()V", nullptr, $PRIVATE, $method(Base64$EncOutputStream, checkNewline, void), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Base64$EncOutputStream, close, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(Base64$EncOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(Base64$EncOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"writeb4", "(CCCC)V", nullptr, $PRIVATE, $method(Base64$EncOutputStream, writeb4, void, char16_t, char16_t, char16_t, char16_t), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Base64$EncOutputStream", "java.util.Base64", "EncOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Base64$EncOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Base64"
	};
	$loadClass(Base64$EncOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Base64$EncOutputStream));
	});
	return class$;
}

$Class* Base64$EncOutputStream::class$ = nullptr;

	} // util
} // java