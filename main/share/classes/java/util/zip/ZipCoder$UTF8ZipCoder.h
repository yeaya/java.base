#ifndef _java_util_zip_ZipCoder$UTF8ZipCoder_h_
#define _java_util_zip_ZipCoder$UTF8ZipCoder_h_
//$ class java.util.zip.ZipCoder$UTF8ZipCoder
//$ extends java.util.zip.ZipCoder

#include <java/lang/Array.h>
#include <java/util/zip/ZipCoder.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipCoder$UTF8ZipCoder : public ::java::util::zip::ZipCoder {
	$class(ZipCoder$UTF8ZipCoder, $NO_CLASS_INIT, ::java::util::zip::ZipCoder)
public:
	ZipCoder$UTF8ZipCoder();
	void init$(::java::nio::charset::Charset* utf8);
	virtual int32_t checkedHash($bytes* a, int32_t off, int32_t len) override;
	virtual $bytes* getBytes($String* s) override;
	virtual bool hasTrailingSlash($bytes* a, int32_t end) override;
	virtual bool isUTF8() override;
	using ::java::util::zip::ZipCoder::toString;
	virtual $String* toString($bytes* ba, int32_t off, int32_t length) override;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipCoder$UTF8ZipCoder_h_