#include <LambdaClassLoaderSerialization$SerializableRunnable.h>

#include <LambdaClassLoaderSerialization.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LambdaClassLoaderSerialization = ::LambdaClassLoaderSerialization;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _LambdaClassLoaderSerialization$SerializableRunnable_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$InnerClassInfo _LambdaClassLoaderSerialization$SerializableRunnable_InnerClassesInfo_[] = {
	{"LambdaClassLoaderSerialization$SerializableRunnable", "LambdaClassLoaderSerialization", "SerializableRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaClassLoaderSerialization$SerializableRunnable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"LambdaClassLoaderSerialization$SerializableRunnable",
	nullptr,
	"java.lang.Runnable,java.io.Serializable",
	nullptr,
	_LambdaClassLoaderSerialization$SerializableRunnable_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaClassLoaderSerialization$SerializableRunnable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LambdaClassLoaderSerialization"
};

$Object* allocate$LambdaClassLoaderSerialization$SerializableRunnable($Class* clazz) {
	return $of($alloc(LambdaClassLoaderSerialization$SerializableRunnable));
}

int32_t LambdaClassLoaderSerialization$SerializableRunnable::hashCode() {
	 return this->$Runnable::hashCode();
}

bool LambdaClassLoaderSerialization$SerializableRunnable::equals(Object$* arg0) {
	 return this->$Runnable::equals(arg0);
}

$Object* LambdaClassLoaderSerialization$SerializableRunnable::clone() {
	 return this->$Runnable::clone();
}

$String* LambdaClassLoaderSerialization$SerializableRunnable::toString() {
	 return this->$Runnable::toString();
}

void LambdaClassLoaderSerialization$SerializableRunnable::finalize() {
	this->$Runnable::finalize();
}

$Class* LambdaClassLoaderSerialization$SerializableRunnable::load$($String* name, bool initialize) {
	$loadClass(LambdaClassLoaderSerialization$SerializableRunnable, name, initialize, &_LambdaClassLoaderSerialization$SerializableRunnable_ClassInfo_, allocate$LambdaClassLoaderSerialization$SerializableRunnable);
	return class$;
}

$Class* LambdaClassLoaderSerialization$SerializableRunnable::class$ = nullptr;