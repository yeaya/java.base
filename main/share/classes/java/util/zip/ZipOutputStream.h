#ifndef _java_util_zip_ZipOutputStream_h_
#define _java_util_zip_ZipOutputStream_h_
//$ class java.util.zip.ZipOutputStream
//$ extends java.util.zip.DeflaterOutputStream
//$ implements java.util.zip.ZipConstants

#include <java/lang/Array.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <java/util/zip/ZipEntry.h>

#pragma push_macro("STORED")
#undef STORED
#pragma push_macro("DEFLATED")
#undef DEFLATED

namespace java {
	namespace io {
		class OutputStream;
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
		class HashSet;
		class Vector;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class CRC32;
			class ZipCoder;
			class ZipOutputStream$XEntry;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export ZipOutputStream : public ::java::util::zip::DeflaterOutputStream, public ::java::util::zip::ZipConstants {
	$class(ZipOutputStream, 0, ::java::util::zip::DeflaterOutputStream, ::java::util::zip::ZipConstants)
public:
	ZipOutputStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, ::java::nio::charset::Charset* charset);
	virtual void close() override;
	virtual void closeEntry();
	void ensureOpen();
	virtual void finish() override;
	int32_t getExtraLen($bytes* extra);
	virtual void putNextEntry(::java::util::zip::ZipEntry* e);
	virtual void setComment($String* comment);
	virtual void setLevel(int32_t level);
	virtual void setMethod(int32_t method);
	virtual $String* toString() override;
	static int32_t version(::java::util::zip::ZipEntry* e);
	int32_t versionMadeBy(::java::util::zip::ZipEntry* e, int32_t version);
	using ::java::util::zip::DeflaterOutputStream::write;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	void writeByte(int32_t v);
	void writeBytes($bytes* b, int32_t off, int32_t len);
	void writeCEN(::java::util::zip::ZipOutputStream$XEntry* xentry);
	void writeEND(int64_t off, int64_t len);
	void writeEXT(::java::util::zip::ZipEntry* e);
	void writeExtra($bytes* extra);
	void writeInt(int64_t v);
	void writeLOC(::java::util::zip::ZipOutputStream$XEntry* xentry);
	void writeLong(int64_t v);
	void writeShort(int32_t v);
	static bool inhibitZip64;
	::java::util::zip::ZipOutputStream$XEntry* current = nullptr;
	::java::util::Vector* xentries = nullptr;
	::java::util::HashSet* names = nullptr;
	::java::util::zip::CRC32* crc = nullptr;
	int64_t written = 0;
	int64_t locoff = 0;
	$bytes* comment = nullptr;
	int32_t method = 0;
	bool finished = false;
	bool closed = false;
	::java::util::zip::ZipCoder* zc = nullptr;
	static const int32_t STORED = ::java::util::zip::ZipEntry::STORED;
	static const int32_t DEFLATED = ::java::util::zip::ZipEntry::DEFLATED;
};

		} // zip
	} // util
} // java

#pragma pop_macro("STORED")
#pragma pop_macro("DEFLATED")

#endif // _java_util_zip_ZipOutputStream_h_