#include <ABCReader.h>

#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ABCReader_FieldInfo_[] = {
	{"len", "I", nullptr, 0, $field(ABCReader, len)},
	{"count", "I", nullptr, 0, $field(ABCReader, count)},
	{"next", "C", nullptr, 0, $field(ABCReader, next)},
	{}
};

$MethodInfo _ABCReader_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(ABCReader::*)(int32_t)>(&ABCReader::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC},
	{"read", "([CII)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ABCReader_ClassInfo_ = {
	$ACC_SUPER,
	"ABCReader",
	"java.io.Reader",
	nullptr,
	_ABCReader_FieldInfo_,
	_ABCReader_MethodInfo_
};

$Object* allocate$ABCReader($Class* clazz) {
	return $of($alloc(ABCReader));
}

void ABCReader::init$(int32_t len) {
	$Reader::init$();
	this->count = 0;
	this->next = u'a';
	this->len = len;
}

int32_t ABCReader::read() {
	if (this->count >= this->len) {
		return -1;
	}
	char16_t c = this->next;
	if (this->next == u'z') {
		this->next = u'0';
	} else if (this->next == u'9') {
		this->next = u'a';
	} else {
		++this->next;
	}
	++this->count;
	return c;
}

int32_t ABCReader::read($chars* cbuf, int32_t off, int32_t len) {
	for (int32_t i = off; i < off + len; ++i) {
		int32_t c = read();
		if (c == -1) {
			if (i > off) {
				return i - off;
			} else {
				return -1;
			}
		}
		$nc(cbuf)->set(i, (char16_t)c);
	}
	return len;
}

void ABCReader::close() {
	this->len = 0;
}

ABCReader::ABCReader() {
}

$Class* ABCReader::load$($String* name, bool initialize) {
	$loadClass(ABCReader, name, initialize, &_ABCReader_ClassInfo_, allocate$ABCReader);
	return class$;
}

$Class* ABCReader::class$ = nullptr;