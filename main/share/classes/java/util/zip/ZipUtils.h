#ifndef _java_util_zip_ZipUtils_h_
#define _java_util_zip_ZipUtils_h_
//$ class java.util.zip.ZipUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CENATT")
#undef CENATT
#pragma push_macro("CENATX")
#undef CENATX
#pragma push_macro("CENATX_PERMS")
#undef CENATX_PERMS
#pragma push_macro("CENCOM")
#undef CENCOM
#pragma push_macro("CENCRC")
#undef CENCRC
#pragma push_macro("CENDSK")
#undef CENDSK
#pragma push_macro("CENEXT")
#undef CENEXT
#pragma push_macro("CENFLG")
#undef CENFLG
#pragma push_macro("CENHOW")
#undef CENHOW
#pragma push_macro("CENLEN")
#undef CENLEN
#pragma push_macro("CENNAM")
#undef CENNAM
#pragma push_macro("CENOFF")
#undef CENOFF
#pragma push_macro("CENSIG")
#undef CENSIG
#pragma push_macro("CENSIZ")
#undef CENSIZ
#pragma push_macro("CENTIM")
#undef CENTIM
#pragma push_macro("CENVEM")
#undef CENVEM
#pragma push_macro("CENVEM_FA")
#undef CENVEM_FA
#pragma push_macro("CENVER")
#undef CENVER
#pragma push_macro("CH")
#undef CH
#pragma push_macro("ENDCOM")
#undef ENDCOM
#pragma push_macro("ENDOFF")
#undef ENDOFF
#pragma push_macro("ENDSIZ")
#undef ENDSIZ
#pragma push_macro("ENDSUB")
#undef ENDSUB
#pragma push_macro("ENDTOT")
#undef ENDTOT
#pragma push_macro("END_MAXLEN")
#undef END_MAXLEN
#pragma push_macro("EXTCRC")
#undef EXTCRC
#pragma push_macro("EXTLEN")
#undef EXTLEN
#pragma push_macro("EXTSIZ")
#undef EXTSIZ
#pragma push_macro("FILE_ATTRIBUTES_UNIX")
#undef FILE_ATTRIBUTES_UNIX
#pragma push_macro("GETSIG")
#undef GETSIG
#pragma push_macro("LG")
#undef LG
#pragma push_macro("LL")
#undef LL
#pragma push_macro("LOCCRC")
#undef LOCCRC
#pragma push_macro("LOCEXT")
#undef LOCEXT
#pragma push_macro("LOCFLG")
#undef LOCFLG
#pragma push_macro("LOCHOW")
#undef LOCHOW
#pragma push_macro("LOCLEN")
#undef LOCLEN
#pragma push_macro("LOCNAM")
#undef LOCNAM
#pragma push_macro("LOCSIG")
#undef LOCSIG
#pragma push_macro("LOCSIZ")
#undef LOCSIZ
#pragma push_macro("LOCTIM")
#undef LOCTIM
#pragma push_macro("LOCVER")
#undef LOCVER
#pragma push_macro("READBLOCKSZ")
#undef READBLOCKSZ
#pragma push_macro("SH")
#undef SH
#pragma push_macro("UPPER_UNIXTIME_BOUND")
#undef UPPER_UNIXTIME_BOUND
#pragma push_macro("VERSION_MADE_BY_BASE_UNIX")
#undef VERSION_MADE_BY_BASE_UNIX
#pragma push_macro("WINDOWS_EPOCH_IN_MICROSECONDS")
#undef WINDOWS_EPOCH_IN_MICROSECONDS
#pragma push_macro("WINDOWS_TIME_NOT_AVAILABLE")
#undef WINDOWS_TIME_NOT_AVAILABLE
#pragma push_macro("ZIP64_ENDOFF")
#undef ZIP64_ENDOFF
#pragma push_macro("ZIP64_ENDSIZ")
#undef ZIP64_ENDSIZ
#pragma push_macro("ZIP64_ENDTOD")
#undef ZIP64_ENDTOD
#pragma push_macro("ZIP64_ENDTOT")
#undef ZIP64_ENDTOT
#pragma push_macro("ZIP64_LOCOFF")
#undef ZIP64_LOCOFF

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
	static const int64_t WINDOWS_TIME_NOT_AVAILABLE = 0x8000000000000000; // Long.MIN_VALUE
	static ::java::nio::ByteBuffer* defaultBuf;
	static const int64_t UPPER_UNIXTIME_BOUND = 0x7FFFFFFF;
	static const int32_t FILE_ATTRIBUTES_UNIX = 3;
	static const int32_t VERSION_MADE_BY_BASE_UNIX = 768; // FILE_ATTRIBUTES_UNIX << 8
	static const int64_t END_MAXLEN = 65557; // 65535 + 22
	static const int32_t READBLOCKSZ = 128;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static int64_t byteBufferArrayOffset;
	static int64_t byteBufferOffsetOffset;
};

		} // zip
	} // util
} // java

#pragma pop_macro("CENATT")
#pragma pop_macro("CENATX")
#pragma pop_macro("CENATX_PERMS")
#pragma pop_macro("CENCOM")
#pragma pop_macro("CENCRC")
#pragma pop_macro("CENDSK")
#pragma pop_macro("CENEXT")
#pragma pop_macro("CENFLG")
#pragma pop_macro("CENHOW")
#pragma pop_macro("CENLEN")
#pragma pop_macro("CENNAM")
#pragma pop_macro("CENOFF")
#pragma pop_macro("CENSIG")
#pragma pop_macro("CENSIZ")
#pragma pop_macro("CENTIM")
#pragma pop_macro("CENVEM")
#pragma pop_macro("CENVEM_FA")
#pragma pop_macro("CENVER")
#pragma pop_macro("CH")
#pragma pop_macro("ENDCOM")
#pragma pop_macro("ENDOFF")
#pragma pop_macro("ENDSIZ")
#pragma pop_macro("ENDSUB")
#pragma pop_macro("ENDTOT")
#pragma pop_macro("END_MAXLEN")
#pragma pop_macro("EXTCRC")
#pragma pop_macro("EXTLEN")
#pragma pop_macro("EXTSIZ")
#pragma pop_macro("FILE_ATTRIBUTES_UNIX")
#pragma pop_macro("GETSIG")
#pragma pop_macro("LG")
#pragma pop_macro("LL")
#pragma pop_macro("LOCCRC")
#pragma pop_macro("LOCEXT")
#pragma pop_macro("LOCFLG")
#pragma pop_macro("LOCHOW")
#pragma pop_macro("LOCLEN")
#pragma pop_macro("LOCNAM")
#pragma pop_macro("LOCSIG")
#pragma pop_macro("LOCSIZ")
#pragma pop_macro("LOCTIM")
#pragma pop_macro("LOCVER")
#pragma pop_macro("READBLOCKSZ")
#pragma pop_macro("SH")
#pragma pop_macro("UPPER_UNIXTIME_BOUND")
#pragma pop_macro("VERSION_MADE_BY_BASE_UNIX")
#pragma pop_macro("WINDOWS_EPOCH_IN_MICROSECONDS")
#pragma pop_macro("WINDOWS_TIME_NOT_AVAILABLE")
#pragma pop_macro("ZIP64_ENDOFF")
#pragma pop_macro("ZIP64_ENDSIZ")
#pragma pop_macro("ZIP64_ENDTOD")
#pragma pop_macro("ZIP64_ENDTOT")
#pragma pop_macro("ZIP64_LOCOFF")

#endif // _java_util_zip_ZipUtils_h_