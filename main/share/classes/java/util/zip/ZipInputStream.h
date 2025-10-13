#ifndef _java_util_zip_ZipInputStream_h_
#define _java_util_zip_ZipInputStream_h_
//$ class java.util.zip.ZipInputStream
//$ extends java.util.zip.InflaterInputStream
//$ implements java.util.zip.ZipConstants

#include <java/lang/Array.h>
#include <java/util/zip/InflaterInputStream.h>
#include <java/util/zip/ZipEntry.h>

#pragma push_macro("DEFLATED")
#undef DEFLATED
#pragma push_macro("STORED")
#undef STORED

namespace java {
	namespace io {
		class InputStream;
	}
}
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
			class CRC32;
			class ZipCoder;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export ZipInputStream : public ::java::util::zip::InflaterInputStream, public ::java::util::zip::ZipConstants {
	$class(ZipInputStream, $NO_CLASS_INIT, ::java::util::zip::InflaterInputStream, ::java::util::zip::ZipConstants)
public:
	ZipInputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::InputStream* in);
	void init$(::java::io::InputStream* in, ::java::nio::charset::Charset* charset);
	virtual int32_t available() override;
	virtual void close() override;
	virtual void closeEntry();
	virtual ::java::util::zip::ZipEntry* createZipEntry($String* name);
	void ensureOpen();
	virtual ::java::util::zip::ZipEntry* getNextEntry();
	using ::java::util::zip::InflaterInputStream::read;
	virtual int32_t read($bytes* b, int32_t off, int32_t len) override;
	void readEnd(::java::util::zip::ZipEntry* e);
	void readFully($bytes* b, int32_t off, int32_t len);
	::java::util::zip::ZipEntry* readLOC();
	virtual int64_t skip(int64_t n) override;
	virtual $String* toString() override;
	::java::util::zip::ZipEntry* entry = nullptr;
	int32_t flag = 0;
	::java::util::zip::CRC32* crc = nullptr;
	int64_t remaining = 0;
	$bytes* tmpbuf = nullptr;
	static const int32_t STORED = ::java::util::zip::ZipEntry::STORED;
	static const int32_t DEFLATED = ::java::util::zip::ZipEntry::DEFLATED;
	bool closed = false;
	bool entryEOF = false;
	::java::util::zip::ZipCoder* zc = nullptr;
	$bytes* b = nullptr;
};

		} // zip
	} // util
} // java

#pragma pop_macro("DEFLATED")
#pragma pop_macro("STORED")

#endif // _java_util_zip_ZipInputStream_h_