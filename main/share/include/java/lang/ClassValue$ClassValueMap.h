#ifndef _java_lang_ClassValue$ClassValueMap_h_
#define _java_lang_ClassValue$ClassValueMap_h_
//$ class java.lang.ClassValue$ClassValueMap
//$ extends java.util.WeakHashMap

#include <java/lang/Array.h>
#include <java/util/WeakHashMap.h>

#pragma push_macro("INITIAL_ENTRIES")
#undef INITIAL_ENTRIES
#pragma push_macro("CACHE_LOAD_LIMIT")
#undef CACHE_LOAD_LIMIT
#pragma push_macro("PROBE_LIMIT")
#undef PROBE_LIMIT

namespace java {
	namespace lang {
		class ClassValue;
		class ClassValue$Entry;
	}
}

namespace java {
	namespace lang {

class $import ClassValue$ClassValueMap : public ::java::util::WeakHashMap {
	$class(ClassValue$ClassValueMap, 0, ::java::util::WeakHashMap)
public:
	ClassValue$ClassValueMap();
	void init$();
	void addToCache(::java::lang::ClassValue$Entry* e);
	void addToCache(::java::lang::ClassValue* classValue, ::java::lang::ClassValue$Entry* e);
	virtual void changeEntry(::java::lang::ClassValue* classValue, Object$* value);
	void checkCacheLoad();
	static int32_t entryDislocation($Array<::java::lang::ClassValue$Entry>* cache, int32_t pos, ::java::lang::ClassValue$Entry* e);
	::java::lang::ClassValue$Entry* findReplacement($Array<::java::lang::ClassValue$Entry>* cache, int32_t home1);
	virtual ::java::lang::ClassValue$Entry* finishEntry(::java::lang::ClassValue* classValue, ::java::lang::ClassValue$Entry* e);
	virtual $Array<::java::lang::ClassValue$Entry>* getCache();
	static ::java::lang::ClassValue$Entry* loadFromCache($Array<::java::lang::ClassValue$Entry>* cache, int32_t i);
	::java::lang::ClassValue$Entry* overwrittenEntry(::java::lang::ClassValue$Entry* e2);
	::java::lang::ClassValue$Entry* placeInCache($Array<::java::lang::ClassValue$Entry>* cache, int32_t pos, ::java::lang::ClassValue$Entry* e, bool gently);
	static ::java::lang::ClassValue$Entry* probeBackupLocations($Array<::java::lang::ClassValue$Entry>* cache, ::java::lang::ClassValue* classValue);
	static ::java::lang::ClassValue$Entry* probeHomeLocation($Array<::java::lang::ClassValue$Entry>* cache, ::java::lang::ClassValue* classValue);
	void reduceCacheLoad();
	using ::java::util::WeakHashMap::remove;
	virtual void removeEntry(::java::lang::ClassValue* classValue);
	void removeStaleEntries($Array<::java::lang::ClassValue$Entry>* cache, int32_t begin, int32_t count);
	void removeStaleEntries(::java::lang::ClassValue* classValue);
	void removeStaleEntries();
	void sizeCache(int32_t length);
	virtual ::java::lang::ClassValue$Entry* startEntry(::java::lang::ClassValue* classValue);
	static bool $assertionsDisabled;
	$Array<::java::lang::ClassValue$Entry>* cacheArray = nullptr;
	int32_t cacheLoad = 0;
	int32_t cacheLoadLimit = 0;
	static const int32_t INITIAL_ENTRIES = 32;
	static const int32_t CACHE_LOAD_LIMIT = 67;
	static const int32_t PROBE_LIMIT = 6;
};

	} // lang
} // java

#pragma pop_macro("INITIAL_ENTRIES")
#pragma pop_macro("CACHE_LOAD_LIMIT")
#pragma pop_macro("PROBE_LIMIT")

#endif // _java_lang_ClassValue$ClassValueMap_h_