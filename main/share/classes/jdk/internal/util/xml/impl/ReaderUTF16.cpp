#include <jdk/internal/util/xml/impl/ReaderUTF16.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

$FieldInfo _ReaderUTF16_FieldInfo_[] = {
	{"is", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(ReaderUTF16, is)},
	{"bo", "C", nullptr, $PRIVATE, $field(ReaderUTF16, bo)},
	{}
};

$MethodInfo _ReaderUTF16_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;C)V", nullptr, $PUBLIC, $method(ReaderUTF16, init$, void, $InputStream*, char16_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ReaderUTF16, close, void), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(ReaderUTF16, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ReaderUTF16, read, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _ReaderUTF16_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.util.xml.impl.ReaderUTF16",
	"java.io.Reader",
	nullptr,
	_ReaderUTF16_FieldInfo_,
	_ReaderUTF16_MethodInfo_
};

$Object* allocate$ReaderUTF16($Class* clazz) {
	return $of($alloc(ReaderUTF16));
}

void ReaderUTF16::init$($InputStream* is, char16_t bo) {
	$Reader::init$();
	switch (bo) {
	case u'l':
		{
			break;
		}
	case u'b':
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, ""_s);
		}
	}
	this->bo = bo;
	$set(this, is, is);
}

int32_t ReaderUTF16::read($chars* cbuf, int32_t off, int32_t len) {
	int32_t num = 0;
	int32_t val = 0;
	if (this->bo == u'b') {
		while (num < len) {
			if ((val = $nc(this->is)->read()) < 0) {
				return (num != 0) ? num : -1;
			}
			$nc(cbuf)->set(off++, (char16_t)((val << 8) | ((int32_t)($nc(this->is)->read() & (uint32_t)255))));
			++num;
		}
	} else {
		while (num < len) {
			if ((val = $nc(this->is)->read()) < 0) {
				return (num != 0) ? num : -1;
			}
			$nc(cbuf)->set(off++, (char16_t)(($nc(this->is)->read() << 8) | ((int32_t)(val & (uint32_t)255))));
			++num;
		}
	}
	return num;
}

int32_t ReaderUTF16::read() {
	int32_t val = 0;
	if ((val = $nc(this->is)->read()) < 0) {
		return -1;
	}
	if (this->bo == u'b') {
		val = (char16_t)((val << 8) | ((int32_t)($nc(this->is)->read() & (uint32_t)255)));
	} else {
		val = (char16_t)(($nc(this->is)->read() << 8) | ((int32_t)(val & (uint32_t)255)));
	}
	return val;
}

void ReaderUTF16::close() {
	$nc(this->is)->close();
}

ReaderUTF16::ReaderUTF16() {
}

$Class* ReaderUTF16::load$($String* name, bool initialize) {
	$loadClass(ReaderUTF16, name, initialize, &_ReaderUTF16_ClassInfo_, allocate$ReaderUTF16);
	return class$;
}

$Class* ReaderUTF16::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk