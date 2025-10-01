#include <java/util/Base64$EncOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Base64 = ::java::util::Base64;

namespace java {
	namespace util {

$FieldInfo _Base64$EncOutputStream_FieldInfo_[] = {
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

$MethodInfo _Base64$EncOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;[C[BIZ)V", nullptr, 0, $method(static_cast<void(Base64$EncOutputStream::*)($OutputStream*,$chars*,$bytes*,int32_t,bool)>(&Base64$EncOutputStream::init$))},
	{"checkNewline", "()V", nullptr, $PRIVATE, $method(static_cast<void(Base64$EncOutputStream::*)()>(&Base64$EncOutputStream::checkNewline)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeb4", "(CCCC)V", nullptr, $PRIVATE, $method(static_cast<void(Base64$EncOutputStream::*)(char16_t,char16_t,char16_t,char16_t)>(&Base64$EncOutputStream::writeb4)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Base64$EncOutputStream_InnerClassesInfo_[] = {
	{"java.util.Base64$EncOutputStream", "java.util.Base64", "EncOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Base64$EncOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Base64$EncOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_Base64$EncOutputStream_FieldInfo_,
	_Base64$EncOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Base64$EncOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Base64"
};

$Object* allocate$Base64$EncOutputStream($Class* clazz) {
	return $of($alloc(Base64$EncOutputStream));
}

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
	buf->set(0, (int8_t)((int32_t)(b & (uint32_t)255)));
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
	$nc(this->buf)->set(1, (int8_t)b2);
	$nc(this->buf)->set(2, (int8_t)b3);
	$nc(this->buf)->set(3, (int8_t)b4);
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
			this->b1 = (int32_t)($nc(b)->get(off++) & (uint32_t)255);
			--len;
			if (len == 0) {
				++this->leftover;
				return;
			}
		}
		this->b2 = (int32_t)($nc(b)->get(off++) & (uint32_t)255);
		--len;
		checkNewline();
		writeb4($nc(this->base64)->get(this->b0 >> 2), $nc(this->base64)->get(((int32_t)((this->b0 << 4) & (uint32_t)63)) | (this->b1 >> 4)), $nc(this->base64)->get(((int32_t)((this->b1 << 2) & (uint32_t)63)) | (this->b2 >> 6)), $nc(this->base64)->get((int32_t)(this->b2 & (uint32_t)63)));
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
			int32_t var$1 = ((int32_t)($nc(b)->get(sp++) & (uint32_t)255)) << 16;
			int32_t var$0 = var$1 | (((int32_t)(b->get(sp++) & (uint32_t)255)) << 8);
			int32_t bits = var$0 | ((int32_t)(b->get(sp++) & (uint32_t)255));
			$nc(this->buf)->set(dp++, (int8_t)$nc(this->base64)->get((int32_t)(((int32_t)((uint32_t)bits >> 18)) & (uint32_t)63)));
			$nc(this->buf)->set(dp++, (int8_t)$nc(this->base64)->get((int32_t)(((int32_t)((uint32_t)bits >> 12)) & (uint32_t)63)));
			$nc(this->buf)->set(dp++, (int8_t)$nc(this->base64)->get((int32_t)(((int32_t)((uint32_t)bits >> 6)) & (uint32_t)63)));
			$nc(this->buf)->set(dp++, (int8_t)$nc(this->base64)->get((int32_t)(bits & (uint32_t)63)));
		}
		$nc(this->out)->write(this->buf, 0, dp);
		off = sl;
		this->linepos += dp;
		nBits24 -= dp / 4;
	}
	if (this->leftover == 1) {
		this->b0 = (int32_t)($nc(b)->get(off++) & (uint32_t)255);
	} else if (this->leftover == 2) {
		this->b0 = (int32_t)($nc(b)->get(off++) & (uint32_t)255);
		this->b1 = (int32_t)(b->get(off++) & (uint32_t)255);
	}
}

void Base64$EncOutputStream::close() {
	if (!this->closed) {
		this->closed = true;
		if (this->leftover == 1) {
			checkNewline();
			$nc(this->out)->write((int32_t)$nc(this->base64)->get(this->b0 >> 2));
			$nc(this->out)->write((int32_t)$nc(this->base64)->get((int32_t)((this->b0 << 4) & (uint32_t)63)));
			if (this->doPadding) {
				$nc(this->out)->write((int32_t)u'=');
				$nc(this->out)->write((int32_t)u'=');
			}
		} else if (this->leftover == 2) {
			checkNewline();
			$nc(this->out)->write((int32_t)$nc(this->base64)->get(this->b0 >> 2));
			$nc(this->out)->write((int32_t)$nc(this->base64)->get(((int32_t)((this->b0 << 4) & (uint32_t)63)) | (this->b1 >> 4)));
			$nc(this->out)->write((int32_t)$nc(this->base64)->get((int32_t)((this->b1 << 2) & (uint32_t)63)));
			if (this->doPadding) {
				$nc(this->out)->write((int32_t)u'=');
			}
		}
		this->leftover = 0;
		$nc(this->out)->close();
	}
}

Base64$EncOutputStream::Base64$EncOutputStream() {
}

$Class* Base64$EncOutputStream::load$($String* name, bool initialize) {
	$loadClass(Base64$EncOutputStream, name, initialize, &_Base64$EncOutputStream_ClassInfo_, allocate$Base64$EncOutputStream);
	return class$;
}

$Class* Base64$EncOutputStream::class$ = nullptr;

	} // util
} // java