#ifndef _java_time_chrono_Era_h_
#define _java_time_chrono_Era_h_
//$ interface java.time.chrono.Era
//$ extends java.time.temporal.TemporalAccessor,java.time.temporal.TemporalAdjuster

#include <java/time/temporal/TemporalAccessor.h>
#include <java/time/temporal/TemporalAdjuster.h>

namespace java {
	namespace time {
		namespace format {
			class TextStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class Temporal;
			class TemporalField;
			class TemporalQuery;
			class ValueRange;
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
		namespace chrono {

class $export Era : public ::java::time::temporal::TemporalAccessor, public ::java::time::temporal::TemporalAdjuster {
	$interface(Era, $NO_CLASS_INIT, ::java::time::temporal::TemporalAccessor, ::java::time::temporal::TemporalAdjuster)
public:
	virtual ::java::time::temporal::Temporal* adjustInto(::java::time::temporal::Temporal* temporal) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t get(::java::time::temporal::TemporalField* field) override;
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual int64_t getLong(::java::time::temporal::TemporalField* field) override;
	virtual int32_t getValue() {return 0;}
	virtual int32_t hashCode() override;
	virtual bool isSupported(::java::time::temporal::TemporalField* field) override;
	virtual $Object* query(::java::time::temporal::TemporalQuery* query) override;
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	virtual $String* toString() override;
};

		} // chrono
	} // time
} // java

#endif // _java_time_chrono_Era_h_