#ifndef _java_lang_ClassValue_h_
#define _java_lang_ClassValue_h_
//$ class java.lang.ClassValue
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CRITICAL_SECTION")
#undef CRITICAL_SECTION
#pragma push_macro("EMPTY_CACHE")
#undef EMPTY_CACHE
#pragma push_macro("HASH_INCREMENT")
#undef HASH_INCREMENT
#pragma push_macro("HASH_MASK")
#undef HASH_MASK
#pragma push_macro("UNSAFE")
#undef UNSAFE

namespace java {
	namespace lang {
		class ClassValue$ClassValueMap;
		class ClassValue$Entry;
		class ClassValue$Identity;
		class ClassValue$Version;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicInteger;
			}
		}
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace java {
	namespace lang {

class $import ClassValue : public ::java::lang::Object {
	$class(ClassValue, 0, ::java::lang::Object)
public:
	ClassValue();
	void init$();
	virtual void bumpVersion();
	virtual ::java::lang::ClassValue$Entry* castEntry(::java::lang::ClassValue$Entry* e);
	virtual $Object* computeValue($Class* type) {return nullptr;}
	virtual $Object* get($Class* type);
	static $Array<::java::lang::ClassValue$Entry>* getCacheCarefully($Class* type);
	$Object* getFromBackup($Array<::java::lang::ClassValue$Entry>* cache, $Class* type);
	$Object* getFromHashMap($Class* type);
	static ::java::lang::ClassValue$ClassValueMap* getMap($Class* type);
	static ::java::lang::ClassValue$ClassValueMap* initializeMap($Class* type);
	static ::java::lang::ClassValue$Entry* makeEntry(::java::lang::ClassValue$Version* explicitVersion, Object$* value);
	virtual bool match(::java::lang::ClassValue$Entry* e);
	virtual void put($Class* type, Object$* value);
	virtual void remove($Class* type);
	virtual ::java::lang::ClassValue$Version* version();
	static $Array<::java::lang::ClassValue$Entry>* EMPTY_CACHE;
	int32_t hashCodeForCache = 0;
	static ::java::util::concurrent::atomic::AtomicInteger* nextHashCode;
	static const int32_t HASH_INCREMENT = 0x61C88647;
	static const int32_t HASH_MASK = ((int32_t)((uint64_t)(int64_t)(-1) >> 2));
	::java::lang::ClassValue$Identity* identity = nullptr;
	$volatile(::java::lang::ClassValue$Version*) version$ = nullptr;
	static $Object* CRITICAL_SECTION;
	static ::jdk::internal::misc::Unsafe* UNSAFE;
};

	} // lang
} // java

#pragma pop_macro("CRITICAL_SECTION")
#pragma pop_macro("EMPTY_CACHE")
#pragma pop_macro("HASH_INCREMENT")
#pragma pop_macro("HASH_MASK")
#pragma pop_macro("UNSAFE")

#endif // _java_lang_ClassValue_h_