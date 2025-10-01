#ifndef _java_time_chrono_AbstractChronology_h_
#define _java_time_chrono_AbstractChronology_h_
//$ class java.time.chrono.AbstractChronology
//$ extends java.time.chrono.Chronology

#include <java/time/chrono/Chronology.h>

#pragma push_macro("CHRONOS_BY_ID")
#undef CHRONOS_BY_ID
#pragma push_macro("CHRONOS_BY_TYPE")
#undef CHRONOS_BY_TYPE

namespace java {
	namespace io {
		class DataInput;
		class DataOutput;
		class ObjectInputStream;
	}
}
namespace java {
	namespace time {
		namespace chrono {
			class ChronoLocalDate;
		}
	}
}
namespace java {
	namespace time {
		namespace format {
			class ResolverStyle;
		}
	}
}
namespace java {
	namespace time {
		namespace temporal {
			class ChronoField;
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
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace java {
	namespace time {
		namespace chrono {

class $import AbstractChronology : public ::java::time::chrono::Chronology {
	$class(AbstractChronology, 0, ::java::time::chrono::Chronology)
public:
	AbstractChronology();
	void init$();
	virtual void addFieldValue(::java::util::Map* fieldValues, ::java::time::temporal::ChronoField* field, int64_t value);
	virtual int32_t compareTo(::java::time::chrono::Chronology* other) override;
	virtual int32_t compareTo(Object$* other) override;
	virtual bool equals(Object$* obj) override;
	static ::java::util::Set* getAvailableChronologies();
	virtual int32_t hashCode() override;
	static bool initCache();
	static ::java::time::chrono::Chronology* of($String* id);
	static ::java::time::chrono::Chronology* of0($String* id);
	static ::java::time::chrono::Chronology* ofLocale(::java::util::Locale* locale);
	static ::java::time::chrono::Chronology* readExternal(::java::io::DataInput* in);
	void readObject(::java::io::ObjectInputStream* s);
	static ::java::time::chrono::Chronology* registerChrono(::java::time::chrono::Chronology* chrono);
	static ::java::time::chrono::Chronology* registerChrono(::java::time::chrono::Chronology* chrono, $String* id);
	virtual ::java::time::chrono::ChronoLocalDate* resolveAligned(::java::time::chrono::ChronoLocalDate* base, int64_t months, int64_t weeks, int64_t dow);
	virtual ::java::time::chrono::ChronoLocalDate* resolveDate(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle) override;
	virtual void resolveProlepticMonth(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYAA(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYAD(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYD(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYMAA(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYMAD(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYMD(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual ::java::time::chrono::ChronoLocalDate* resolveYearOfEra(::java::util::Map* fieldValues, ::java::time::format::ResolverStyle* resolverStyle);
	virtual $String* toString() override;
	virtual void writeExternal(::java::io::DataOutput* out);
	virtual $Object* writeReplace();
	static ::java::util::concurrent::ConcurrentHashMap* CHRONOS_BY_ID;
	static ::java::util::concurrent::ConcurrentHashMap* CHRONOS_BY_TYPE;
};

		} // chrono
	} // time
} // java

#pragma pop_macro("CHRONOS_BY_ID")
#pragma pop_macro("CHRONOS_BY_TYPE")

#endif // _java_time_chrono_AbstractChronology_h_