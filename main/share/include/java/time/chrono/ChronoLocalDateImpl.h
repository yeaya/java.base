#ifndef _java_time_chrono_ChronoLocalDateImpl_h_
#define _java_time_chrono_ChronoLocalDateImpl_h_
//$ class java.time.chrono.ChronoLocalDateImpl
//$ extends java.time.chrono.ChronoLocalDate
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoLocalDate.h>

namespace java {
	namespace time {
		namespace chrono {
			class Chronology;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalAdjuster;
			class TemporalAmount;
			class TemporalField;
			class TemporalUnit;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $import ChronoLocalDateImpl : public ::java::time::chrono::ChronoLocalDate, public ::java::io::Serializable {
	$class(ChronoLocalDateImpl, $NO_CLASS_INIT, ::java::time::chrono::ChronoLocalDate, ::java::io::Serializable)
public:
	ChronoLocalDateImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	int64_t daysUntil(::java::time::chrono::ChronoLocalDate* end);
	static ::java::time::chrono::ChronoLocalDate* ensureValid(::java::time::chrono::Chronology* chrono, ::java::time::temporal::Temporal* temporal);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual ::java::time::chrono::ChronoLocalDate* minus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::ChronoLocalDate* minus(int64_t amountToSubtract, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoLocalDate* minusDays(int64_t daysToSubtract);
	virtual ::java::time::chrono::ChronoLocalDate* minusMonths(int64_t monthsToSubtract);
	virtual ::java::time::chrono::ChronoLocalDate* minusWeeks(int64_t weeksToSubtract);
	virtual ::java::time::chrono::ChronoLocalDate* minusYears(int64_t yearsToSubtract);
	int64_t monthsUntil(::java::time::chrono::ChronoLocalDate* end);
	virtual ::java::time::chrono::ChronoLocalDate* plus(::java::time::temporal::TemporalAmount* amount) override;
	virtual ::java::time::chrono::ChronoLocalDate* plus(int64_t amountToAdd, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoLocalDate* plusDays(int64_t daysToAdd) {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDate* plusMonths(int64_t monthsToAdd) {return nullptr;}
	virtual ::java::time::chrono::ChronoLocalDate* plusWeeks(int64_t weeksToAdd);
	virtual ::java::time::chrono::ChronoLocalDate* plusYears(int64_t yearsToAdd) {return nullptr;}
	virtual $String* toString() override;
	using ::java::time::chrono::ChronoLocalDate::until;
	virtual int64_t until(::java::time::temporal::Temporal* endExclusive, ::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::ChronoLocalDate* with(::java::time::temporal::TemporalAdjuster* adjuster) override;
	virtual ::java::time::chrono::ChronoLocalDate* with(::java::time::temporal::TemporalField* field, int64_t value) override;
	static const int64_t serialVersionUID = (int64_t)0x572FB054BF61A0B8;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_ChronoLocalDateImpl_h_