#ifndef _java_util_zip_ZipFile$ZipFileInputStream_h_
#define _java_util_zip_ZipFile$ZipFileInputStream_h_
//$ class java.util.zip.ZipFile$ZipFileInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace zip {
			class ZipFile;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class ZipFile$ZipFileInputStream : public ::java::io::InputStream {
	$class(ZipFile$ZipFileInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	ZipFile$ZipFileInputStream();
	void init$(::java::util::zip::ZipFile* this$0, $bytes* cen, int32_t cenpos);
	virtual int32_t available() override;
	void checkZIP64($bytes* cen, int32_t cenpos);
	virtual void close() override;
	int64_t initDataOffset();
	using ::java::io::InputStream::read;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual int32_t read() override;
	virtual int64_t size();
	virtual int64_t skip(int64_t n) override;
	::java::util::zip::ZipFile* this$0 = nullptr;
	$volatile(bool) closeRequested = false;
	int64_t pos = 0;
	int64_t startingPos = 0;
	int64_t rem = 0;
	int64_t size$ = 0;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_ZipFile$ZipFileInputStream_h_