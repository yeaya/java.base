#ifndef _java_time_chrono_Ser_h_
#define _java_time_chrono_Ser_h_
//$ class java.time.chrono.Ser
//$ extends java.io.Externalizable

#include <java/io/Externalizable.h>

#pragma push_macro("CHRONO_LOCAL_DATE_TIME_TYPE")
#undef CHRONO_LOCAL_DATE_TIME_TYPE
#pragma push_macro("CHRONO_PERIOD_TYPE")
#undef CHRONO_PERIOD_TYPE
#pragma push_macro("CHRONO_TYPE")
#undef CHRONO_TYPE
#pragma push_macro("CHRONO_ZONE_DATE_TIME_TYPE")
#undef CHRONO_ZONE_DATE_TIME_TYPE
#pragma push_macro("HIJRAH_DATE_TYPE")
#undef HIJRAH_DATE_TYPE
#pragma push_macro("JAPANESE_DATE_TYPE")
#undef JAPANESE_DATE_TYPE
#pragma push_macro("JAPANESE_ERA_TYPE")
#undef JAPANESE_ERA_TYPE
#pragma push_macro("MINGUO_DATE_TYPE")
#undef MINGUO_DATE_TYPE
#pragma push_macro("THAIBUDDHIST_DATE_TYPE")
#undef THAIBUDDHIST_DATE_TYPE

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
		class Serializable;
	}
}

namespace java {
	namespace time {
		namespace chrono {

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
	static const int64_t serialVersionUID = (int64_t)0xAB4C7918E278137F;
	static const int8_t CHRONO_TYPE = 1;
	static const int8_t CHRONO_LOCAL_DATE_TIME_TYPE = 2;
	static const int8_t CHRONO_ZONE_DATE_TIME_TYPE = 3;
	static const int8_t JAPANESE_DATE_TYPE = 4;
	static const int8_t JAPANESE_ERA_TYPE = 5;
	static const int8_t HIJRAH_DATE_TYPE = 6;
	static const int8_t MINGUO_DATE_TYPE = 7;
	static const int8_t THAIBUDDHIST_DATE_TYPE = 8;
	static const int8_t CHRONO_PERIOD_TYPE = 9;
	int8_t type = 0;
	::java::io::Serializable* object = nullptr;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("CHRONO_LOCAL_DATE_TIME_TYPE")
#pragma pop_macro("CHRONO_PERIOD_TYPE")
#pragma pop_macro("CHRONO_TYPE")
#pragma pop_macro("CHRONO_ZONE_DATE_TIME_TYPE")
#pragma pop_macro("HIJRAH_DATE_TYPE")
#pragma pop_macro("JAPANESE_DATE_TYPE")
#pragma pop_macro("JAPANESE_ERA_TYPE")
#pragma pop_macro("MINGUO_DATE_TYPE")
#pragma pop_macro("THAIBUDDHIST_DATE_TYPE")

#endif // _java_time_chrono_Ser_h_