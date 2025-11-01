#ifndef _java_time_chrono_ThaiBuddhistEra_h_
#define _java_time_chrono_ThaiBuddhistEra_h_
//$ class java.time.chrono.ThaiBuddhistEra
//$ extends java.lang.Enum
//$ implements java.time.chrono.Era

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/chrono/Era.h>

#pragma push_macro("BE")
#undef BE
#pragma push_macro("BEFORE_BE")
#undef BEFORE_BE

namespace java {
	namespace time {
		namespace format {
			class TextStyle;
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

class $import ThaiBuddhistEra : public ::java::lang::Enum, public ::java::time::chrono::Era {
	$class(ThaiBuddhistEra, 0, ::java::lang::Enum, ::java::time::chrono::Era)
public:
	ThaiBuddhistEra();
	static $Array<::java::time::chrono::ThaiBuddhistEra>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	virtual int32_t getValue() override;
	static ::java::time::chrono::ThaiBuddhistEra* of(int32_t thaiBuddhistEra);
	virtual $String* toString() override;
	static ::java::time::chrono::ThaiBuddhistEra* valueOf($String* name);
	static $Array<::java::time::chrono::ThaiBuddhistEra>* values();
	static ::java::time::chrono::ThaiBuddhistEra* BEFORE_BE;
	static ::java::time::chrono::ThaiBuddhistEra* BE;
	static $Array<::java::time::chrono::ThaiBuddhistEra>* $VALUES;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("BE")
#pragma pop_macro("BEFORE_BE")

#endif // _java_time_chrono_ThaiBuddhistEra_h_