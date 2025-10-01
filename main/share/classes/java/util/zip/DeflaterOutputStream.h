#ifndef _java_util_zip_DeflaterOutputStream_h_
#define _java_util_zip_DeflaterOutputStream_h_
//$ class java.util.zip.DeflaterOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
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

class $export DeflaterOutputStream : public ::java::io::FilterOutputStream {
	$class(DeflaterOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	DeflaterOutputStream();
	void init$(::java::io::OutputStream* out, ::java::util::zip::Deflater* def, int32_t size, bool syncFlush);
	void init$(::java::io::OutputStream* out, ::java::util::zip::Deflater* def, int32_t size);
	void init$(::java::io::OutputStream* out, ::java::util::zip::Deflater* def, bool syncFlush);
	void init$(::java::io::OutputStream* out, ::java::util::zip::Deflater* def);
	void init$(::java::io::OutputStream* out, bool syncFlush);
	void init$(::java::io::OutputStream* out);
	virtual void close() override;
	virtual void deflate();
	virtual void finish();
	virtual void flush() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::util::zip::Deflater* def = nullptr;
	$bytes* buf = nullptr;
	bool closed = false;
	bool syncFlush = false;
	bool usesDefaultDeflater = false;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_DeflaterOutputStream_h_