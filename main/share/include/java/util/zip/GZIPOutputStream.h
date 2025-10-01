#ifndef _java_util_zip_GZIPOutputStream_h_
#define _java_util_zip_GZIPOutputStream_h_
//$ class java.util.zip.GZIPOutputStream
//$ extends java.util.zip.DeflaterOutputStream

#include <java/lang/Array.h>
#include <java/util/zip/DeflaterOutputStream.h>

#pragma push_macro("GZIP_MAGIC")
#undef GZIP_MAGIC
#pragma push_macro("OS_UNKNOWN")
#undef OS_UNKNOWN
#pragma push_macro("TRAILER_SIZE")
#undef TRAILER_SIZE

namespace java {
	namespace io {
		class OutputStream;
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

class $import GZIPOutputStream : public ::java::util::zip::DeflaterOutputStream {
	$class(GZIPOutputStream, $NO_CLASS_INIT, ::java::util::zip::DeflaterOutputStream)
public:
	GZIPOutputStream();
	void init$(::java::io::OutputStream* out, int32_t size);
	void init$(::java::io::OutputStream* out, int32_t size, bool syncFlush);
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, bool syncFlush);
	virtual void finish() override;
	using ::java::util::zip::DeflaterOutputStream::write;
	virtual void write($bytes* buf, int32_t off, int32_t len) override;
	void writeHeader();
	void writeInt(int32_t i, $bytes* buf, int32_t offset);
	void writeShort(int32_t s, $bytes* buf, int32_t offset);
	void writeTrailer($bytes* buf, int32_t offset);
	::java::util::zip::CRC32* crc = nullptr;
	static const int32_t GZIP_MAGIC = 0x00008B1F;
	static const int32_t TRAILER_SIZE = 8;
	static const int8_t OS_UNKNOWN = (int8_t)255;
};

		} // zip
	} // util
} // java

#pragma pop_macro("GZIP_MAGIC")
#pragma pop_macro("OS_UNKNOWN")
#pragma pop_macro("TRAILER_SIZE")

#endif // _java_util_zip_GZIPOutputStream_h_