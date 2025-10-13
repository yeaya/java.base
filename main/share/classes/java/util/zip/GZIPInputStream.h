#ifndef _java_util_zip_GZIPInputStream_h_
#define _java_util_zip_GZIPInputStream_h_
//$ class java.util.zip.GZIPInputStream
//$ extends java.util.zip.InflaterInputStream

#include <java/lang/Array.h>
#include <java/util/zip/InflaterInputStream.h>

#pragma push_macro("FCOMMENT")
#undef FCOMMENT
#pragma push_macro("FEXTRA")
#undef FEXTRA
#pragma push_macro("FHCRC")
#undef FHCRC
#pragma push_macro("FNAME")
#undef FNAME
#pragma push_macro("FTEXT")
#undef FTEXT
#pragma push_macro("GZIP_MAGIC")
#undef GZIP_MAGIC

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class CRC32;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export GZIPInputStream : public ::java::util::zip::InflaterInputStream {
	$class(GZIPInputStream, $NO_CLASS_INIT, ::java::util::zip::InflaterInputStream)
public:
	GZIPInputStream();
	void init$(::java::io::InputStream* in, int32_t size);
	void init$(::java::io::InputStream* in);
	virtual void close() override;
	void ensureOpen();
	using ::java::util::zip::InflaterInputStream::read;
	virtual int32_t read($bytes* buf, int32_t off, int32_t len) override;
	int32_t readHeader(::java::io::InputStream* this_in);
	bool readTrailer();
	int32_t readUByte(::java::io::InputStream* in);
	int64_t readUInt(::java::io::InputStream* in);
	int32_t readUShort(::java::io::InputStream* in);
	void skipBytes(::java::io::InputStream* in, int32_t n);
	::java::util::zip::CRC32* crc = nullptr;
	bool eos = false;
	bool closed = false;
	static const int32_t GZIP_MAGIC = 0x00008B1F;
	static const int32_t FTEXT = 1;
	static const int32_t FHCRC = 2;
	static const int32_t FEXTRA = 4;
	static const int32_t FNAME = 8;
	static const int32_t FCOMMENT = 16;
	$bytes* tmpbuf = nullptr;
};

		} // zip
	} // util
} // java

#pragma pop_macro("FCOMMENT")
#pragma pop_macro("FEXTRA")
#pragma pop_macro("FHCRC")
#pragma pop_macro("FNAME")
#pragma pop_macro("FTEXT")
#pragma pop_macro("GZIP_MAGIC")

#endif // _java_util_zip_GZIPInputStream_h_