#ifndef _java_util_zip_CheckedInputStream_h_
#define _java_util_zip_CheckedInputStream_h_
//$ class java.util.zip.CheckedInputStream
//$ extends java.io.FilterInputStream

#include <java/io/FilterInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class Checksum;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $import CheckedInputStream : public ::java::io::FilterInputStream {
	$class(CheckedInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	CheckedInputStream();
	void init$(::java::io::InputStream* in, ::java::util::zip::Checksum* cksum);
	virtual ::java::util::zip::Checksum* getChecksum();
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* buf, int32_t off, int32_t len) override;
	virtual int64_t skip(int64_t n) override;
	::java::util::zip::Checksum* cksum = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_CheckedInputStream_h_