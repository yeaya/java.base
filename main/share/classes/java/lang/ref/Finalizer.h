#ifndef _java_lang_ref_Finalizer_h_
#define _java_lang_ref_Finalizer_h_
//$ class java.lang.ref.Finalizer
//$ extends java.lang.ref.FinalReference

#include <java/lang/ref/FinalReference.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace java {
	namespace lang {
		namespace ref {

class Finalizer : public ::java::lang::ref::FinalReference {
	$class(Finalizer, $PRELOAD, ::java::lang::ref::FinalReference)
public:
	Finalizer();
	void init$(Object$* finalizee);
	static void forkSecondaryFinalizer(::java::lang::Runnable* proc);
	static ::java::lang::ref::ReferenceQueue* getQueue();
	static void register$(Object$* finalizee);
	static void runFinalization();
	void runFinalizer(::jdk::internal::access::JavaLangAccess* jla);
	static bool $assertionsDisabled;
	static ::java::lang::ref::ReferenceQueue* queue;
	static ::java::lang::ref::Finalizer* unfinalized;
	static $Object* lock;
	::java::lang::ref::Finalizer* next = nullptr;
	::java::lang::ref::Finalizer* prev = nullptr;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Finalizer_h_