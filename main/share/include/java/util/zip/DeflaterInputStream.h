#ifndef _java_util_zip_DeflaterInputStream_h_
#define _java_util_zip_DeflaterInputStream_h_
//$ class java.util.zip.DeflaterInputStream
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
			class Deflater;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $import DeflaterInputStream : public ::java::io::FilterInputStream {
	$class(DeflaterInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	DeflaterInputStream();
	void init$(::java::io::InputStream* in);
	void init$(::java::io::InputStream* in, ::java::util::zip::Deflater* defl);
	void init$(::java::io::InputStream* in, ::java::util::zip::Deflater* defl, int32_t bufLen);
	virtual int32_t available() override;
	virtual void close() override;
	void ensureOpen();
	virtual void mark(int32_t limit) override;
	virtual bool markSupported() override;
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::java::util::zip::Deflater* def = nullptr;
	$bytes* buf = nullptr;
	$bytes* rbuf = nullptr;
	bool usesDefaultDeflater = false;
	bool reachEOF = false;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_DeflaterInputStream_h_