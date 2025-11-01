#ifndef _java_time_temporal_JulianFields$Field_h_
#define _java_time_temporal_JulianFields$Field_h_
//$ class java.time.temporal.JulianFields$Field
//$ extends java.lang.Enum
//$ implements java.time.temporal.TemporalField

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/temporal/TemporalField.h>

#pragma push_macro("JULIAN_DAY")
#undef JULIAN_DAY
#pragma push_macro("MODIFIED_JULIAN_DAY")
#undef MODIFIED_JULIAN_DAY
#pragma push_macro("RATA_DIE")
#undef RATA_DIE

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
		class Map;
	}
}

namespace java {
	namespace time {
		namespace temporal {

class JulianFields$Field : public ::java::lang::Enum, public ::java::time::temporal::TemporalField {
	$class(JulianFields$Field, 0, ::java::lang::Enum, ::java::time::temporal::TemporalField)
public:
	JulianFields$Field();
	static $Array<::java::time::temporal::JulianFields$Field>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name, ::java::time::temporal::TemporalUnit* baseUnit, ::java::time::temporal::TemporalUnit* rangeUnit, int64_t offset);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal, int64_t newValue) override;
	virtual ::java::time::temporal::TemporalUnit* getBaseUnit() override;
	virtual int64_t getFrom(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::TemporalUnit* getRangeUnit() override;
	virtual bool isDateBased() override;
	virtual bool isSupportedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual bool isTimeBased() override;
	virtual ::java::time::temporal::ValueRange* range() override;
	virtual ::java::time::temporal::ValueRange* rangeRefinedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::TemporalAccessor* resolve(::java::util::Map* fieldValues, ::java::time::temporal::TemporalAccessor* partialTemporal, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual $String* toString() override;
	static ::java::time::temporal::JulianFields$Field* valueOf($String* name);
	static $Array<::java::time::temporal::JulianFields$Field>* values();
	static ::java::time::temporal::JulianFields$Field* JULIAN_DAY;
	static ::java::time::temporal::JulianFields$Field* MODIFIED_JULIAN_DAY;
	static ::java::time::temporal::JulianFields$Field* RATA_DIE;
	static $Array<::java::time::temporal::JulianFields$Field>* $VALUES;
	$String* name$ = nullptr;
	::java::time::temporal::TemporalUnit* baseUnit = nullptr;
	::java::time::temporal::TemporalUnit* rangeUnit = nullptr;
	::java::time::temporal::ValueRange* range$ = nullptr;
	int64_t offset = 0;
};

		} // temporal
	} // time
} // java

#pragma pop_macro("JULIAN_DAY")
#pragma pop_macro("MODIFIED_JULIAN_DAY")
#pragma pop_macro("RATA_DIE")

#endif // _java_time_temporal_JulianFields$Field_h_