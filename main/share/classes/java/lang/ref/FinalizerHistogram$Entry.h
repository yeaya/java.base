#ifndef _java_lang_ref_FinalizerHistogram$Entry_h_
#define _java_lang_ref_FinalizerHistogram$Entry_h_
//$ class java.lang.ref.FinalizerHistogram$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {

class FinalizerHistogram$Entry : public ::java::lang::Object {
	$class(FinalizerHistogram$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FinalizerHistogram$Entry();
	void init$($String* className);
	int32_t getInstanceCount();
	void increment();
	int32_t instanceCount = 0;
	$String* className = nullptr;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_FinalizerHistogram$Entry_h_