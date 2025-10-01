#ifndef _java_time_ZoneId_h_
#define _java_time_ZoneId_h_
//$ class java.time.ZoneId
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("SHORT_IDS")
#undef SHORT_IDS

namespace java {
	namespace io {
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		class ZoneOffset;
	}
}
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
			class TemporalAccessor;
		}
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
	namespace util {
		class Locale;
		class Map;
		class Set;
	}
}

namespace java {
	namespace time {

class $export ZoneId : public ::java::io::Serializable {
	$class(ZoneId, 0, ::java::io::Serializable)
public:
	ZoneId();
	void init$();
	virtual bool equals(Object$* obj) override;
	static ::java::time::ZoneId* from(::java::time::temporal::TemporalAccessor* temporal);
	static ::java::util::Set* getAvailableZoneIds();
	virtual $String* getDisplayName(::java::time::format::TextStyle* style, ::java::util::Locale* locale);
	virtual $String* getId() {return nullptr;}
	virtual ::java::time::zone::ZoneRules* getRules() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual ::java::time::ZoneId* normalized();
	static ::java::time::ZoneId* of($String* zoneId, ::java::util::Map* aliasMap);
	static ::java::time::ZoneId* of($String* zoneId);
	static ::java::time::ZoneId* of($String* zoneId, bool checkAvailable);
	static ::java::time::ZoneId* ofOffset($String* prefix, ::java::time::ZoneOffset* offset);
	static ::java::time::ZoneId* ofWithPrefix($String* zoneId, int32_t prefixLength, bool checkAvailable);
	void readObject(::java::io::ObjectInputStream* s);
	static ::java::time::ZoneId* systemDefault();
	virtual $String* toString() override;
	::java::time::temporal::TemporalAccessor* toTemporal();
	virtual void write(::java::io::DataOutput* out) {}
	$Object* writeReplace();
	static ::java::util::Map* SHORT_IDS;
	static const int64_t serialVersionUID = (int64_t)0x00000798CAB446E6;
};

	} // time
} // java

#pragma pop_macro("SHORT_IDS")

#endif // _java_time_ZoneId_h_