#include <sun/net/TelnetInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <sun/net/TelnetProtocolException.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TelnetProtocolException = ::sun::net::TelnetProtocolException;

namespace sun {
	namespace net {

$FieldInfo _TelnetInputStream_FieldInfo_[] = {
	{"stickyCRLF", "Z", nullptr, 0, $field(TelnetInputStream, stickyCRLF)},
	{"seenCR", "Z", nullptr, 0, $field(TelnetInputStream, seenCR)},
	{"binaryMode", "Z", nullptr, $PUBLIC, $field(TelnetInputStream, binaryMode)},
	{}
};

$MethodInfo _TelnetInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Z)V", nullptr, $PUBLIC, $method(TelnetInputStream, init$, void, $InputStream*, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(TelnetInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, $virtualMethod(TelnetInputStream, read, int32_t, $bytes*), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(TelnetInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"setStickyCRLF", "(Z)V", nullptr, $PUBLIC, $virtualMethod(TelnetInputStream, setStickyCRLF, void, bool)},
	{}
};

$ClassInfo _TelnetInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.TelnetInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_TelnetInputStream_FieldInfo_,
	_TelnetInputStream_MethodInfo_
};

$Object* allocate$TelnetInputStream($Class* clazz) {
	return $of($alloc(TelnetInputStream));
}

void TelnetInputStream::init$($InputStream* fd, bool binary) {
	$FilterInputStream::init$(fd);
	this->stickyCRLF = false;
	this->seenCR = false;
	this->binaryMode = false;
	this->binaryMode = binary;
}

void TelnetInputStream::setStickyCRLF(bool on) {
	this->stickyCRLF = on;
}

int32_t TelnetInputStream::read() {
	if (this->binaryMode) {
		return $FilterInputStream::read();
	}
	int32_t c = 0;
	if (this->seenCR) {
		this->seenCR = false;
		return u'\n';
	}
	if ((c = $FilterInputStream::read()) == u'\r') {
		switch (c = $FilterInputStream::read()) {
		default:
			{}
		case -1:
			{
				$throwNew($TelnetProtocolException, "misplaced CR in input"_s);
			}
		case 0:
			{
				return u'\r';
			}
		case u'\n':
			{
				if (this->stickyCRLF) {
					this->seenCR = true;
					return u'\r';
				} else {
					return u'\n';
				}
			}
		}
	}
	return c;
}

int32_t TelnetInputStream::read($bytes* bytes) {
	return read(bytes, 0, $nc(bytes)->length);
}

int32_t TelnetInputStream::read($bytes* bytes, int32_t off, int32_t length) {
	if (this->binaryMode) {
		return $FilterInputStream::read(bytes, off, length);
	}
	int32_t c = 0;
	int32_t offStart = off;
	while (--length >= 0) {
		c = read();
		if (c == -1) {
			break;
		}
		$nc(bytes)->set(off++, (int8_t)c);
	}
	return (off > offStart) ? off - offStart : -1;
}

TelnetInputStream::TelnetInputStream() {
}

$Class* TelnetInputStream::load$($String* name, bool initialize) {
	$loadClass(TelnetInputStream, name, initialize, &_TelnetInputStream_ClassInfo_, allocate$TelnetInputStream);
	return class$;
}

$Class* TelnetInputStream::class$ = nullptr;

	} // net
} // sun