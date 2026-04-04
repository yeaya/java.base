#include <jdk/internal/util/xml/impl/ReaderUTF8.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace util {
			namespace xml {
				namespace impl {

void ReaderUTF8::init$($InputStream* is) {
	$Reader::init$();
	$set(this, is, is);
}

int32_t ReaderUTF8::read($chars* cbuf, int32_t off, int32_t len) {
	int32_t num = 0;
	int32_t val = 0;
	while (num < len) {
		if ((val = $nc(this->is)->read()) < 0) {
			return (num != 0) ? num : -1;
		}
		switch (val & 0xf0) {
		case 192:
		case 208:
			$nc(cbuf)->set(off++, (char16_t)(((val & 0x1f) << 6) | (this->is->read() & 0x3f)));
			break;
		case 224:
			{
				int32_t var$0 = ((val & 0x0f) << 12) | ((this->is->read() & 0x3f) << 6);
				$nc(cbuf)->set(off++, (char16_t)(var$0 | (this->is->read() & 0x3f)));
				break;
			}
		case 240:
			$throwNew($UnsupportedEncodingException, "UTF-32 (or UCS-4) encoding not supported."_s);
		default:
			$nc(cbuf)->set(off++, (char16_t)val);
			break;
		}
		++num;
	}
	return num;
}

int32_t ReaderUTF8::read() {
	int32_t val = 0;
	if ((val = $nc(this->is)->read()) < 0) {
		return -1;
	}
	switch (val & 0xf0) {
	case 192:
	case 208:
		val = ((val & 0x1f) << 6) | (this->is->read() & 0x3f);
		break;
	case 224:
		{
			int32_t var$0 = ((val & 0x0f) << 12) | ((this->is->read() & 0x3f) << 6);
			val = var$0 | (this->is->read() & 0x3f);
			break;
		}
	case 240:
		$throwNew($UnsupportedEncodingException);
	default:
		break;
	}
	return val;
}

void ReaderUTF8::close() {
	$nc(this->is)->close();
}

ReaderUTF8::ReaderUTF8() {
}

$Class* ReaderUTF8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"is", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(ReaderUTF8, is)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(ReaderUTF8, init$, void, $InputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ReaderUTF8, close, void), "java.io.IOException"},
		{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(ReaderUTF8, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ReaderUTF8, read, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.util.xml.impl.ReaderUTF8",
		"java.io.Reader",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReaderUTF8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ReaderUTF8));
	});
	return class$;
}

$Class* ReaderUTF8::class$ = nullptr;

				} // impl
			} // xml
		} // util
	} // internal
} // jdk