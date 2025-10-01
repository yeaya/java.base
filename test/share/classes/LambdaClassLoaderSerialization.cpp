#include <LambdaClassLoaderSerialization.h>

#include <LambdaClassLoaderSerialization$MyClassLoader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LambdaClassLoaderSerialization$MyClassLoader = ::LambdaClassLoaderSerialization$MyClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _LambdaClassLoaderSerialization_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaClassLoaderSerialization::*)()>(&LambdaClassLoaderSerialization::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LambdaClassLoaderSerialization::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _LambdaClassLoaderSerialization_InnerClassesInfo_[] = {
	{"LambdaClassLoaderSerialization$MyClassLoader", "LambdaClassLoaderSerialization", "MyClassLoader", $STATIC},
	{"LambdaClassLoaderSerialization$MyCode", "LambdaClassLoaderSerialization", "MyCode", $PUBLIC | $STATIC},
	{"LambdaClassLoaderSerialization$SerializableRunnable", "LambdaClassLoaderSerialization", "SerializableRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaClassLoaderSerialization_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LambdaClassLoaderSerialization",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LambdaClassLoaderSerialization_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaClassLoaderSerialization_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LambdaClassLoaderSerialization$MyClassLoader,LambdaClassLoaderSerialization$MyCode,LambdaClassLoaderSerialization$SerializableRunnable"
};

$Object* allocate$LambdaClassLoaderSerialization($Class* clazz) {
	return $of($alloc(LambdaClassLoaderSerialization));
}

void LambdaClassLoaderSerialization::init$() {
}

void LambdaClassLoaderSerialization::main($StringArray* args) {
	$load(LambdaClassLoaderSerialization);
	$beforeCallerSensitive();
	$var($ClassLoader, myCl, $new($LambdaClassLoaderSerialization$MyClassLoader, $(LambdaClassLoaderSerialization::class$->getClassLoader())));
	$Class* myCodeClass = $Class::forName($$str({$(LambdaClassLoaderSerialization::class$->getName()), "$MyCode"_s}), true, myCl);
	$var($Runnable, myCode, $cast($Runnable, $nc(myCodeClass)->newInstance()));
	$nc(myCode)->run();
}

LambdaClassLoaderSerialization::LambdaClassLoaderSerialization() {
}

$Class* LambdaClassLoaderSerialization::load$($String* name, bool initialize) {
	$loadClass(LambdaClassLoaderSerialization, name, initialize, &_LambdaClassLoaderSerialization_ClassInfo_, allocate$LambdaClassLoaderSerialization);
	return class$;
}

$Class* LambdaClassLoaderSerialization::class$ = nullptr;