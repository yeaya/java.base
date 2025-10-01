#ifndef _java_time_ZoneRegion_h_
#define _java_time_ZoneRegion_h_
//$ class java.time.ZoneRegion
//$ extends java.time.ZoneId

#include <java/time/ZoneId.h>

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		namespace zone {
			class ZoneRules;
		}
	}
}

namespace java {
	namespace time {

class ZoneRegion : public ::java::time::ZoneId {
	$class(ZoneRegion, $NO_CLASS_INIT, ::java::time::ZoneId)
public:
	ZoneRegion();
	void init$($String* id, ::java::time::zone::ZoneRules* rules);
	static void checkName($String* zoneId);
	virtual $String* getId() override;
	virtual ::java::time::zone::ZoneRules* getRules() override;
	static ::java::time::ZoneRegion* ofId($String* zoneId, bool checkAvailable);
	static ::java::time::ZoneId* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void write(::java::io::DataOutput* out) override;
	void writeExternal(::java::io::DataOutput* out);
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x746262147BB70E18;
	$String* id = nullptr;
	::java::time::zone::ZoneRules* rules = nullptr;
};

	} // time
} // java

#endif // _java_time_ZoneRegion_h_