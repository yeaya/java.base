#ifndef _java_time_temporal_IsoFields$Field$3_h_
#define _java_time_temporal_IsoFields$Field$3_h_
//$ class java.time.temporal.IsoFields$Field$3
//$ extends java.time.temporal.IsoFields$Field

#include <java/time/temporal/IsoFields$Field.h>

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

class IsoFields$Field$3 : public ::java::time::temporal::IsoFields$Field {
	$class(IsoFields$Field$3, $NO_CLASS_INIT, ::java::time::temporal::IsoFields$Field)
public:
	IsoFields$Field$3();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal, int64_t newValue) override;
	virtual ::java::time::temporal::TemporalUnit* getBaseUnit() override;
	virtual $String* getDisplayName(::java::util::Locale* locale) override;
	virtual int64_t getFrom(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::TemporalUnit* getRangeUnit() override;
	virtual bool isSupportedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::ValueRange* range() override;
	virtual ::java::time::temporal::ValueRange* rangeRefinedBy(::java::time::temporal::TemporalAccessor* temporal) override;
	virtual ::java::time::temporal::TemporalAccessor* resolve(::java::util::Map* fieldValues, ::java::time::temporal::TemporalAccessor* partialTemporal, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual $String* toString() override;
};

		} // temporal
	} // time
} // java

#endif // _java_time_temporal_IsoFields$Field$3_h_