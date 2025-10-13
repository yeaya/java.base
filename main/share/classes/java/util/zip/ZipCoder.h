#ifndef _java_util_zip_ZipCoder_h_
#define _java_util_zip_ZipCoder_h_
//$ class java.util.zip.ZipCoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JLA")
#undef JLA
#pragma push_macro("UTF8")
#undef UTF8

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
			class CharsetEncoder;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipCoder$UTF8ZipCoder;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipCoder : public ::java::lang::Object {
	$class(ZipCoder, 0, ::java::lang::Object)
public:
	ZipCoder();
	void init$(::java::nio::charset::Charset* cs);
	virtual int32_t checkedHash($bytes* a, int32_t off, int32_t len);
	virtual ::java::nio::charset::CharsetDecoder* decoder();
	::java::nio::charset::CharsetEncoder* encoder();
	static ::java::util::zip::ZipCoder* get(::java::nio::charset::Charset* charset);
	virtual $bytes* getBytes($String* s);
	virtual bool hasTrailingSlash($bytes* a, int32_t end);
	static int32_t hash($String* name);
	virtual bool isUTF8();
	$bytes* slashBytes();
	using ::java::lang::Object::toString;
	virtual $String* toString($bytes* ba, int32_t off, int32_t length);
	virtual $String* toString($bytes* ba, int32_t length);
	virtual $String* toString($bytes* ba);
	static $String* toStringUTF8($bytes* ba, int32_t len);
	static ::jdk::internal::access::JavaLangAccess* JLA;
	static ::java::util::zip::ZipCoder$UTF8ZipCoder* UTF8;
	$bytes* slashBytes$ = nullptr;
	::java::nio::charset::Charset* cs = nullptr;
	::java::nio::charset::CharsetDecoder* dec = nullptr;
	::java::nio::charset::CharsetEncoder* enc = nullptr;
};

		} // zip
	} // util
} // java

#pragma pop_macro("JLA")
#pragma pop_macro("UTF8")

#endif // _java_util_zip_ZipCoder_h_