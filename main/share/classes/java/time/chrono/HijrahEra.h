#ifndef _java_time_chrono_HijrahEra_h_
#define _java_time_chrono_HijrahEra_h_
//$ class java.time.chrono.HijrahEra
//$ extends java.lang.Enum
//$ implements java.time.chrono.Era

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/chrono/Era.h>

#pragma push_macro("AH")
#undef AH

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
			class TemporalField;
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

class $export HijrahEra : public ::java::lang::Enum, public ::java::time::chrono::Era {
	$class(HijrahEra, 0, ::java::lang::Enum, ::java::time::chrono::Era)
public:
	HijrahEra();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::java::time::chrono::HijrahEra>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	virtual int32_t getValue() override;
	static ::java::time::chrono::HijrahEra* of(int32_t hijrahEra);
	virtual ::java::time::temporal::ValueRange* range(::java::time::temporal::TemporalField* field) override;
	virtual $String* toString() override;
	static ::java::time::chrono::HijrahEra* valueOf($String* name);
	static $Array<::java::time::chrono::HijrahEra>* values();
	static ::java::time::chrono::HijrahEra* AH;
	static $Array<::java::time::chrono::HijrahEra>* $VALUES;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("AH")

#endif // _java_time_chrono_HijrahEra_h_