#include <sun/util/calendar/ZoneInfoFile$Checksum.h>

#include <java/util/zip/CRC32.h>
#include <java/util/zip/Checksum.h>
#include <sun/util/calendar/ZoneInfoFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRC32 = ::java::util::zip::CRC32;
using $Checksum = ::java::util::zip::Checksum;
using $ZoneInfoFile = ::sun::util::calendar::ZoneInfoFile;

namespace sun {
	namespace util {
		namespace calendar {

$MethodInfo _ZoneInfoFile$Checksum_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ZoneInfoFile$Checksum::*)()>(&ZoneInfoFile$Checksum::init$))},
	{"update", "(I)V", nullptr, $PUBLIC},
	{"update", "(J)V", nullptr, 0},
	{}
};

$InnerClassInfo _ZoneInfoFile$Checksum_InnerClassesInfo_[] = {
	{"sun.util.calendar.ZoneInfoFile$Checksum", "sun.util.calendar.ZoneInfoFile", "Checksum", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ZoneInfoFile$Checksum_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.calendar.ZoneInfoFile$Checksum",
	"java.util.zip.CRC32",
	nullptr,
	nullptr,
	_ZoneInfoFile$Checksum_MethodInfo_,
	nullptr,
	nullptr,
	_ZoneInfoFile$Checksum_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.calendar.ZoneInfoFile"
};

$Object* allocate$ZoneInfoFile$Checksum($Class* clazz) {
	return $of($alloc(ZoneInfoFile$Checksum));
}

void ZoneInfoFile$Checksum::init$() {
	$CRC32::init$();
}

void ZoneInfoFile$Checksum::update(int32_t val) {
	$var($bytes, b, $new($bytes, 4));
	b->set(0, (int8_t)((int32_t)((uint32_t)val >> 24)));
	b->set(1, (int8_t)((int32_t)((uint32_t)val >> 16)));
	b->set(2, (int8_t)((int32_t)((uint32_t)val >> 8)));
	b->set(3, (int8_t)(val));
	update(b);
}

void ZoneInfoFile$Checksum::update(int64_t val) {
	$var($bytes, b, $new($bytes, 8));
	b->set(0, (int8_t)((int64_t)((uint64_t)val >> 56)));
	b->set(1, (int8_t)((int64_t)((uint64_t)val >> 48)));
	b->set(2, (int8_t)((int64_t)((uint64_t)val >> 40)));
	b->set(3, (int8_t)((int64_t)((uint64_t)val >> 32)));
	b->set(4, (int8_t)((int64_t)((uint64_t)val >> 24)));
	b->set(5, (int8_t)((int64_t)((uint64_t)val >> 16)));
	b->set(6, (int8_t)((int64_t)((uint64_t)val >> 8)));
	b->set(7, (int8_t)(val));
	update(b);
}

ZoneInfoFile$Checksum::ZoneInfoFile$Checksum() {
}

$Class* ZoneInfoFile$Checksum::load$($String* name, bool initialize) {
	$loadClass(ZoneInfoFile$Checksum, name, initialize, &_ZoneInfoFile$Checksum_ClassInfo_, allocate$ZoneInfoFile$Checksum);
	return class$;
}

$Class* ZoneInfoFile$Checksum::class$ = nullptr;

		} // calendar
	} // util
} // sun