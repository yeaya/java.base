#ifndef _java_time_chrono_MinguoEra_h_
#define _java_time_chrono_MinguoEra_h_
//$ class java.time.chrono.MinguoEra
//$ extends java.lang.Enum
//$ implements java.time.chrono.Era

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/chrono/Era.h>

#pragma push_macro("BEFORE_ROC")
#undef BEFORE_ROC
#pragma push_macro("ROC")
#undef ROC

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

class $import MinguoEra : public ::java::lang::Enum, public ::java::time::chrono::Era {
	$class(MinguoEra, 0, ::java::lang::Enum, ::java::time::chrono::Era)
public:
	MinguoEra();
	static $Array<::java::time::chrono::MinguoEra>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale) override;
	virtual int32_t getValue() override;
	static ::java::time::chrono::MinguoEra* of(int32_t minguoEra);
	virtual $String* toString() override;
	static ::java::time::chrono::MinguoEra* valueOf($String* name);
	static $Array<::java::time::chrono::MinguoEra>* values();
	static ::java::time::chrono::MinguoEra* BEFORE_ROC;
	static ::java::time::chrono::MinguoEra* ROC;
	static $Array<::java::time::chrono::MinguoEra>* $VALUES;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("BEFORE_ROC")
#pragma pop_macro("ROC")

#endif // _java_time_chrono_MinguoEra_h_