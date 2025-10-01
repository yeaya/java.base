#ifndef _TestClassArray_h_
#define _TestClassArray_h_
//$ class TestClassArray
//$ extends java.io.Serializable
//$ implements java.lang.Readable,java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Readable.h>

class TestClassArray : public ::java::io::Serializable, public ::java::lang::Readable, public ::java::lang::Cloneable {
	$class(TestClassArray, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Readable, ::java::lang::Cloneable)
public:
	TestClassArray();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Array<::java::lang::Object, 3>* foo();
	virtual $String* toString() override;
};

#endif // _TestClassArray_h_