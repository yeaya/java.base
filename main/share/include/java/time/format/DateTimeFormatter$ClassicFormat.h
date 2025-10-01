#ifndef _java_time_format_DateTimeFormatter$ClassicFormat_h_
#define _java_time_format_DateTimeFormatter$ClassicFormat_h_
//$ class java.time.format.DateTimeFormatter$ClassicFormat
//$ extends java.text.Format

#include <java/text/Format.h>

namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace text {
		class FieldPosition;
		class ParsePosition;
	}
}
namespace java {
	namespace time {
		namespace format {
			class DateTimeFormatter;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class TemporalQuery;
		}
	}
}

namespace java {
	namespace time {
		namespace format {

class $import DateTimeFormatter$ClassicFormat : public ::java::text::Format {
	$class(DateTimeFormatter$ClassicFormat, $NO_CLASS_INIT, ::java::text::Format)
public:
	DateTimeFormatter$ClassicFormat();
	using ::java::text::Format::format;
	void init$(::java::time::format::DateTimeFormatter* formatter, ::java::time::temporal::TemporalQuery* parseType);
	virtual ::java::lang::StringBuffer* format(Object$* obj, ::java::lang::StringBuffer* toAppendTo, ::java::text::FieldPosition* pos) override;
	virtual $Object* parseObject($String* text) override;
	virtual $Object* parseObject($String* text, ::java::text::ParsePosition* pos) override;
	::java::time::format::DateTimeFormatter* formatter = nullptr;
	::java::time::temporal::TemporalQuery* parseType = nullptr;
};

		} // format
	} // time
} // java

#endif // _java_time_format_DateTimeFormatter$ClassicFormat_h_