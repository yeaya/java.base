#ifndef _java_lang_ref_Cleaner_h_
#define _java_lang_ref_Cleaner_h_
//$ class java.lang.ref.Cleaner
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Cleaner$Cleanable;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ThreadFactory;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace ref {
			class CleanerImpl;
		}
	}
}

namespace java {
	namespace lang {
		namespace ref {

class $export Cleaner : public ::java::lang::Object {
	$class(Cleaner, 0, ::java::lang::Object)
public:
	Cleaner();
	void init$();
	static ::java::lang::ref::Cleaner* create();
	static ::java::lang::ref::Cleaner* create(::java::util::concurrent::ThreadFactory* threadFactory);
	::java::lang::ref::Cleaner$Cleanable* register$(Object$* obj, ::java::lang::Runnable* action);
	::jdk::internal::ref::CleanerImpl* impl = nullptr;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Cleaner_h_