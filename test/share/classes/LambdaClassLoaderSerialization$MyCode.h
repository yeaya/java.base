#ifndef _LambdaClassLoaderSerialization$MyCode_h_
#define _LambdaClassLoaderSerialization$MyCode_h_
//$ class LambdaClassLoaderSerialization$MyCode
//$ extends LambdaClassLoaderSerialization$SerializableRunnable

#include <LambdaClassLoaderSerialization$SerializableRunnable.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class SerializedLambda;
		}
	}
}

class $export LambdaClassLoaderSerialization$MyCode : public ::LambdaClassLoaderSerialization$SerializableRunnable {
	$class(LambdaClassLoaderSerialization$MyCode, $NO_CLASS_INIT, ::LambdaClassLoaderSerialization$SerializableRunnable)
public:
	LambdaClassLoaderSerialization$MyCode();
	static $Object* $deserializeLambda$(::java::lang::invoke::SerializedLambda* lambda);
	void init$();
	$Object* deserialize($bytes* bytes);
	static void lambda$run$776879b6$1();
	virtual void run() override;
	$bytes* serialize(Object$* o);
};

#endif // _LambdaClassLoaderSerialization$MyCode_h_