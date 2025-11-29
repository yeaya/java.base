#include <NullURLTest.h>

#include <java/io/File.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/net/URLStreamHandlerFactory.h>
#include <java/util/jar/JarFile.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $URLStreamHandlerFactory = ::java::net::URLStreamHandlerFactory;

$FieldInfo _NullURLTest_FieldInfo_[] = {
	{"jarFile", "Ljava/util/jar/JarFile;", nullptr, 0, $field(NullURLTest, jarFile)},
	{}
};

$MethodInfo _NullURLTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NullURLTest::*)()>(&NullURLTest::init$)), "java.lang.Throwable"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullURLTest::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _NullURLTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullURLTest",
	"java.lang.Object",
	nullptr,
	_NullURLTest_FieldInfo_,
	_NullURLTest_MethodInfo_
};

$Object* allocate$NullURLTest($Class* clazz) {
	return $of($alloc(NullURLTest));
}

void NullURLTest::main($StringArray* args) {
	$new(NullURLTest);
}

void NullURLTest::init$() {
	$useLocalCurrentObjectStackCache();
	$var($File, local, $new($File, $($System::getProperty("test.src"_s, "."_s)), "jars"_s));
	$var($String, path, $str({"jar:file:"_s, $(local->getPath()), "/class_path_test.jar!/Foo.class"_s}));
	$var($URL, validURL, $new($URL, path));
	$var($URLArray, validURLArray, $new($URLArray, {
		validURL,
		validURL
	}));
	$var($URLArray, invalidURLArray, $new($URLArray, {
		validURL,
		($URL*)nullptr
	}));
	int32_t failures = 0;
	$var($URLClassLoader, loader, nullptr);
	try {
		$assign(loader, $new($URLClassLoader, validURLArray));
	} catch ($Throwable& t) {
		$nc($System::err)->println($$str({"URLClassLoader(validURLArray) threw "_s, t}));
		++failures;
	}
	try {
		$assign(loader, $new($URLClassLoader, nullptr));
		$nc($System::err)->println("URLClassLoader(null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $new($URLClassLoader, invalidURLArray));
		$nc($System::err)->println("URLClassLoader(invalidURLArray) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $new($URLClassLoader, validURLArray, ($ClassLoader*)nullptr));
	} catch ($Throwable& t) {
		$nc($System::err)->println($$str({"URLClassLoader(validURLArray, null) threw "_s, t}));
		++failures;
	}
	try {
		$assign(loader, $new($URLClassLoader, ($URLArray*)nullptr, ($ClassLoader*)nullptr));
		$nc($System::err)->println("URLClassLoader(null, null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $new($URLClassLoader, invalidURLArray, ($ClassLoader*)nullptr));
		$nc($System::err)->println("URLClassLoader(invalidURLArray, null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $new($URLClassLoader, validURLArray, ($ClassLoader*)nullptr, ($URLStreamHandlerFactory*)nullptr));
	} catch ($Throwable& t) {
		$nc($System::err)->println($$str({"URLClassLoader(validURLArray, null, null) threw "_s, t}));
		++failures;
	}
	try {
		$assign(loader, $new($URLClassLoader, ($URLArray*)nullptr, ($ClassLoader*)nullptr, ($URLStreamHandlerFactory*)nullptr));
		$nc($System::err)->println("URLClassLoader(null, null, null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $new($URLClassLoader, invalidURLArray, ($ClassLoader*)nullptr, ($URLStreamHandlerFactory*)nullptr));
		$nc($System::err)->println("URLClassLoader(invalidURLArray, null, null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $URLClassLoader::newInstance(validURLArray));
	} catch ($Throwable& t) {
		$nc($System::err)->println($$str({"URLClassLoader.newInstance(validURLArray) threw "_s, t}));
		++failures;
	}
	try {
		$assign(loader, $URLClassLoader::newInstance(nullptr));
		$nc($System::err)->println("URLClassLoader.newInstance(null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $URLClassLoader::newInstance(invalidURLArray));
		$nc($System::err)->println("URLClassLoader.newInstance(invalidURLArray) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $URLClassLoader::newInstance(validURLArray, nullptr));
	} catch ($Throwable& t) {
		$nc($System::err)->println($$str({"URLClassLoader.newInstance(validURLArray, null) threw "_s, t}));
		++failures;
	}
	try {
		$assign(loader, $URLClassLoader::newInstance(nullptr, nullptr));
		$nc($System::err)->println("URLClassLoader.newInstance(null, null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	try {
		$assign(loader, $URLClassLoader::newInstance(invalidURLArray, nullptr));
		$nc($System::err)->println("URLClassLoader.newInstance(invalidURLArray, null) did not throw NPE"_s);
		++failures;
	} catch ($NullPointerException& e) {
	}
	if (failures != 0) {
		$throwNew($Exception, $$str({"URLClassLoader NullURLTest had "_s, $$str(failures), " failures!"_s}));
	}
}

NullURLTest::NullURLTest() {
}

$Class* NullURLTest::load$($String* name, bool initialize) {
	$loadClass(NullURLTest, name, initialize, &_NullURLTest_ClassInfo_, allocate$NullURLTest);
	return class$;
}

$Class* NullURLTest::class$ = nullptr;