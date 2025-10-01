#ifndef _java_util_zip_InflaterOutputStream_h_
#define _java_util_zip_InflaterOutputStream_h_
//$ class java.util.zip.InflaterOutputStream
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
			class Inflater;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export InflaterOutputStream : public ::java::io::FilterOutputStream {
	$class(InflaterOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	InflaterOutputStream();
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, ::java::util::zip::Inflater* infl);
	void init$(::java::io::OutputStream* out, ::java::util::zip::Inflater* infl, int32_t bufLen);
	virtual void close() override;
	void ensureOpen();
	virtual void finish();
	virtual void flush() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::util::zip::Inflater* inf = nullptr;
	$bytes* buf = nullptr;
	$bytes* wbuf = nullptr;
	bool usesDefaultInflater = false;
	bool closed = false;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_InflaterOutputStream_h_