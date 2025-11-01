#ifndef _java_time_ZoneOffset_h_
#define _java_time_ZoneOffset_h_
//$ class java.time.ZoneOffset
//$ extends java.time.ZoneId
//$ implements java.time.temporal.TemporalAccessor,java.time.temporal.TemporalAdjuster,java.lang.Comparable

#include <java/lang/Comparable.h>
#include <java/time/ZoneId.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>

#pragma push_macro("ID_CACHE")
#undef ID_CACHE
#pragma push_macro("MAX")
#undef MAX
#pragma push_macro("MAX_SECONDS")
#undef MAX_SECONDS
#pragma push_macro("MIN")
#undef MIN
#pragma push_macro("SECONDS_CACHE")
#undef SECONDS_CACHE
#pragma push_macro("UTC")
#undef UTC

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalField;
			class TemporalQuery;
			class ValueRange;
		}
	}
}
namespace java {
	namespace time {
		namespace zone {
			class ZoneRules;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace time {

class $import ZoneOffset : public ::java::time::ZoneId, public ::java::time::temporal::TemporalAccessor, public ::java::time::temporal::TemporalAdjuster, public ::java::lang::Comparable {
	$class(ZoneOffset, 0, ::java::time::ZoneId, ::java::time::temporal::TemporalAccessor, ::java::time::temporal::TemporalAdjuster, ::java::lang::Comparable)
public:
	ZoneOffset();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t totalSeconds);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	static $String* buildId(int32_t totalSeconds);
	int32_t compareTo(::java::time::ZoneOffset* other);
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	static ::java::time::ZoneOffset* from(::java::time::temporal::TemporalAccessor* temporal);
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual $String* getId() override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual ::java::time::zone::ZoneRules* getRules() override;
	int32_t getTotalSeconds();
	virtual int32_t hashCode() override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	static ::java::time::ZoneOffset* of($String* offsetId);
	static ::java::time::ZoneOffset* ofHours(int32_t hours);
	static ::java::time::ZoneOffset* ofHoursMinutes(int32_t hours, int32_t minutes);
	static ::java::time::ZoneOffset* ofHoursMinutesSeconds(int32_t hours, int32_t minutes, int32_t seconds);
	static ::java::time::ZoneOffset* ofTotalSeconds(int32_t totalSeconds);
	static int32_t parseNumber(::java::lang::CharSequence* offsetId, int32_t pos, bool precededByColon);
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	static ::java::time::ZoneOffset* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	static int32_t totalSeconds(int32_t hours, int32_t minutes, int32_t seconds);
	static void validate(int32_t hours, int32_t minutes, int32_t seconds);
	virtual void write(::java::io::DataOutput* out) override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static ::java::util::concurrent::ConcurrentMap* SECONDS_CACHE;
	static ::java::util::concurrent::ConcurrentMap* ID_CACHE;
	static const int32_t MAX_SECONDS = 64800; // 18 * 3600
	static const int64_t serialVersionUID = (int64_t)0x20B8141D7A029C21;
	static ::java::time::ZoneOffset* UTC;
	static ::java::time::ZoneOffset* MIN;
	static ::java::time::ZoneOffset* MAX;
	int32_t totalSeconds$ = 0;
	$String* id = nullptr;
};

	} // time
} // java

#pragma pop_macro("ID_CACHE")
#pragma pop_macro("MAX")
#pragma pop_macro("MAX_SECONDS")
#pragma pop_macro("MIN")
#pragma pop_macro("SECONDS_CACHE")
#pragma pop_macro("UTC")

#endif // _java_time_ZoneOffset_h_