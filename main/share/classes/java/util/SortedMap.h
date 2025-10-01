#ifndef _java_util_SortedMap_h_
#define _java_util_SortedMap_h_
//$ interface java.util.SortedMap
//$ extends java.util.Map

#include <java/util/Map.h>

namespace java {
	namespace util {
		class Comparator;
	}
}

namespace java {
	namespace util {

class $export SortedMap : public ::java::util::Map {
	$interface(SortedMap, $NO_CLASS_INIT, ::java::util::Map)
public:
	virtual ::java::util::Comparator* comparator() {return nullptr;}
	virtual ::java::util::Set* entrySet() override {return nullptr;}
	virtual $Object* firstKey() {return nullptr;}
	virtual ::java::util::SortedMap* headMap(Object$* toKey) {return nullptr;}
	virtual ::java::util::Set* keySet() override {return nullptr;}
	virtual $Object* lastKey() {return nullptr;}
	virtual ::java::util::SortedMap* subMap(Object$* fromKey, Object$* toKey) {return nullptr;}
	virtual ::java::util::SortedMap* tailMap(Object$* fromKey) {return nullptr;}
	virtual ::java::util::Collection* values() override {return nullptr;}
};

	} // util
} // java

#endif // _java_util_SortedMap_h_