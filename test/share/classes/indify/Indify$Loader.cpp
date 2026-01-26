#include <indify/Indify$Loader.h>

#include <indify/Indify$ClassFile.h>
#include <indify/Indify$Logic.h>
#include <indify/Indify.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$ClassFile = ::indify::Indify$ClassFile;
using $Indify$Logic = ::indify::Indify$Logic;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace indify {

$FieldInfo _Indify$Loader_FieldInfo_[] = {
	{"this$0", "Lindify/Indify;", nullptr, $FINAL | $SYNTHETIC, $field(Indify$Loader, this$0)},
	{}
};

$MethodInfo _Indify$Loader_MethodInfo_[] = {
	{"<init>", "(Lindify/Indify;)V", nullptr, 0, $method(Indify$Loader, init$, void, $Indify*)},
	{"<init>", "(Lindify/Indify;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(Indify$Loader, init$, void, $Indify*, $ClassLoader*)},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(Indify$Loader, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
	{"findClassInPath", "(Ljava/lang/String;)Ljava/io/File;", nullptr, $PRIVATE, $method(Indify$Loader, findClassInPath, $File*, $String*)},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(Indify$Loader, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
	{"transformAndLoadClass", "(Ljava/io/File;)Ljava/lang/Class;", "(Ljava/io/File;)Ljava/lang/Class<*>;", $PRIVATE, $method(Indify$Loader, transformAndLoadClass, $Class*, $File*), "java.lang.ClassNotFoundException,java.io.IOException"},
	{}
};

$InnerClassInfo _Indify$Loader_InnerClassesInfo_[] = {
	{"indify.Indify$Loader", "indify.Indify", "Loader", $PRIVATE},
	{}
};

$ClassInfo _Indify$Loader_ClassInfo_ = {
	$ACC_SUPER,
	"indify.Indify$Loader",
	"java.lang.ClassLoader",
	nullptr,
	_Indify$Loader_FieldInfo_,
	_Indify$Loader_MethodInfo_,
	nullptr,
	nullptr,
	_Indify$Loader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Loader($Class* clazz) {
	return $of($alloc(Indify$Loader));
}

void Indify$Loader::init$($Indify* this$0) {
	$beforeCallerSensitive();
	$load($Indify);
	Indify$Loader::init$(this$0, $($Indify::class$->getClassLoader()));
}

void Indify$Loader::init$($Indify* this$0, $ClassLoader* parent) {
	$set(this, this$0, this$0);
	$ClassLoader::init$(parent);
}

$Class* Indify$Loader::loadClass($String* name, bool resolve) {
	$var($File, f, findClassInPath(name));
	if (f != nullptr) {
		try {
			$Class* c = transformAndLoadClass(f);
			if (c != nullptr) {
				if (resolve) {
					resolveClass(c);
				}
				return c;
			}
		} catch ($ClassNotFoundException& ex) {
		} catch ($IOException& ex) {
		} catch ($Exception& ex) {
			if ($instanceOf($RuntimeException, ex)) {
				$throw($cast($RuntimeException, ex));
			}
			$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
		}
	}
	return $ClassLoader::loadClass(name, resolve);
}

$File* Indify$Loader::findClassInPath($String* name) {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, this->this$0->classpath);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				$var($File, f, this->this$0->classPathFile($$new($File, s), name));
				bool var$0 = $nc(f)->exists();
				if (var$0 && f->canRead()) {
					return f;
				}
			}
		}
	}
	return nullptr;
}

$Class* Indify$Loader::findClass($String* name) {
	try {
		$var($File, f, findClassInPath(name));
		if (f != nullptr) {
			$Class* c = transformAndLoadClass(f);
			if (c != nullptr) {
				return c;
			}
		}
	} catch ($IOException& ex) {
		$throwNew($ClassNotFoundException, "IO error"_s, ex);
	}
	$throwNew($ClassNotFoundException);
	$shouldNotReachHere();
}

$Class* Indify$Loader::transformAndLoadClass($File* f) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->verbose) {
		$nc($System::err)->println($$str({"Loading class from "_s, f}));
	}
	$var($Indify$ClassFile, cf, $new($Indify$ClassFile, this->this$0, f));
	$var($Indify$Logic, logic, $new($Indify$Logic, this->this$0, cf));
	bool changed = logic->transform();
	if (this->this$0->verbose && !changed) {
		$nc($System::err)->println("(no change)"_s);
	}
	logic->reportPatternMethods(!this->this$0->verbose, this->this$0->keepgoing);
	$var($bytes, bytes, cf->toByteArray());
	return defineClass(nullptr, bytes, 0, $nc(bytes)->length);
}

Indify$Loader::Indify$Loader() {
}

$Class* Indify$Loader::load$($String* name, bool initialize) {
	$loadClass(Indify$Loader, name, initialize, &_Indify$Loader_ClassInfo_, allocate$Indify$Loader);
	return class$;
}

$Class* Indify$Loader::class$ = nullptr;

} // indify