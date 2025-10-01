#include <sun/net/TelnetOutputStream.h>

#include <java/io/BufferedOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {

$FieldInfo _TelnetOutputStream_FieldInfo_[] = {
	{"stickyCRLF", "Z", nullptr, 0, $field(TelnetOutputStream, stickyCRLF)},
	{"seenCR", "Z", nullptr, 0, $field(TelnetOutputStream, seenCR)},
	{"binaryMode", "Z", nullptr, $PUBLIC, $field(TelnetOutputStream, binaryMode)},
	{}
};

$MethodInfo _TelnetOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(TelnetOutputStream::*)($OutputStream*,bool)>(&TelnetOutputStream::init$))},
	{"setStickyCRLF", "(Z)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TelnetOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.TelnetOutputStream",
	"java.io.BufferedOutputStream",
	nullptr,
	_TelnetOutputStream_FieldInfo_,
	_TelnetOutputStream_MethodInfo_
};

$Object* allocate$TelnetOutputStream($Class* clazz) {
	return $of($alloc(TelnetOutputStream));
}

void TelnetOutputStream::init$($OutputStream* fd, bool binary) {
	$BufferedOutputStream::init$(fd);
	this->stickyCRLF = false;
	this->seenCR = false;
	this->binaryMode = false;
	this->binaryMode = binary;
}

void TelnetOutputStream::setStickyCRLF(bool on) {
	this->stickyCRLF = on;
}

void TelnetOutputStream::write(int32_t c) {
	if (this->binaryMode) {
		$BufferedOutputStream::write(c);
		return;
	}
	if (this->seenCR) {
		if (c != u'\n') {
			$BufferedOutputStream::write(0);
		}
		$BufferedOutputStream::write(c);
		if (c != u'\r') {
			this->seenCR = false;
		}
	} else {
		if (c == u'\n') {
			$BufferedOutputStream::write((int32_t)u'\r');
			$BufferedOutputStream::write((int32_t)u'\n');
			return;
		}
		if (c == u'\r') {
			if (this->stickyCRLF) {
				this->seenCR = true;
			} else {
				$BufferedOutputStream::write((int32_t)u'\r');
				c = 0;
			}
		}
		$BufferedOutputStream::write(c);
	}
}

void TelnetOutputStream::write($bytes* bytes, int32_t off, int32_t length) {
	if (this->binaryMode) {
		$BufferedOutputStream::write(bytes, off, length);
		return;
	}
	while (--length >= 0) {
		write((int32_t)$nc(bytes)->get(off++));
	}
}

TelnetOutputStream::TelnetOutputStream() {
}

$Class* TelnetOutputStream::load$($String* name, bool initialize) {
	$loadClass(TelnetOutputStream, name, initialize, &_TelnetOutputStream_ClassInfo_, allocate$TelnetOutputStream);
	return class$;
}

$Class* TelnetOutputStream::class$ = nullptr;

	} // net
} // sun