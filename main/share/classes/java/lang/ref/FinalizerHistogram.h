#ifndef _java_lang_ref_FinalizerHistogram_h_
#define _java_lang_ref_FinalizerHistogram_h_
//$ class java.lang.ref.FinalizerHistogram
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace ref {
			class FinalizerHistogram$Entry;
			class Reference;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace lang {
		namespace ref {

class FinalizerHistogram : public ::java::lang::Object {
	$class(FinalizerHistogram, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FinalizerHistogram();
	void init$();
	static $Array<::java::lang::ref::FinalizerHistogram$Entry>* getFinalizerHistogram();
	static void lambda$getFinalizerHistogram$0(::java::util::Map* countMap, ::java::lang::ref::Reference* r);
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_FinalizerHistogram_h_