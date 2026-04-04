#include <sun/net/TelnetOutputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {

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
			$BufferedOutputStream::write(u'\r');
			$BufferedOutputStream::write(u'\n');
			return;
		}
		if (c == u'\r') {
			if (this->stickyCRLF) {
				this->seenCR = true;
			} else {
				$BufferedOutputStream::write(u'\r');
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
		write($nc(bytes)->get(off++));
	}
}

TelnetOutputStream::TelnetOutputStream() {
}

$Class* TelnetOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stickyCRLF", "Z", nullptr, 0, $field(TelnetOutputStream, stickyCRLF)},
		{"seenCR", "Z", nullptr, 0, $field(TelnetOutputStream, seenCR)},
		{"binaryMode", "Z", nullptr, $PUBLIC, $field(TelnetOutputStream, binaryMode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $method(TelnetOutputStream, init$, void, $OutputStream*, bool)},
		{"setStickyCRLF", "(Z)V", nullptr, $PUBLIC, $virtualMethod(TelnetOutputStream, setStickyCRLF, void, bool)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(TelnetOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(TelnetOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.TelnetOutputStream",
		"java.io.BufferedOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TelnetOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TelnetOutputStream));
	});
	return class$;
}

$Class* TelnetOutputStream::class$ = nullptr;

	} // net
} // sun