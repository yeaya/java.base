#ifndef _MostlyPrimitive_h_
#define _MostlyPrimitive_h_
//$ interface MostlyPrimitive
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

class MostlyPrimitive : public ::java::lang::annotation::Annotation {
	$interface(MostlyPrimitive, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual int8_t b0() {return 0;}
	virtual char16_t c0() {return 0;}
	virtual char16_t c1() {return 0;}
	virtual $Class* class0() {return nullptr;}
	virtual $ClassArray* classArray() {return nullptr;}
	virtual double d0() {return 0.0;}
	virtual double d1() {return 0.0;}
	virtual float f0() {return 0.0;}
	virtual float f1() {return 0.0;}
	virtual int32_t i0() {return 0;}
	virtual int32_t i1() {return 0;}
	virtual int64_t l0() {return 0;}
	virtual int64_t l1() {return 0;}
	virtual int64_t l2() {return 0;}
	virtual int64_t l3() {return 0;}
	virtual $String* s0() {return nullptr;}
	virtual $String* s1() {return nullptr;}
};

#endif // _MostlyPrimitive_h_