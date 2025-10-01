#ifndef _java_time_format_DateTimeParseContext_h_
#define _java_time_format_DateTimeParseContext_h_
//$ class java.time.format.DateTimeParseContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
		class Long;
	}
}
namespace java {
	namespace time {
		class ZoneId;
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
		namespace format {
			class DateTimeFormatter;
			class DateTimeFormatterBuilder$DayPeriod;
			class DecimalStyle;
			class Parsed;
			class ResolverStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
			class TemporalField;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Locale;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimeParseContext : public ::java::lang::Object {
	$class(DateTimeParseContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DateTimeParseContext();
	void init$(::java::time::format::DateTimeFormatter* formatter);
	void addChronoChangedListener(::java::util::function::Consumer* listener);
	bool charEquals(char16_t ch1, char16_t ch2);
	static bool charEqualsIgnoreCase(char16_t c1, char16_t c2);
	::java::time::format::DateTimeParseContext* copy();
	::java::time::format::Parsed* currentParsed();
	void endOptional(bool successful);
	::java::time::format::DecimalStyle* getDecimalStyle();
	::java::time::chrono::Chronology* getEffectiveChronology();
	::java::util::Locale* getLocale();
	::java::lang::Long* getParsed(::java::time::temporal::TemporalField* field);
	bool isCaseSensitive();
	bool isStrict();
	void setCaseSensitive(bool caseSensitive);
	void setParsed(::java::time::chrono::Chronology* chrono);
	void setParsed(::java::time::ZoneId* zone);
	void setParsedDayPeriod(::java::time::format::DateTimeFormatterBuilder$DayPeriod* dayPeriod);
	int32_t setParsedField(::java::time::temporal::TemporalField* field, int64_t value, int32_t errorPos, int32_t successPos);
	void setParsedLeapSecond();
	void setStrict(bool strict);
	void startOptional();
	bool subSequenceEquals(::java::lang::CharSequence* cs1, int32_t offset1, ::java::lang::CharSequence* cs2, int32_t offset2, int32_t length);
	::java::time::temporal::TemporalAccessor* toResolved(::java::time::format::ResolverStyle* resolverStyle, ::java::util::Set* resolverFields);
	virtual $String* toString() override;
	::java::time::format::Parsed* toUnresolved();
	::java::time::format::DateTimeFormatter* formatter = nullptr;
	bool caseSensitive = false;
	bool strict = false;
	::java::util::ArrayList* parsed = nullptr;
	::java::util::ArrayList* chronoListeners = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeParseContext_h_