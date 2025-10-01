#ifndef _LambdaClassLoaderSerialization$SerializableRunnable_h_
#define _LambdaClassLoaderSerialization$SerializableRunnable_h_
//$ interface LambdaClassLoaderSerialization$SerializableRunnable
//$ extends java.lang.Runnable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>

class $export LambdaClassLoaderSerialization$SerializableRunnable : public ::java::lang::Runnable, public ::java::io::Serializable {
	$interface(LambdaClassLoaderSerialization$SerializableRunnable, $NO_CLASS_INIT, ::java::lang::Runnable, ::java::io::Serializable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

#endif // _LambdaClassLoaderSerialization$SerializableRunnable_h_