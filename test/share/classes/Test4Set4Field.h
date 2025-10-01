#ifndef _Test4Set4Field_h_
#define _Test4Set4Field_h_
//$ class Test4Set4Field
//$ extends java.lang.Object

#include <java/lang/Object.h>

class Test4Set4Field : public ::java::lang::Object {
	$class(Test4Set4Field, 0, ::java::lang::Object)
public:
	Test4Set4Field();
	void init$();
	virtual bool testAccessibleObject();
	virtual bool testAccessiblePrimitive();
	virtual bool testAccessibleStaticObject();
	virtual bool testAccessibleStaticPrimitive();
	virtual bool testObject();
	virtual bool testPrimitive();
	virtual bool testStaticObject();
	virtual bool testStaticPrimitive();
	virtual bool testVolatileObject();
	virtual bool testVolatilePrimitive();
	int32_t i = 0;
	$Object* o = nullptr;
	int32_t ni = 0;
	$Object* no = nullptr;
	$volatile(int32_t) vi = 0;
	$volatile($Object*) vo = nullptr;
	static const int32_t si = -1342; // 408 - 343 - 1407
	static $Object* so;
};

#endif // _Test4Set4Field_h_