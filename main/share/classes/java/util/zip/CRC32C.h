#ifndef _java_util_zip_CRC32C_h_
#define _java_util_zip_CRC32C_h_
//$ class java.util.zip.CRC32C
//$ extends java.util.zip.Checksum

#include <java/lang/Array.h>
#include <java/util/zip/Checksum.h>

#pragma push_macro("CRC32C")
#undef CRC32C
#pragma push_macro("CRC32C_POLY")
#undef CRC32C_POLY
#pragma push_macro("REVERSED_CRC32C_POLY")
#undef REVERSED_CRC32C_POLY
#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace util {
		namespace zip {

class $export CRC32C : public ::java::util::zip::Checksum {
	$class(CRC32C, 0, ::java::util::zip::Checksum)
public:
	CRC32C();
	void init$();
	virtual int64_t getValue() override;
	virtual void reset() override;
	using ::java::util::zip::Checksum::update;
	virtual void update(int32_t b) override;
	virtual void update($bytes* b, int32_t off, int32_t len) override;
	virtual void update(::java::nio::ByteBuffer* buffer) override;
	static int32_t updateBytes(int32_t crc, $bytes* b, int32_t off, int32_t end);
	static int32_t updateDirectByteBuffer(int32_t crc, int64_t address, int32_t off, int32_t end);
	static bool $assertionsDisabled;
	static const int32_t CRC32C_POLY = 0x1EDC6F41;
	static int32_t REVERSED_CRC32C_POLY;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
	static $ints* byteTable;
	static $Array<int32_t, 2>* byteTables;
	static $ints* byteTable0;
	static $ints* byteTable1;
	static $ints* byteTable2;
	static $ints* byteTable3;
	static $ints* byteTable4;
	static $ints* byteTable5;
	static $ints* byteTable6;
	static $ints* byteTable7;
	int32_t crc = 0;
};

		} // zip
	} // util
} // java

#pragma pop_macro("CRC32C")
#pragma pop_macro("CRC32C_POLY")
#pragma pop_macro("REVERSED_CRC32C_POLY")
#pragma pop_macro("UNSAFE")

#endif // _java_util_zip_CRC32C_h_