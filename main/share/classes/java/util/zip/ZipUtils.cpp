#include <java/util/zip/ZipUtils.h>

#include <java/nio/ByteBuffer.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/time/DateTimeException.h>
#include <java/time/Instant.h>
#include <java/time/LocalDateTime.h>
#include <java/time/ZoneId.h>
#include <java/time/ZoneOffset.h>
#include <java/time/zone/ZoneRules.h>
#include <java/util/Date.h>
#include <java/util/concurrent/TimeUnit.h>
#include <java/util/zip/ZipEntry.h>
#include <jdk/internal/loader/BootLoader.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef CENATT
#undef CENATX
#undef CENATX_PERMS
#undef CENCOM
#undef CENCRC
#undef CENDSK
#undef CENEXT
#undef CENFLG
#undef CENHOW
#undef CENLEN
#undef CENNAM
#undef CENOFF
#undef CENSIG
#undef CENSIZ
#undef CENTIM
#undef CENVEM
#undef CENVEM_FA
#undef CENVER
#undef CH
#undef ENDCOM
#undef ENDOFF
#undef ENDSIZ
#undef ENDSUB
#undef ENDTOT
#undef END_MAXLEN
#undef EXTCRC
#undef EXTLEN
#undef EXTSIZ
#undef FILE_ATTRIBUTES_UNIX
#undef GETSIG
#undef LG
#undef LL
#undef LOCCRC
#undef LOCEXT
#undef LOCFLG
#undef LOCHOW
#undef LOCLEN
#undef LOCNAM
#undef LOCSIG
#undef LOCSIZ
#undef LOCTIM
#undef LOCVER
#undef MICROSECONDS
#undef MILLISECONDS
#undef READBLOCKSZ
#undef SECONDS
#undef SH
#undef UPPER_UNIXTIME_BOUND
#undef VERSION_MADE_BY_BASE_UNIX
#undef WINDOWS_EPOCH_IN_MICROSECONDS
#undef WINDOWS_TIME_NOT_AVAILABLE
#undef ZIP64_ENDOFF
#undef ZIP64_ENDSIZ
#undef ZIP64_ENDTOD
#undef ZIP64_ENDTOT
#undef ZIP64_LOCOFF

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $DateTimeException = ::java::time::DateTimeException;
using $Instant = ::java::time::Instant;
using $LocalDateTime = ::java::time::LocalDateTime;
using $ZoneId = ::java::time::ZoneId;
using $ZoneRules = ::java::time::zone::ZoneRules;
using $Date = ::java::util::Date;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipUtils_FieldInfo_[] = {
	{"WINDOWS_EPOCH_IN_MICROSECONDS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ZipUtils, WINDOWS_EPOCH_IN_MICROSECONDS)},
	{"WINDOWS_TIME_NOT_AVAILABLE", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipUtils, WINDOWS_TIME_NOT_AVAILABLE)},
	{"defaultBuf", "Ljava/nio/ByteBuffer;", nullptr, $STATIC | $FINAL, $staticField(ZipUtils, defaultBuf)},
	{"UPPER_UNIXTIME_BOUND", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ZipUtils, UPPER_UNIXTIME_BOUND)},
	{"FILE_ATTRIBUTES_UNIX", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, FILE_ATTRIBUTES_UNIX)},
	{"VERSION_MADE_BY_BASE_UNIX", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, VERSION_MADE_BY_BASE_UNIX)},
	{"END_MAXLEN", "J", nullptr, $STATIC | $FINAL, $constField(ZipUtils, END_MAXLEN)},
	{"READBLOCKSZ", "I", nullptr, $STATIC | $FINAL, $constField(ZipUtils, READBLOCKSZ)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipUtils, unsafe)},
	{"byteBufferArrayOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipUtils, byteBufferArrayOffset)},
	{"byteBufferOffsetOffset", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ZipUtils, byteBufferOffsetOffset)},
	{}
};

