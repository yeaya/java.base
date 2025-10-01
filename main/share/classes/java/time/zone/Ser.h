#ifndef _java_time_zone_Ser_h_
#define _java_time_zone_Ser_h_
//$ class java.time.zone.Ser
//$ extends java.io.Externalizable

#include <java/io/Externalizable.h>

#pragma push_macro("ZRULES")
#undef ZRULES
#pragma push_macro("ZOT")
#undef ZOT
#pragma push_macro("ZOTRULE")
#undef ZOTRULE

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInput;
		class ObjectOutput;
		class Serializable;
	}
}
namespace java {
	namespace time {
		class ZoneOffset;
	}
}

namespace java {
	namespace time {
		namespace zone {

class Ser : public ::java::io::Externalizable {
	$class(Ser, $NO_CLASS_INIT, ::java::io::Externalizable)
public:
	Ser();
	void init$();
	void init$(int8_t type, ::java::io::Serializable* object);
	static ::java::io::Serializable* read(::java::io::DataInput* in);
	static int64_t readEpochSec(::java::io::DataInput* in);
	virtual void readExternal(::java::io::ObjectInput* in) override;
	static ::java::io::Serializable* readInternal(int8_t type, ::java::io::DataInput* in);
	static ::java::time::ZoneOffset* readOffset(::java::io::DataInput* in);
	$Object* readResolve();
	static void write(Object$* object, ::java::io::DataOutput* out);
	static void writeEpochSec(int64_t epochSec, ::java::io::DataOutput* out);
	virtual void writeExternal(::java::io::ObjectOutput* out) override;
	static void writeInternal(int8_t type, Object$* object, ::java::io::DataOutput* out);
	static void writeOffset(::java::time::ZoneOffset* offset, ::java::io::DataOutput* out);
	static const int64_t serialVersionUID = (int64_t)0x84B0FEEB7C1A53BE;
	static const int8_t ZRULES = 1;
	static const int8_t ZOT = 2;
	static const int8_t ZOTRULE = 3;
	int8_t type = 0;
	::java::io::Serializable* object = nullptr;
};

		} // zone
	} // time
} // java

#pragma pop_macro("ZRULES")
#pragma pop_macro("ZOT")
#pragma pop_macro("ZOTRULE")

#endif // _java_time_zone_Ser_h_