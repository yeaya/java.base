#ifndef _java_time_chrono_ChronoPeriodImpl_h_
#define _java_time_chrono_ChronoPeriodImpl_h_
//$ class java.time.chrono.ChronoPeriodImpl
//$ extends java.time.chrono.ChronoPeriod
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/time/chrono/ChronoPeriod.h>

#pragma push_macro("SUPPORTED_UNITS")
#undef SUPPORTED_UNITS

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
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
			class TemporalAccessor;
			class TemporalAmount;
			class TemporalUnit;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace time {
		namespace chrono {

class ChronoPeriodImpl : public ::java::time::chrono::ChronoPeriod, public ::java::io::Serializable {
	$class(ChronoPeriodImpl, 0, ::java::time::chrono::ChronoPeriod, ::java::io::Serializable)
public:
	ChronoPeriodImpl();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::time::chrono::Chronology* chrono, int32_t years, int32_t months, int32_t days);
	virtual ::java::time::temporal::Temporal* addTo(::java::time::temporal::Temporal* temporal) override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t get(::java::time::temporal::TemporalUnit* unit) override;
	virtual ::java::time::chrono::Chronology* getChronology() override;
	virtual ::java::util::List* getUnits() override;
	virtual int32_t hashCode() override;
	virtual bool isNegative() override;
	virtual bool isZero() override;
	virtual ::java::time::chrono::ChronoPeriod* minus(::java::time::temporal::TemporalAmount* amountToSubtract) override;
	int64_t monthRange();
	virtual ::java::time::chrono::ChronoPeriod* multipliedBy(int32_t scalar) override;
	virtual ::java::time::chrono::ChronoPeriod* normalized() override;
	virtual ::java::time::chrono::ChronoPeriod* plus(::java::time::temporal::TemporalAmount* amountToAdd) override;
	static ::java::time::chrono::ChronoPeriodImpl* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::java::time::temporal::Temporal* subtractFrom(::java::time::temporal::Temporal* temporal) override;
	virtual $String* toString() override;
	::java::time::chrono::ChronoPeriodImpl* validateAmount(::java::time::temporal::TemporalAmount* amount);
	void validateChrono(::java::time::temporal::TemporalAccessor* temporal);
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x0000000D5C8C11B1;
	static ::java::util::List* SUPPORTED_UNITS;
	::java::time::chrono::Chronology* chrono = nullptr;
	int32_t years = 0;
	int32_t months = 0;
	int32_t days = 0;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("SUPPORTED_UNITS")

#endif // _java_time_chrono_ChronoPeriodImpl_h_