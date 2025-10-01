#ifndef _java_util_zip_InflaterInputStream_h_
#define _java_util_zip_InflaterInputStream_h_
//$ class java.util.zip.InflaterInputStream
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
			class Inflater;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export InflaterInputStream : public ::java::io::FilterInputStream {
	$class(InflaterInputStream, $NO_CLASS_INIT, ::java::io::FilterInputStream)
public:
	InflaterInputStream();
	void init$(::java::io::InputStream* in, ::java::util::zip::Inflater* inf, int32_t size);
	void init$(::java::io::InputStream* in, ::java::util::zip::Inflater* inf);
	void init$(::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	void ensureOpen();
	virtual void fill();
	virtual void mark(int32_t readlimit) override;
	virtual bool markSupported() override;
	using ::java::io::FilterInputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	virtual int64_t skip(int64_t n) override;
	::java::util::zip::Inflater* inf = nullptr;
	$bytes* buf = nullptr;
	int32_t len = 0;
	bool closed = false;
	bool reachEOF = false;
	bool usesDefaultInflater = false;
	$bytes* singleByteBuf = nullptr;
	$bytes* b = nullptr;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_InflaterInputStream_h_