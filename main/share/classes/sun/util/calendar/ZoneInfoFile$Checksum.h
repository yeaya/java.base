#ifndef _sun_util_calendar_ZoneInfoFile$Checksum_h_
#define _sun_util_calendar_ZoneInfoFile$Checksum_h_
//$ class sun.util.calendar.ZoneInfoFile$Checksum
//$ extends java.util.zip.CRC32

#include <java/util/zip/CRC32.h>

namespace sun {
	namespace util {
		namespace calendar {

class $export ZoneInfoFile$Checksum : public ::java::util::zip::CRC32 {
	$class(ZoneInfoFile$Checksum, $NO_CLASS_INIT, ::java::util::zip::CRC32)
public:
	ZoneInfoFile$Checksum();
	void init$();
	using ::java::util::zip::CRC32::update;
	virtual void update(int32_t val) override;
	virtual void update(int64_t val);
};

		} // calendar
	} // util
} // sun

#endif // _sun_util_calendar_ZoneInfoFile$Checksum_h_