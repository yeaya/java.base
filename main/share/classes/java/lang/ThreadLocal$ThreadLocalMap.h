#ifndef _java_lang_ThreadLocal$ThreadLocalMap_h_
#define _java_lang_ThreadLocal$ThreadLocalMap_h_
//$ class java.lang.ThreadLocal$ThreadLocalMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INITIAL_CAPACITY")
#undef INITIAL_CAPACITY

namespace java {
	namespace lang {
		class ThreadLocal;
		class ThreadLocal$ThreadLocalMap$Entry;
	}
}

namespace java {
	namespace lang {

class $export ThreadLocal$ThreadLocalMap : public ::java::lang::Object {
	$class(ThreadLocal$ThreadLocalMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ThreadLocal$ThreadLocalMap();
	void init$(::java::lang::ThreadLocal* firstKey, Object$* firstValue);
	void init$(::java::lang::ThreadLocal$ThreadLocalMap* parentMap);
	bool cleanSomeSlots(int32_t i, int32_t n);
	void expungeStaleEntries();
	int32_t expungeStaleEntry(int32_t staleSlot);
	::java::lang::ThreadLocal$ThreadLocalMap$Entry* getEntry(::java::lang::ThreadLocal* key);
	::java::lang::ThreadLocal$ThreadLocalMap$Entry* getEntryAfterMiss(::java::lang::ThreadLocal* key, int32_t i, ::java::lang::ThreadLocal$ThreadLocalMap$Entry* e);
	static int32_t nextIndex(int32_t i, int32_t len);
	static int32_t prevIndex(int32_t i, int32_t len);
	void rehash();
	void remove(::java::lang::ThreadLocal* key);
	void replaceStaleEntry(::java::lang::ThreadLocal* key, Object$* value, int32_t staleSlot);
	void resize();
	void set(::java::lang::ThreadLocal* key, Object$* value);
	void setThreshold(int32_t len);
	static const int32_t INITIAL_CAPACITY = 16;
	$Array<::java::lang::ThreadLocal$ThreadLocalMap$Entry>* table = nullptr;
	int32_t size = 0;
	int32_t threshold = 0;
};

	} // lang
} // java

#pragma pop_macro("INITIAL_CAPACITY")

#endif // _java_lang_ThreadLocal$ThreadLocalMap_h_