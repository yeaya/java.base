#ifndef _java_util_zip_CRC32_h_
#define _java_util_zip_CRC32_h_
//$ class java.util.zip.CRC32
//$ extends java.util.zip.Checksum

#include <java/lang/Array.h>
#include <java/util/zip/Checksum.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace java {
	namespace util {
		namespace zip {

class $import CRC32 : public ::java::util::zip::Checksum {
	$class(CRC32, 0, ::java::util::zip::Checksum)
public:
	CRC32();
	void init$();
	virtual int64_t getValue() override;
	virtual void reset() override;
	using ::java::util::zip::Checksum::update;
	virtual void update(int32_t b) override;
	virtual void update($bytes* b, int32_t off, int32_t len) override;
	virtual void update(::java::nio::ByteBuffer* buffer) override;
	static int32_t update(int32_t crc, int32_t b);
	static int32_t updateByteBuffer(int32_t alder, int64_t addr, int32_t off, int32_t len);
	static int32_t updateByteBuffer0(int32_t alder, int64_t addr, int32_t off, int32_t len);
	static void updateByteBufferCheck(int64_t addr);
	static int32_t updateBytes(int32_t crc, $bytes* b, int32_t off, int32_t len);
	static int32_t updateBytes0(int32_t crc, $bytes* b, int32_t off, int32_t len);
	static void updateBytesCheck($bytes* b, int32_t off, int32_t len);
	static bool $assertionsDisabled;
	int32_t crc = 0;
};

		} // zip
	} // util
} // java

#endif // _java_util_zip_CRC32_h_