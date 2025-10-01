#ifndef _java_util_zip_ZipUtils_h_
#define _java_util_zip_ZipUtils_h_
//$ class java.util.zip.ZipUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Long.h>

#pragma push_macro("END_MAXLEN")
#undef END_MAXLEN
#pragma push_macro("VERSION_MADE_BY_BASE_UNIX")
#undef VERSION_MADE_BY_BASE_UNIX
#pragma push_macro("FILE_ATTRIBUTES_UNIX")
#undef FILE_ATTRIBUTES_UNIX
#pragma push_macro("WINDOWS_TIME_NOT_AVAILABLE")
#undef WINDOWS_TIME_NOT_AVAILABLE
#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("WINDOWS_EPOCH_IN_MICROSECONDS")
#undef WINDOWS_EPOCH_IN_MICROSECONDS
#pragma push_macro("UPPER_UNIXTIME_BOUND")
#undef UPPER_UNIXTIME_BOUND
#pragma push_macro("READBLOCKSZ")
#undef READBLOCKSZ

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileTime;
			}
		}
	}
}
namespace java {
	namespace time {
		class LocalDateTime;
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

class ZipUtils : public ::java::lang::Object {
	$class(ZipUtils, 0, ::java::lang::Object)
public:
	ZipUtils();
	void init$();
	static int32_t CENATT($bytes* b, int32_t pos);
	static int64_t CENATX($bytes* b, int32_t pos);
	static int32_t CENATX_PERMS($bytes* b, int32_t pos);
	static int32_t CENCOM($bytes* b, int32_t pos);
	static int64_t CENCRC($bytes* b, int32_t pos);
	static int32_t CENDSK($bytes* b, int32_t pos);
	static int32_t CENEXT($bytes* b, int32_t pos);
	static int32_t CENFLG($bytes* b, int32_t pos);
	static int32_t CENHOW($bytes* b, int32_t pos);
	static int64_t CENLEN($bytes* b, int32_t pos);
	static int32_t CENNAM($bytes* b, int32_t pos);
	static int64_t CENOFF($bytes* b, int32_t pos);
	static int64_t CENSIG($bytes* b, int32_t pos);
	static int64_t CENSIZ($bytes* b, int32_t pos);
	static int64_t CENTIM($bytes* b, int32_t pos);
	static int32_t CENVEM($bytes* b, int32_t pos);
	static int32_t CENVEM_FA($bytes* b, int32_t pos);
	static int32_t CENVER($bytes* b, int32_t pos);
	static int32_t CH($bytes* b, int32_t n);
	static int32_t ENDCOM($bytes* b);
	static int32_t ENDCOM($bytes* b, int32_t off);
	static int64_t ENDOFF($bytes* b);
	static int64_t ENDSIZ($bytes* b);
	static int32_t ENDSUB($bytes* b);
	static int32_t ENDTOT($bytes* b);
	static int64_t EXTCRC($bytes* b);
	static int64_t EXTLEN($bytes* b);
	static int64_t EXTSIZ($bytes* b);
	static int64_t GETSIG($bytes* b);
	static int64_t LG($bytes* b, int32_t n);
	static int64_t LL($bytes* b, int32_t n);
	static int64_t LOCCRC($bytes* b);
	static int32_t LOCEXT($bytes* b);
	static int32_t LOCFLG($bytes* b);
	static int32_t LOCHOW($bytes* b);
	static int64_t LOCLEN($bytes* b);
	static int32_t LOCNAM($bytes* b);
	static int64_t LOCSIG($bytes* b);
	static int64_t LOCSIZ($bytes* b);
	static int64_t LOCTIM($bytes* b);
	static int32_t LOCVER($bytes* b);
	static int32_t SH($bytes* b, int32_t n);
	static int64_t ZIP64_ENDOFF($bytes* b);
	static int64_t ZIP64_ENDSIZ($bytes* b);
	static int64_t ZIP64_ENDTOD($bytes* b);
	static int64_t ZIP64_ENDTOT($bytes* b);
	static int64_t ZIP64_LOCOFF($bytes* b);
	static int64_t dosToJavaTime(int64_t dtime);
	static int64_t extendedDosToJavaTime(int64_t xdostime);
	static int64_t fileTimeToUnixTime(::java::nio::file::attribute::FileTime* ftime);
	static int64_t fileTimeToWinTime(::java::nio::file::attribute::FileTime* ftime);
	static int32_t get16($bytes* b, int32_t off);
	static int64_t get32($bytes* b, int32_t off);
	static int32_t get32S($bytes* b, int32_t off);
	static int64_t get64($bytes* b, int32_t off);
	static $bytes* getBufferArray(::java::nio::ByteBuffer* byteBuffer);
	static int32_t getBufferOffset(::java::nio::ByteBuffer* byteBuffer);
	static ::java::time::LocalDateTime* javaEpochToLocalDateTime(int64_t time);
	static int64_t javaToDosTime(::java::time::LocalDateTime* ldt);
	static int64_t javaToExtendedDosTime(int64_t time);
	static void loadLibrary();
	static int64_t overflowDosToJavaTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
	static ::java::nio::file::attribute::FileTime* unixTimeToFileTime(int64_t utime);
	static ::java::nio::file::attribute::FileTime* winTimeToFileTime(int64_t wtime);
	static const int64_t WINDOWS_EPOCH_IN_MICROSECONDS = (int64_t)0xFFD6A169B779C000;
	static const int64_t WINDOWS_TIME_NOT_AVAILABLE = ::java::lang::Long::MIN_VALUE;
	static ::java::nio::ByteBuffer* defaultBuf;
	static const int64_t UPPER_UNIXTIME_BOUND = 0x7FFFFFFF;
	static const int32_t FILE_ATTRIBUTES_UNIX = 3;
	static const int32_t VERSION_MADE_BY_BASE_UNIX = 768; // FILE_ATTRIBUTES_UNIX << 8
	static const int64_t END_MAXLEN = 65557; // 0x0000FFFF + 22
	static const int32_t READBLOCKSZ = 128;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int64_t byteBufferArrayOffset;
	static int64_t byteBufferOffsetOffset;
};

		} // zip
	} // util
} // java

#pragma pop_macro("END_MAXLEN")
#pragma pop_macro("VERSION_MADE_BY_BASE_UNIX")
#pragma pop_macro("FILE_ATTRIBUTES_UNIX")
#pragma pop_macro("WINDOWS_TIME_NOT_AVAILABLE")
#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("WINDOWS_EPOCH_IN_MICROSECONDS")
#pragma pop_macro("UPPER_UNIXTIME_BOUND")
#pragma pop_macro("READBLOCKSZ")

#endif // _java_util_zip_ZipUtils_h_