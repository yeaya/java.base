#include <LambdaClassLoaderSerialization$SerializableRunnable.h>
#include <LambdaClassLoaderSerialization.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

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
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaClassLoaderSerialization$SerializableRunnable", "LambdaClassLoaderSerialization", "SerializableRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"LambdaClassLoaderSerialization$SerializableRunnable",
		nullptr,
		"java.lang.Runnable,java.io.Serializable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LambdaClassLoaderSerialization"
	};
	$loadClass(LambdaClassLoaderSerialization$SerializableRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LambdaClassLoaderSerialization$SerializableRunnable));
	});
	return class$;
}

$Class* LambdaClassLoaderSerialization$SerializableRunnable::class$ = nullptr;