#include <java/lang/Module$2.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Module.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace java {
	namespace lang {

$FieldInfo _Module$2_FieldInfo_[] = {
	{"this$0", "Ljava/lang/Module;", nullptr, $FINAL | $SYNTHETIC, $field(Module$2, this$0)},
	{"val$bytes", "[B", nullptr, $FINAL | $SYNTHETIC, $field(Module$2, val$bytes)},
	{}
};

$MethodInfo _Module$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Module;Ljava/lang/ClassLoader;[B)V", nullptr, 0, $method(Module$2, init$, void, $Module*, $ClassLoader*, $bytes*)},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(Module$2, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(Module$2, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
	{}
};

$EnclosingMethodInfo _Module$2_EnclosingMethodInfo_ = {
	"java.lang.Module",
	"loadModuleInfoClass",
	"(Ljava/io/InputStream;)Ljava/lang/Class;"
};

$InnerClassInfo _Module$2_InnerClassesInfo_[] = {
	{"java.lang.Module$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Module$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Module$2",
	"java.lang.ClassLoader",
	nullptr,
	_Module$2_FieldInfo_,
	_Module$2_MethodInfo_,
	nullptr,
	&_Module$2_EnclosingMethodInfo_,
	_Module$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Module"
};

$Object* allocate$Module$2($Class* clazz) {
	return $of($alloc(Module$2));
}

void Module$2::init$($Module* this$0, $ClassLoader* parent, $bytes* val$bytes) {
	$set(this, this$0, this$0);
	$set(this, val$bytes, val$bytes);
	$ClassLoader::init$(parent);
}

$Class* Module$2::findClass($String* cn) {
	if ($nc(cn)->equals("module-info"_s)) {
		return $ClassLoader::defineClass(cn, this->val$bytes, 0, $nc(this->val$bytes)->length);
	} else {
		$throwNew($ClassNotFoundException, cn);
	}
}

$Class* Module$2::loadClass($String* cn, bool resolve) {
	$synchronized(getClassLoadingLock(cn)) {
		$Class* c = findLoadedClass(cn);
		if (c == nullptr) {
			if ($nc(cn)->equals("module-info"_s)) {
				c = findClass(cn);
			} else {
				c = $ClassLoader::loadClass(cn, resolve);
			}
		}
		if (resolve) {
			resolveClass(c);
		}
		return c;
	}
}

Module$2::Module$2() {
}

$Class* Module$2::load$($String* name, bool initialize) {
	$loadClass(Module$2, name, initialize, &_Module$2_ClassInfo_, allocate$Module$2);
	return class$;
}

$Class* Module$2::class$ = nullptr;

	} // lang
} // java