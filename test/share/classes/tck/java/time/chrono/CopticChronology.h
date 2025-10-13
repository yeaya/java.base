#ifndef _tck_java_time_chrono_CopticChronology_h_
#define _tck_java_time_chrono_CopticChronology_h_
//$ class tck.java.time.chrono.CopticChronology
//$ extends java.time.chrono.AbstractChronology
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/AbstractChronology.h>

#pragma push_macro("DOM_RANGE")
#undef DOM_RANGE
#pragma push_macro("DOM_RANGE_LEAP")
#undef DOM_RANGE_LEAP
#pragma push_macro("DOM_RANGE_NONLEAP")
#undef DOM_RANGE_NONLEAP
#pragma push_macro("INSTANCE")
#undef INSTANCE
#pragma push_macro("MOY_RANGE")
#undef MOY_RANGE

namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
			class Era;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class ChronoField;
			class TemporalAccessor;
			class ValueRange;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

class $export CopticChronology : public ::java::time::chrono::AbstractChronology, public ::java::io::Serializable {
	$class(CopticChronology, 0, ::java::time::chrono::AbstractChronology, ::java::io::Serializable)
public:
	CopticChronology();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::time::chrono::AbstractChronology::date;
	using ::java::time::chrono::AbstractChronology::dateYearDay;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::time::chrono::ChronoLocalDate* date(int32_t prolepticYear, int32_t month, int32_t dayOfMonth) override;
	virtual ::java::time::chrono::ChronoLocalDate* date(::java::time::temporal::TemporalAccessor* dateTime) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateEpochDay(int64_t epochDay) override;
	virtual ::java::time::chrono::ChronoLocalDate* dateYearDay(int32_t prolepticYear, int32_t dayOfYear) override;
	virtual ::java::time::chrono::Era* eraOf(int32_t eraValue) override;
	virtual ::java::util::List* eras() override;
	virtual $String* getCalendarType() override;
	virtual $String* getId() override;
	virtual bool isLeapYear(int64_t prolepticYear) override;
	virtual int32_t prolepticYear(::java::time::chrono::Era* era, int32_t yearOfEra) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::ChronoField* field) override;
	$Object* readResolve();
	virtual $String* toString() override;
	static ::tck::java::time::chrono::CopticChronology* INSTANCE;
	static const int64_t serialVersionUID = (int64_t)0x652F907A9110267D;
	static ::java::time::temporal::ValueRange* MOY_RANGE;
	static ::java::time::temporal::ValueRange* DOM_RANGE;
	static ::java::time::temporal::ValueRange* DOM_RANGE_NONLEAP;
	static ::java::time::temporal::ValueRange* DOM_RANGE_LEAP;
};

			} // chrono
		} // time
	} // java
} // tck

#pragma pop_macro("DOM_RANGE")
#pragma pop_macro("DOM_RANGE_LEAP")
#pragma pop_macro("DOM_RANGE_NONLEAP")
#pragma pop_macro("INSTANCE")
#pragma pop_macro("MOY_RANGE")

#endif // _tck_java_time_chrono_CopticChronology_h_