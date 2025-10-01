#ifndef _java_time_Ser_h_
#define _java_time_Ser_h_
//$ class java.time.Ser
//$ extends java.io.Externalizable

#include <java/io/Externalizable.h>

#pragma push_macro("PERIOD_TYPE")
#undef PERIOD_TYPE
#pragma push_macro("DURATION_TYPE")
#undef DURATION_TYPE
#pragma push_macro("ZONE_REGION_TYPE")
#undef ZONE_REGION_TYPE
#pragma push_macro("ZONE_OFFSET_TYPE")
#undef ZONE_OFFSET_TYPE
#pragma push_macro("YEAR_MONTH_TYPE")
#undef YEAR_MONTH_TYPE
#pragma push_macro("LOCAL_DATE_TYPE")
#undef LOCAL_DATE_TYPE
#pragma push_macro("LOCAL_TIME_TYPE")
#undef LOCAL_TIME_TYPE
#pragma push_macro("OFFSET_DATE_TIME_TYPE")
#undef OFFSET_DATE_TIME_TYPE
#pragma push_macro("OFFSET_TIME_TYPE")
#undef OFFSET_TIME_TYPE
#pragma push_macro("ZONE_DATE_TIME_TYPE")
#undef ZONE_DATE_TIME_TYPE
#pragma push_macro("YEAR_TYPE")
#undef YEAR_TYPE
#pragma push_macro("INSTANT_TYPE")
#undef INSTANT_TYPE
#pragma push_macro("LOCAL_DATE_TIME_TYPE")
#undef LOCAL_DATE_TIME_TYPE
#pragma push_macro("MONTH_DAY_TYPE")
#undef MONTH_DAY_TYPE

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
		class Serializable;
	}
}

namespace java {
	namespace time {

class Ser : public ::java::io::Externalizable {
	$class(Ser, $NO_CLASS_INIT, ::java::io::Externalizable)
public:
	Ser();
	void init$();
	void init$(int8_t type, ::java::io::Serializable* object);
	static ::java::io::Serializable* read(::java::io::ObjectInput* in);
	virtual void readExternal(::java::io::ObjectInput* in) override;
	static ::java::io::Serializable* readInternal(int8_t type, ::java::io::ObjectInput* in);
	$Object* readResolve();
	virtual void writeExternal(::java::io::ObjectOutput* out) override;
	static void writeInternal(int8_t type, Object$* object, ::java::io::ObjectOutput* out);
	static const int64_t serialVersionUID = (int64_t)0x955D84BA1B2248B2;
	static const int8_t DURATION_TYPE = 1;
	static const int8_t INSTANT_TYPE = 2;
	static const int8_t LOCAL_DATE_TYPE = 3;
	static const int8_t LOCAL_TIME_TYPE = 4;
	static const int8_t LOCAL_DATE_TIME_TYPE = 5;
	static const int8_t ZONE_DATE_TIME_TYPE = 6;
	static const int8_t ZONE_REGION_TYPE = 7;
	static const int8_t ZONE_OFFSET_TYPE = 8;
	static const int8_t OFFSET_TIME_TYPE = 9;
	static const int8_t OFFSET_DATE_TIME_TYPE = 10;
	static const int8_t YEAR_TYPE = 11;
	static const int8_t YEAR_MONTH_TYPE = 12;
	static const int8_t MONTH_DAY_TYPE = 13;
	static const int8_t PERIOD_TYPE = 14;
	int8_t type = 0;
	::java::io::Serializable* object = nullptr;
};

	} // time
} // java

#pragma pop_macro("PERIOD_TYPE")
#pragma pop_macro("DURATION_TYPE")
#pragma pop_macro("ZONE_REGION_TYPE")
#pragma pop_macro("ZONE_OFFSET_TYPE")
#pragma pop_macro("YEAR_MONTH_TYPE")
#pragma pop_macro("LOCAL_DATE_TYPE")
#pragma pop_macro("LOCAL_TIME_TYPE")
#pragma pop_macro("OFFSET_DATE_TIME_TYPE")
#pragma pop_macro("OFFSET_TIME_TYPE")
#pragma pop_macro("ZONE_DATE_TIME_TYPE")
#pragma pop_macro("YEAR_TYPE")
#pragma pop_macro("INSTANT_TYPE")
#pragma pop_macro("LOCAL_DATE_TIME_TYPE")
#pragma pop_macro("MONTH_DAY_TYPE")

#endif // _java_time_Ser_h_