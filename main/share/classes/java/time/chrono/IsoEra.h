#ifndef _java_time_chrono_IsoEra_h_
#define _java_time_chrono_IsoEra_h_
//$ class java.time.chrono.IsoEra
//$ extends java.lang.Enum
//$ implements java.time.chrono.Era

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/chrono/Era.h>

#pragma push_macro("BCE")
#undef BCE
#pragma push_macro("CE")
#undef CE

namespace java {
	namespace time {
		namespace chrono {

class $export IsoEra : public ::java::lang::Enum, public ::java::time::chrono::Era {
	$class(IsoEra, 0, ::java::lang::Enum, ::java::time::chrono::Era)
public:
	IsoEra();
	static $Array<::java::time::chrono::IsoEra>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual int32_t getValue() override;
	static ::java::time::chrono::IsoEra* of(int32_t isoEra);
	virtual $String* toString() override;
	static ::java::time::chrono::IsoEra* valueOf($String* name);
	static $Array<::java::time::chrono::IsoEra>* values();
	static ::java::time::chrono::IsoEra* BCE;
	static ::java::time::chrono::IsoEra* CE;
	static $Array<::java::time::chrono::IsoEra>* $VALUES;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("BCE")
#pragma pop_macro("CE")

#endif // _java_time_chrono_IsoEra_h_