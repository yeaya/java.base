#include <javax/crypto/extObjectInputStream.h>

#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace crypto {

$MethodInfo _extObjectInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(extObjectInputStream, init$, void, $InputStream*), "java.io.IOException,java.io.StreamCorruptedException"},
	{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(extObjectInputStream, resolveClass, $Class*, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _extObjectInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.crypto.extObjectInputStream",
	"java.io.ObjectInputStream",
	nullptr,
	nullptr,
	_extObjectInputStream_MethodInfo_
};

$Object* allocate$extObjectInputStream($Class* clazz) {
	return $of($alloc(extObjectInputStream));
}

void extObjectInputStream::init$($InputStream* in) {
	$ObjectInputStream::init$(in);
}

$Class* extObjectInputStream::resolveClass($ObjectStreamClass* v) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $ObjectInputStream::resolveClass(v);
	} catch ($ClassNotFoundException& cnfe) {
		$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
		if (loader == nullptr) {
			$assign(loader, $ClassLoader::getSystemClassLoader());
			if (loader == nullptr) {
				$throwNew($ClassNotFoundException, $($nc(v)->getName()));
			}
		}
		return $Class::forName($($nc(v)->getName()), false, loader);
	}
	$shouldNotReachHere();
}

extObjectInputStream::extObjectInputStream() {
}

$Class* extObjectInputStream::load$($String* name, bool initialize) {
	$loadClass(extObjectInputStream, name, initialize, &_extObjectInputStream_ClassInfo_, allocate$extObjectInputStream);
	return class$;
}

$Class* extObjectInputStream::class$ = nullptr;

	} // crypto
} // javax