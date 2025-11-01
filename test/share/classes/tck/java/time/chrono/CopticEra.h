#ifndef _tck_java_time_chrono_CopticEra_h_
#define _tck_java_time_chrono_CopticEra_h_
//$ class tck.java.time.chrono.CopticEra
//$ extends java.lang.Enum
//$ implements java.time.chrono.Era

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/time/chrono/Era.h>

#pragma push_macro("AM")
#undef AM
#pragma push_macro("BEFORE_AM")
#undef BEFORE_AM

namespace tck {
	namespace java {
		namespace time {
			namespace chrono {

class $export CopticEra : public ::java::lang::Enum, public ::java::time::chrono::Era {
	$class(CopticEra, 0, ::java::lang::Enum, ::java::time::chrono::Era)
public:
	CopticEra();
	static $Array<::tck::java::time::chrono::CopticEra>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual int32_t getValue() override;
	static ::tck::java::time::chrono::CopticEra* of(int32_t era);
	virtual $String* toString() override;
	static ::tck::java::time::chrono::CopticEra* valueOf($String* name);
	static $Array<::tck::java::time::chrono::CopticEra>* values();
	static ::tck::java::time::chrono::CopticEra* BEFORE_AM;
	static ::tck::java::time::chrono::CopticEra* AM;
	static $Array<::tck::java::time::chrono::CopticEra>* $VALUES;
};

			} // chrono
		} // time
	} // java
} // tck

#pragma pop_macro("AM")
#pragma pop_macro("BEFORE_AM")

#endif // _tck_java_time_chrono_CopticEra_h_