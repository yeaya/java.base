#ifndef _java_time_temporal_TemporalField_h_
#define _java_time_temporal_TemporalField_h_
//$ interface java.time.temporal.TemporalField
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace time {
		namespace format {
			class ResolverStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalAccessor;
			class TemporalUnit;
			class ValueRange;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}

namespace java {
	namespace time {
		namespace temporal {

class $export TemporalField : public ::java::lang::Object {
	$interface(TemporalField, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal, int64_t newValue) {return nullptr;}
	virtual ::java::time::temporal::TemporalUnit* getBaseUnit() {return nullptr;}
	virtual $String* getDisplayName(::java::util::Locale* locale);
	virtual int64_t getFrom(::java::time::temporal::TemporalAccessor* temporal) {return 0;}
	virtual ::java::time::temporal::TemporalUnit* getRangeUnit() {return nullptr;}
	virtual bool isDateBased() {return false;}
	virtual bool isSupportedBy(::java::time::temporal::TemporalAccessor* temporal) {return false;}
	virtual bool isTimeBased() {return false;}
	virtual ::java::time::temporal::ValueRange* range() {return nullptr;}
	virtual ::java::time::temporal::ValueRange* rangeRefinedBy(::java::time::temporal::TemporalAccessor* temporal) {return nullptr;}
	virtual ::java::time::temporal::TemporalAccessor* resolve(::java::util::Map* fieldValues, ::java::time::temporal::TemporalAccessor* partialTemporal, ::java::time::format::ResolverStyle* resolverStyle);
	virtual $String* toString() override;
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_TemporalField_h_