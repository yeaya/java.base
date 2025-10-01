#ifndef _java_lang_ThreadLocal_h_
#define _java_lang_ThreadLocal_h_
//$ class java.lang.ThreadLocal
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HASH_INCREMENT")
#undef HASH_INCREMENT

namespace java {
	namespace lang {
		class Thread;
		class ThreadLocal$ThreadLocalMap;
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
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace java {
	namespace lang {

class $import ThreadLocal : public ::java::lang::Object {
	$class(ThreadLocal, $PRELOAD, ::java::lang::Object)
public:
	ThreadLocal();
	void init$();
	virtual $Object* childValue(Object$* parentValue);
	static ::java::lang::ThreadLocal$ThreadLocalMap* createInheritedMap(::java::lang::ThreadLocal$ThreadLocalMap* parentMap);
	virtual void createMap($Thread* t, Object$* firstValue);
	virtual $Object* get();
	virtual ::java::lang::ThreadLocal$ThreadLocalMap* getMap($Thread* t);
	virtual $Object* initialValue();
	virtual bool isPresent();
	static int32_t nextHashCode();
	virtual void remove();
	virtual void set(Object$* value);
	$Object* setInitialValue();
	static ::java::lang::ThreadLocal* withInitial(::java::util::function::Supplier* supplier);
	int32_t threadLocalHashCode = 0;
	static ::java::util::concurrent::atomic::AtomicInteger* nextHashCode$;
	static const int32_t HASH_INCREMENT = 0x61C88647;
};

	} // lang
} // java

#pragma pop_macro("HASH_INCREMENT")

#endif // _java_lang_ThreadLocal_h_