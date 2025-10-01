#ifndef _java_lang_invoke_MethodType$ConcurrentWeakInternSet_h_
#define _java_lang_invoke_MethodType$ConcurrentWeakInternSet_h_
//$ class java.lang.invoke.MethodType$ConcurrentWeakInternSet
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentMap;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MethodType$ConcurrentWeakInternSet : public ::java::lang::Object {
	$class(MethodType$ConcurrentWeakInternSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodType$ConcurrentWeakInternSet();
	void init$();
	virtual $Object* add(Object$* elem);
	void expungeStaleElements();
	virtual $Object* get(Object$* elem);
	::java::util::concurrent::ConcurrentMap* map = nullptr;
	::java::lang::ref::ReferenceQueue* stale = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodType$ConcurrentWeakInternSet_h_