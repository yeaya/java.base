#ifndef _tck_java_time_chrono_CopticDate_h_
#define _tck_java_time_chrono_CopticDate_h_
//$ class tck.java.time.chrono.CopticDate
//$ extends java.time.chrono.ChronoLocalDate
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoLocalDate.h>

#pragma push_macro("EPOCH_DAY_DIFFERENCE")
#undef EPOCH_DAY_DIFFERENCE

namespace java {
	namespace time {
		namespace chrono {
			class ChronoPeriod;
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalField;
			class TemporalUnit;
			class ValueRange;
		}
	}
}

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

class $export CopticDate : public ::java::time::chrono::ChronoLocalDate, public ::java::io::Serializable {
	$class(CopticDate, $NO_CLASS_INIT, ::java::time::chrono::ChronoLocalDate, ::java::io::Serializable)
public:
	CopticDate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t prolepticYear, int32_t month, int32_t dayOfMonth);
	virtual bool equals(Object$* obj) override;
	virtual ::java::time::chrono::Chronology* getChronology() override;
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual int32_t hashCode() override;
	virtual int32_t lengthOfMonth() override;
	static ::tck::java::time::chrono::CopticDate* ofEpochDay(int64_t epochDay);
	using ::java::time::chrono::ChronoLocalDate::plus;
	virtual ::tck::java::time::chrono::CopticDate* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	::tck::java::time::chrono::CopticDate* plusDays(int64_t days);
	::tck::java::time::chrono::CopticDate* plusMonths(int64_t months);
	::tck::java::time::chrono::CopticDate* plusYears(int64_t years);
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	$Object* readResolve();
	static ::tck::java::time::chrono::CopticDate* resolvePreviousValid(int32_t prolepticYear, int32_t month, int32_t day);
	virtual int64_t toEpochDay() override;
	virtual $String* toString() override;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoPeriod* until(::java::time::chrono::ChronoLocalDate* endDate) override;
	using ::java::time::chrono::ChronoLocalDate::with;
	virtual ::tck::java::time::chrono::CopticDate* with(::java::time::temporal::TemporalField* field, int64_t newValue) override;
	static const int64_t serialVersionUID = (int64_t)0x9214A0F4B9C24CBC;
	static const int32_t EPOCH_DAY_DIFFERENCE = 615558; // 0x0008C5FB + 0x00009E8B
	int32_t prolepticYear = 0;
	int16_t month = 0;
	int16_t day = 0;
};

			} // chrono
		} // time
	} // java
} // tck

#pragma pop_macro("EPOCH_DAY_DIFFERENCE")

#endif // _tck_java_time_chrono_CopticDate_h_