$MethodInfo _ZipUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ZipUtils, init$, void)},
	{"CENATT", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENATT, int32_t, $bytes*, int32_t)},
	{"CENATX", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENATX, int64_t, $bytes*, int32_t)},
	{"CENATX_PERMS", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENATX_PERMS, int32_t, $bytes*, int32_t)},
	{"CENCOM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENCOM, int32_t, $bytes*, int32_t)},
	{"CENCRC", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENCRC, int64_t, $bytes*, int32_t)},
	{"CENDSK", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENDSK, int32_t, $bytes*, int32_t)},
	{"CENEXT", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENEXT, int32_t, $bytes*, int32_t)},
	{"CENFLG", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENFLG, int32_t, $bytes*, int32_t)},
	{"CENHOW", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENHOW, int32_t, $bytes*, int32_t)},
	{"CENLEN", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENLEN, int64_t, $bytes*, int32_t)},
	{"CENNAM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENNAM, int32_t, $bytes*, int32_t)},
	{"CENOFF", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENOFF, int64_t, $bytes*, int32_t)},
	{"CENSIG", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENSIG, int64_t, $bytes*, int32_t)},
	{"CENSIZ", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENSIZ, int64_t, $bytes*, int32_t)},
	{"CENTIM", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENTIM, int64_t, $bytes*, int32_t)},
	{"CENVEM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENVEM, int32_t, $bytes*, int32_t)},
	{"CENVEM_FA", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENVEM_FA, int32_t, $bytes*, int32_t)},
	{"CENVER", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CENVER, int32_t, $bytes*, int32_t)},
	{"CH", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, CH, int32_t, $bytes*, int32_t)},
	{"ENDCOM", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ENDCOM, int32_t, $bytes*)},
	{"ENDCOM", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ENDCOM, int32_t, $bytes*, int32_t)},
	{"ENDOFF", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ENDOFF, int64_t, $bytes*)},
	{"ENDSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ENDSIZ, int64_t, $bytes*)},
	{"ENDSUB", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ENDSUB, int32_t, $bytes*)},
	{"ENDTOT", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ENDTOT, int32_t, $bytes*)},
	{"EXTCRC", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, EXTCRC, int64_t, $bytes*)},
	{"EXTLEN", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, EXTLEN, int64_t, $bytes*)},
	{"EXTSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, EXTSIZ, int64_t, $bytes*)},
	{"GETSIG", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, GETSIG, int64_t, $bytes*)},
	{"LG", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LG, int64_t, $bytes*, int32_t)},
	{"LL", "([BI)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LL, int64_t, $bytes*, int32_t)},
	{"LOCCRC", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCCRC, int64_t, $bytes*)},
	{"LOCEXT", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCEXT, int32_t, $bytes*)},
	{"LOCFLG", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCFLG, int32_t, $bytes*)},
	{"LOCHOW", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCHOW, int32_t, $bytes*)},
	{"LOCLEN", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCLEN, int64_t, $bytes*)},
	{"LOCNAM", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCNAM, int32_t, $bytes*)},
	{"LOCSIG", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCSIG, int64_t, $bytes*)},
	{"LOCSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCSIZ, int64_t, $bytes*)},
	{"LOCTIM", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCTIM, int64_t, $bytes*)},
	{"LOCVER", "([B)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, LOCVER, int32_t, $bytes*)},
	{"SH", "([BI)I", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, SH, int32_t, $bytes*, int32_t)},
	{"ZIP64_ENDOFF", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ZIP64_ENDOFF, int64_t, $bytes*)},
	{"ZIP64_ENDSIZ", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ZIP64_ENDSIZ, int64_t, $bytes*)},
	{"ZIP64_ENDTOD", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ZIP64_ENDTOD, int64_t, $bytes*)},
	{"ZIP64_ENDTOT", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ZIP64_ENDTOT, int64_t, $bytes*)},
	{"ZIP64_LOCOFF", "([B)J", nullptr, $STATIC | $FINAL, $staticMethod(ZipUtils, ZIP64_LOCOFF, int64_t, $bytes*)},
	{"dosToJavaTime", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(ZipUtils, dosToJavaTime, int64_t, int64_t)},
	{"extendedDosToJavaTime", "(J)J", nullptr, $PUBLIC | $STATIC, $staticMethod(ZipUtils, extendedDosToJavaTime, int64_t, int64_t)},
	{"fileTimeToUnixTime", "(Ljava/nio/file/attribute/FileTime;)J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, fileTimeToUnixTime, int64_t, $FileTime*)},
	{"fileTimeToWinTime", "(Ljava/nio/file/attribute/FileTime;)J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, fileTimeToWinTime, int64_t, $FileTime*)},
	{"get16", "([BI)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, get16, int32_t, $bytes*, int32_t)},
	{"get32", "([BI)J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, get32, int64_t, $bytes*, int32_t)},
	{"get32S", "([BI)I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, get32S, int32_t, $bytes*, int32_t)},
	{"get64", "([BI)J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, get64, int64_t, $bytes*, int32_t)},
	{"getBufferArray", "(Ljava/nio/ByteBuffer;)[B", nullptr, $STATIC, $staticMethod(ZipUtils, getBufferArray, $bytes*, $ByteBuffer*)},
	{"getBufferOffset", "(Ljava/nio/ByteBuffer;)I", nullptr, $STATIC, $staticMethod(ZipUtils, getBufferOffset, int32_t, $ByteBuffer*)},
	{"javaEpochToLocalDateTime", "(J)Ljava/time/LocalDateTime;", nullptr, $STATIC, $staticMethod(ZipUtils, javaEpochToLocalDateTime, $LocalDateTime*, int64_t)},
	{"javaToDosTime", "(Ljava/time/LocalDateTime;)J", nullptr, $PRIVATE | $STATIC, $staticMethod(ZipUtils, javaToDosTime, int64_t, $LocalDateTime*)},
	{"javaToExtendedDosTime", "(J)J", nullptr, $STATIC, $staticMethod(ZipUtils, javaToExtendedDosTime, int64_t, int64_t)},
	{"loadLibrary", "()V", nullptr, $STATIC, $staticMethod(ZipUtils, loadLibrary, void)},
	{"overflowDosToJavaTime", "(IIIIII)J", nullptr, $PRIVATE | $STATIC, $staticMethod(ZipUtils, overflowDosToJavaTime, int64_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"unixTimeToFileTime", "(J)Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, unixTimeToFileTime, $FileTime*, int64_t)},
	{"winTimeToFileTime", "(J)Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ZipUtils, winTimeToFileTime, $FileTime*, int64_t)},
	{}
};

$ClassInfo _ZipUtils_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipUtils",
	"java.lang.Object",
	nullptr,
	_ZipUtils_FieldInfo_,
	_ZipUtils_MethodInfo_
};

$Object* allocate$ZipUtils($Class* clazz) {
	return $of($alloc(ZipUtils));
}

$ByteBuffer* ZipUtils::defaultBuf = nullptr;
$Unsafe* ZipUtils::unsafe = nullptr;
int64_t ZipUtils::byteBufferArrayOffset = 0;
int64_t ZipUtils::byteBufferOffsetOffset = 0;

void ZipUtils::init$() {
}

$FileTime* ZipUtils::winTimeToFileTime(int64_t wtime) {
	$init(ZipUtils);
	$init($TimeUnit);
	return $FileTime::from(wtime / 10 + ZipUtils::WINDOWS_EPOCH_IN_MICROSECONDS, $TimeUnit::MICROSECONDS);
}

int64_t ZipUtils::fileTimeToWinTime($FileTime* ftime) {
	$init(ZipUtils);
	$init($TimeUnit);
	return ($nc(ftime)->to($TimeUnit::MICROSECONDS) - ZipUtils::WINDOWS_EPOCH_IN_MICROSECONDS) * 10;
}

$FileTime* ZipUtils::unixTimeToFileTime(int64_t utime) {
	$init(ZipUtils);
	$init($TimeUnit);
	return $FileTime::from(utime, $TimeUnit::SECONDS);
}

int64_t ZipUtils::fileTimeToUnixTime($FileTime* ftime) {
	$init(ZipUtils);
	$init($TimeUnit);
	return $nc(ftime)->to($TimeUnit::SECONDS);
}

int64_t ZipUtils::dosToJavaTime(int64_t dtime) {
	$init(ZipUtils);
	$useLocalCurrentObjectStackCache();
	int32_t year = (int32_t)(((int64_t)((dtime >> 25) & (uint64_t)(int64_t)127)) + 1980);
	int32_t month = (int32_t)((int64_t)((dtime >> 21) & (uint64_t)(int64_t)15));
	int32_t day = (int32_t)((int64_t)((dtime >> 16) & (uint64_t)(int64_t)31));
	int32_t hour = (int32_t)((int64_t)((dtime >> 11) & (uint64_t)(int64_t)31));
	int32_t minute = (int32_t)((int64_t)((dtime >> 5) & (uint64_t)(int64_t)63));
	int32_t second = (int32_t)((int64_t)((dtime << 1) & (uint64_t)(int64_t)62));
	if (month > 0 && month < 13 && day > 0 && hour < 24 && minute < 60 && second < 60) {
		try {
			$var($LocalDateTime, ldt, $LocalDateTime::of(year, month, day, hour, minute, second));
			$init($TimeUnit);
			return $TimeUnit::MILLISECONDS->convert($nc(ldt)->toEpochSecond($($nc($($nc($($ZoneId::systemDefault()))->getRules()))->getOffset(ldt))), $TimeUnit::SECONDS);
		} catch ($DateTimeException& dte) {
		}
	}
	return overflowDosToJavaTime(year, month, day, hour, minute, second);
}

int64_t ZipUtils::overflowDosToJavaTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second) {
	$init(ZipUtils);
	return $$new($Date, year - 1900, month - 1, day, hour, minute, second)->getTime();
}

int64_t ZipUtils::extendedDosToJavaTime(int64_t xdostime) {
	$init(ZipUtils);
	int64_t time = dosToJavaTime(xdostime);
	return time + (xdostime >> 32);
}

int64_t ZipUtils::javaToDosTime($LocalDateTime* ldt) {
	$init(ZipUtils);
	int32_t year = $nc(ldt)->getYear() - 1980;
	int32_t var$3 = (year << 25) | (ldt->getMonthValue() << 21);
	int32_t var$2 = var$3 | (ldt->getDayOfMonth() << 16);
	int32_t var$1 = var$2 | (ldt->getHour() << 11);
	int32_t var$0 = var$1 | (ldt->getMinute() << 5);
	return (int64_t)((var$0 | (ldt->getSecond() >> 1)) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int64_t ZipUtils::javaToExtendedDosTime(int64_t time) {
	$init(ZipUtils);
	$var($LocalDateTime, ldt, javaEpochToLocalDateTime(time));
	if ($nc(ldt)->getYear() >= 1980) {
		return javaToDosTime(ldt) + ((time % 2000) << 32);
	}
	return $ZipEntry::DOSTIME_BEFORE_1980;
}

$LocalDateTime* ZipUtils::javaEpochToLocalDateTime(int64_t time) {
	$init(ZipUtils);
	$useLocalCurrentObjectStackCache();
	$var($Instant, instant, $Instant::ofEpochMilli(time));
	return $LocalDateTime::ofInstant(instant, $($ZoneId::systemDefault()));
}

int32_t ZipUtils::get16($bytes* b, int32_t off) {
	$init(ZipUtils);
	return ((int32_t)($nc(b)->get(off) & (uint32_t)255)) | (((int32_t)(b->get(off + 1) & (uint32_t)255)) << 8);
}

int64_t ZipUtils::get32($bytes* b, int32_t off) {
	$init(ZipUtils);
	int32_t var$0 = get16(b, off);
	return (int64_t)((var$0 | ((int64_t)get16(b, off + 2) << 16)) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int64_t ZipUtils::get64($bytes* b, int32_t off) {
	$init(ZipUtils);
	int64_t var$0 = get32(b, off);
	return var$0 | (get32(b, off + 4) << 32);
}

int32_t ZipUtils::get32S($bytes* b, int32_t off) {
	$init(ZipUtils);
	int32_t var$0 = get16(b, off);
	return (var$0 | (get16(b, off + 2) << 16));
}

int32_t ZipUtils::CH($bytes* b, int32_t n) {
	$init(ZipUtils);
	return (int32_t)($nc(b)->get(n) & (uint32_t)255);
}

int32_t ZipUtils::SH($bytes* b, int32_t n) {
	$init(ZipUtils);
	return ((int32_t)($nc(b)->get(n) & (uint32_t)255)) | (((int32_t)(b->get(n + 1) & (uint32_t)255)) << 8);
}

int64_t ZipUtils::LG($bytes* b, int32_t n) {
	$init(ZipUtils);
	int32_t var$0 = (SH(b, n));
	return (int64_t)((var$0 | (SH(b, n + 2) << 16)) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
}

int64_t ZipUtils::LL($bytes* b, int32_t n) {
	$init(ZipUtils);
	int64_t var$0 = (LG(b, n));
	return var$0 | (LG(b, n + 4) << 32);
}

int64_t ZipUtils::GETSIG($bytes* b) {
	$init(ZipUtils);
	return LG(b, 0);
}

int64_t ZipUtils::LOCSIG($bytes* b) {
	$init(ZipUtils);
	return LG(b, 0);
}

int32_t ZipUtils::LOCVER($bytes* b) {
	$init(ZipUtils);
	return SH(b, 4);
}

int32_t ZipUtils::LOCFLG($bytes* b) {
	$init(ZipUtils);
	return SH(b, 6);
}

int32_t ZipUtils::LOCHOW($bytes* b) {
	$init(ZipUtils);
	return SH(b, 8);
}

int64_t ZipUtils::LOCTIM($bytes* b) {
	$init(ZipUtils);
	return LG(b, 10);
}

int64_t ZipUtils::LOCCRC($bytes* b) {
	$init(ZipUtils);
	return LG(b, 14);
}

int64_t ZipUtils::LOCSIZ($bytes* b) {
	$init(ZipUtils);
	return LG(b, 18);
}

int64_t ZipUtils::LOCLEN($bytes* b) {
	$init(ZipUtils);
	return LG(b, 22);
}

int32_t ZipUtils::LOCNAM($bytes* b) {
	$init(ZipUtils);
	return SH(b, 26);
}

int32_t ZipUtils::LOCEXT($bytes* b) {
	$init(ZipUtils);
	return SH(b, 28);
}

int64_t ZipUtils::EXTCRC($bytes* b) {
	$init(ZipUtils);
	return LG(b, 4);
}

int64_t ZipUtils::EXTSIZ($bytes* b) {
	$init(ZipUtils);
	return LG(b, 8);
}

int64_t ZipUtils::EXTLEN($bytes* b) {
	$init(ZipUtils);
	return LG(b, 12);
}

int32_t ZipUtils::ENDSUB($bytes* b) {
	$init(ZipUtils);
	return SH(b, 8);
}

int32_t ZipUtils::ENDTOT($bytes* b) {
	$init(ZipUtils);
	return SH(b, 10);
}

int64_t ZipUtils::ENDSIZ($bytes* b) {
	$init(ZipUtils);
	return LG(b, 12);
}

int64_t ZipUtils::ENDOFF($bytes* b) {
	$init(ZipUtils);
	return LG(b, 16);
}

int32_t ZipUtils::ENDCOM($bytes* b) {
	$init(ZipUtils);
	return SH(b, 20);
}

int32_t ZipUtils::ENDCOM($bytes* b, int32_t off) {
	$init(ZipUtils);
	return SH(b, off + 20);
}

int64_t ZipUtils::ZIP64_ENDTOD($bytes* b) {
	$init(ZipUtils);
	return LL(b, 24);
}

int64_t ZipUtils::ZIP64_ENDTOT($bytes* b) {
	$init(ZipUtils);
	return LL(b, 32);
}

int64_t ZipUtils::ZIP64_ENDSIZ($bytes* b) {
	$init(ZipUtils);
	return LL(b, 40);
}

int64_t ZipUtils::ZIP64_ENDOFF($bytes* b) {
	$init(ZipUtils);
	return LL(b, 48);
}

int64_t ZipUtils::ZIP64_LOCOFF($bytes* b) {
	$init(ZipUtils);
	return LL(b, 8);
}

int64_t ZipUtils::CENSIG($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return LG(b, pos + 0);
}

int32_t ZipUtils::CENVEM($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 4);
}

int32_t ZipUtils::CENVEM_FA($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return CH(b, pos + 5);
}

int32_t ZipUtils::CENVER($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 6);
}

int32_t ZipUtils::CENFLG($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 8);
}

int32_t ZipUtils::CENHOW($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 10);
}

int64_t ZipUtils::CENTIM($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return LG(b, pos + 12);
}

int64_t ZipUtils::CENCRC($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return LG(b, pos + 16);
}

int64_t ZipUtils::CENSIZ($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return LG(b, pos + 20);
}

int64_t ZipUtils::CENLEN($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return LG(b, pos + 24);
}

int32_t ZipUtils::CENNAM($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 28);
}

int32_t ZipUtils::CENEXT($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 30);
}

int32_t ZipUtils::CENCOM($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 32);
}

int32_t ZipUtils::CENDSK($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 34);
}

int32_t ZipUtils::CENATT($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 36);
}

int64_t ZipUtils::CENATX($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return LG(b, pos + 38);
}

int32_t ZipUtils::CENATX_PERMS($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return SH(b, pos + 40);
}

int64_t ZipUtils::CENOFF($bytes* b, int32_t pos) {
	$init(ZipUtils);
	return LG(b, pos + 42);
}

void ZipUtils::loadLibrary() {
	$init(ZipUtils);
	$BootLoader::loadLibrary("zip"_s);
}

$bytes* ZipUtils::getBufferArray($ByteBuffer* byteBuffer) {
	$init(ZipUtils);
	return $cast($bytes, $nc(ZipUtils::unsafe)->getReference(byteBuffer, ZipUtils::byteBufferArrayOffset));
}

int32_t ZipUtils::getBufferOffset($ByteBuffer* byteBuffer) {
	$init(ZipUtils);
	return $nc(ZipUtils::unsafe)->getInt(byteBuffer, ZipUtils::byteBufferOffsetOffset);
}

void clinit$ZipUtils($Class* class$) {
	$assignStatic(ZipUtils::defaultBuf, $ByteBuffer::allocate(0));
	$assignStatic(ZipUtils::unsafe, $Unsafe::getUnsafe());
	ZipUtils::byteBufferArrayOffset = $nc(ZipUtils::unsafe)->objectFieldOffset($ByteBuffer::class$, "hb"_s);
	ZipUtils::byteBufferOffsetOffset = $nc(ZipUtils::unsafe)->objectFieldOffset($ByteBuffer::class$, "offset"_s);
}

ZipUtils::ZipUtils() {
}

$Class* ZipUtils::load$($String* name, bool initialize) {
	$loadClass(ZipUtils, name, initialize, &_ZipUtils_ClassInfo_, clinit$ZipUtils, allocate$ZipUtils);
	return class$;
}

$Class* ZipUtils::class$ = nullptr;

		} // zip
	} // util
} // java