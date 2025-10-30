#include <AnnotationTypeRuntimeAssumptionTest$AltClassLoader.h>

#include <AnnotationTypeRuntimeAssumptionTest.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jcpp.h>

using $AnnotationTypeRuntimeAssumptionTest = ::AnnotationTypeRuntimeAssumptionTest;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _AnnotationTypeRuntimeAssumptionTest$AltClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(static_cast<void(AnnotationTypeRuntimeAssumptionTest$AltClassLoader::*)($ClassLoader*)>(&AnnotationTypeRuntimeAssumptionTest$AltClassLoader::init$))},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _AnnotationTypeRuntimeAssumptionTest$AltClassLoader_InnerClassesInfo_[] = {
	{"AnnotationTypeRuntimeAssumptionTest$AltClassLoader", "AnnotationTypeRuntimeAssumptionTest", "AltClassLoader", $STATIC},
	{}
};

$ClassInfo _AnnotationTypeRuntimeAssumptionTest$AltClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"AnnotationTypeRuntimeAssumptionTest$AltClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest$AltClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationTypeRuntimeAssumptionTest$AltClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AnnotationTypeRuntimeAssumptionTest"
};

$Object* allocate$AnnotationTypeRuntimeAssumptionTest$AltClassLoader($Class* clazz) {
	return $of($alloc(AnnotationTypeRuntimeAssumptionTest$AltClassLoader));
}

void AnnotationTypeRuntimeAssumptionTest$AltClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
}

$Class* AnnotationTypeRuntimeAssumptionTest$AltClassLoader::loadClass($String* name, bool resolve) {
	if ($nc(name)->indexOf((int32_t)u'.') < 0) {
		$synchronized(getClassLoadingLock(name)) {
			$Class* c = findLoadedClass(name);
			if (c == nullptr) {
				c = findClass(name);
			}
			if (resolve) {
				resolveClass(c);
			}
			return c;
		}
	} else {
		return $ClassLoader::loadClass(name, resolve);
	}
}

$Class* AnnotationTypeRuntimeAssumptionTest$AltClassLoader::findClass($String* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->endsWith("_v1"_s)) {
		$var($String, altName, $str({$(name->substring(0, name->length() - 3)), "_v2"_s}));
		$var($String, altPath, $($nc(altName)->replace(u'.', u'/'))->concat(".class"_s));
		try {
			$var($InputStream, is, getResourceAsStream(altPath));
			{
				$var($Throwable, var$0, nullptr);
				$var($Class, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						if (is != nullptr) {
							$var($bytes, bytes, is->readAllBytes());
							for (int32_t i = 0; i < $nc(bytes)->length - 2; ++i) {
								if (bytes->get(i) == u'_' && bytes->get(i + 1) == u'v' && bytes->get(i + 2) == u'2') {
									bytes->set(i + 2, (int8_t)u'1');
								}
							}
							var$2 = defineClass(name, bytes, 0, $nc(bytes)->length);
							return$1 = true;
							goto $finally;
						} else {
							$throwNew($ClassNotFoundException, name);
						}
					} catch ($Throwable& t$) {
						if (is != nullptr) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					if (is != nullptr) {
						is->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($IOException& e) {
			$throwNew($ClassNotFoundException, name, e);
		}
	} else {
		$var($String, path, $(name->replace(u'.', u'/'))->concat(".class"_s));
		try {
			$var($InputStream, is, getResourceAsStream(path));
			{
				$var($Throwable, var$4, nullptr);
				$var($Class, var$6, nullptr);
				bool return$5 = false;
				try {
					try {
						if (is != nullptr) {
							$var($bytes, bytes, is->readAllBytes());
							var$6 = defineClass(name, bytes, 0, $nc(bytes)->length);
							return$5 = true;
							goto $finally1;
						} else {
							$throwNew($ClassNotFoundException, name);
						}
					} catch ($Throwable& t$) {
						if (is != nullptr) {
							try {
								is->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$7) {
					$assign(var$4, var$7);
				} $finally1: {
					if (is != nullptr) {
						is->close();
					}
				}
				if (var$4 != nullptr) {
					$throw(var$4);
				}
				if (return$5) {
					return var$6;
				}
			}
		} catch ($IOException& e) {
			$throwNew($ClassNotFoundException, name, e);
		}
	}
	$shouldNotReachHere();
}

AnnotationTypeRuntimeAssumptionTest$AltClassLoader::AnnotationTypeRuntimeAssumptionTest$AltClassLoader() {
}

$Class* AnnotationTypeRuntimeAssumptionTest$AltClassLoader::load$($String* name, bool initialize) {
	$loadClass(AnnotationTypeRuntimeAssumptionTest$AltClassLoader, name, initialize, &_AnnotationTypeRuntimeAssumptionTest$AltClassLoader_ClassInfo_, allocate$AnnotationTypeRuntimeAssumptionTest$AltClassLoader);
	return class$;
}

$Class* AnnotationTypeRuntimeAssumptionTest$AltClassLoader::class$ = nullptr;