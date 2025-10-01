#ifndef _FinalizerHistogramTest$MyObject_h_
#define _FinalizerHistogramTest$MyObject_h_
//$ class FinalizerHistogramTest$MyObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

class $export FinalizerHistogramTest$MyObject : public ::java::lang::Object {
	$class(FinalizerHistogramTest$MyObject, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	FinalizerHistogramTest$MyObject();
	void init$();
	virtual void finalize() override;
};

#endif // _FinalizerHistogramTest$MyObject_h_