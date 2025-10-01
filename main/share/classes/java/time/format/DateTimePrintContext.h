#ifndef _java_time_format_DateTimePrintContext_h_
#define _java_time_format_DateTimePrintContext_h_
//$ class java.time.format.DateTimePrintContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
			class DecimalStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalAccessor;
			class TemporalField;
			class TemporalQuery;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace java {
	namespace time {
		namespace format {

class DateTimePrintContext : public ::java::lang::Object {
	$class(DateTimePrintContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DateTimePrintContext();
	void init$(::java::time::temporal::TemporalAccessor* temporal, ::java::time::format::DateTimeFormatter* formatter);
	static ::java::time::temporal::TemporalAccessor* adjust(::java::time::temporal::TemporalAccessor* temporal, ::java::time::format::DateTimeFormatter* formatter);
	void endOptional();
	::java::time::format::DecimalStyle* getDecimalStyle();
	::java::util::Locale* getLocale();
	::java::time::temporal::TemporalAccessor* getTemporal();
	$Object* getValue(::java::time::temporal::TemporalQuery* query);
	::java::lang::Long* getValue(::java::time::temporal::TemporalField* field);
	void startOptional();
	virtual $String* toString() override;
	::java::time::temporal::TemporalAccessor* temporal = nullptr;
	::java::time::format::DateTimeFormatter* formatter = nullptr;
	int32_t optional = 0;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimePrintContext_h_