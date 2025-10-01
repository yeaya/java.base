#ifndef _java_lang_ThreadLocal$ThreadLocalMap$Entry_h_
#define _java_lang_ThreadLocal$ThreadLocalMap$Entry_h_
//$ class java.lang.ThreadLocal$ThreadLocalMap$Entry
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

namespace java {
	namespace lang {

class $import ThreadLocal$ThreadLocalMap$Entry : public ::java::lang::ref::WeakReference {
	$class(ThreadLocal$ThreadLocalMap$Entry, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ThreadLocal$ThreadLocalMap$Entry();
	void init$(::java::lang::ThreadLocal* k, Object$* v);
	$Object* value = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ThreadLocal$ThreadLocalMap$Entry_h_