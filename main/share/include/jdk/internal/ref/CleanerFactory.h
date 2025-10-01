#ifndef _jdk_internal_ref_CleanerFactory_h_
#define _jdk_internal_ref_CleanerFactory_h_
//$ class jdk.internal.ref.CleanerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class Cleaner;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace ref {

class $import CleanerFactory : public ::java::lang::Object {
	$class(CleanerFactory, 0, ::java::lang::Object)
public:
	CleanerFactory();
	void init$();
	static ::java::lang::ref::Cleaner* cleaner();
	static ::java::lang::ref::Cleaner* commonCleaner;
};

		} // ref
	} // internal
} // jdk

#endif // _jdk_internal_ref_CleanerFactory_h_