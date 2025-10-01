#include <java/io/LineNumberInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace io {
$CompoundAttribute _LineNumberInputStream_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _LineNumberInputStream_FieldInfo_[] = {
	{"pushBack", "I", nullptr, 0, $field(LineNumberInputStream, pushBack)},
	{"lineNumber", "I", nullptr, 0, $field(LineNumberInputStream, lineNumber)},
	{"markLineNumber", "I", nullptr, 0, $field(LineNumberInputStream, markLineNumber)},
	{"markPushBack", "I", nullptr, 0, $field(LineNumberInputStream, markPushBack)},
	{}
};

$MethodInfo _LineNumberInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(LineNumberInputStream::*)($InputStream*)>(&LineNumberInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _LineNumberInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.LineNumberInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_LineNumberInputStream_FieldInfo_,
	_LineNumberInputStream_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LineNumberInputStream_Annotations_
};

$Object* allocate$LineNumberInputStream($Class* clazz) {
	return $of($alloc(LineNumberInputStream));
}

void LineNumberInputStream::init$($InputStream* in) {
	$FilterInputStream::init$(in);
	this->pushBack = -1;
	this->markPushBack = -1;
}

int32_t LineNumberInputStream::read() {
	int32_t c = this->pushBack;
	if (c != -1) {
		this->pushBack = -1;
	} else {
		c = $nc(this->in)->read();
	}
	switch (c) {
	case u'\r':
		{
			this->pushBack = $nc(this->in)->read();
			if (this->pushBack == u'\n') {
				this->pushBack = -1;
			}
		}
	case u'\n':
		{
			++this->lineNumber;
			return u'\n';
		}
	}
	return c;
}

int32_t LineNumberInputStream::read($bytes* b, int32_t off, int32_t len) {
	if (b == nullptr) {
		$throwNew($NullPointerException);
	} else if ((off < 0) || (off > $nc(b)->length) || (len < 0) || ((off + len) > $nc(b)->length) || ((off + len) < 0)) {
		$throwNew($IndexOutOfBoundsException);
	} else if (len == 0) {
		return 0;
	}
	int32_t c = read();
	if (c == -1) {
		return -1;
	}
	$nc(b)->set(off, (int8_t)c);
	int32_t i = 1;
	try {
		for (; i < len; ++i) {
			c = read();
			if (c == -1) {
				break;
			}
			if (b != nullptr) {
				b->set(off + i, (int8_t)c);
			}
		}
	} catch ($IOException&) {
		$catch();
	}
	return i;
}

int64_t LineNumberInputStream::skip(int64_t n) {
	int32_t chunk = 2048;
	int64_t remaining = n;
	$var($bytes, data, nullptr);
	int32_t nr = 0;
	if (n <= 0) {
		return 0;
	}
	$assign(data, $new($bytes, chunk));
	while (remaining > 0) {
		nr = read(data, 0, (int32_t)$Math::min((int64_t)chunk, remaining));
		if (nr < 0) {
			break;
		}
		remaining -= nr;
	}
	return n - remaining;
}

void LineNumberInputStream::setLineNumber(int32_t lineNumber) {
	this->lineNumber = lineNumber;
}

int32_t LineNumberInputStream::getLineNumber() {
	return this->lineNumber;
}

int32_t LineNumberInputStream::available() {
	return (this->pushBack == -1) ? $FilterInputStream::available() / 2 : $FilterInputStream::available() / 2 + 1;
}

void LineNumberInputStream::mark(int32_t readlimit) {
	this->markLineNumber = this->lineNumber;
	this->markPushBack = this->pushBack;
	$nc(this->in)->mark(readlimit);
}

void LineNumberInputStream::reset() {
	this->lineNumber = this->markLineNumber;
	this->pushBack = this->markPushBack;
	$nc(this->in)->reset();
}

LineNumberInputStream::LineNumberInputStream() {
}

$Class* LineNumberInputStream::load$($String* name, bool initialize) {
	$loadClass(LineNumberInputStream, name, initialize, &_LineNumberInputStream_ClassInfo_, allocate$LineNumberInputStream);
	return class$;
}

$Class* LineNumberInputStream::class$ = nullptr;

	} // io
} // java