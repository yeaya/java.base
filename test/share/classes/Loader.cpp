#include <Loader.h>

#include <java/io/DataInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef FIND
#undef RESOURCE
#undef RESOURCES

using $DataInputStream = ::java::io::DataInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;

$FieldInfo _Loader_FieldInfo_[] = {
	{"FIND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Loader, FIND)},
	{"RESOURCE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Loader, RESOURCE)},
	{"RESOURCES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Loader, RESOURCES)},
	{}
};

$MethodInfo _Loader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Loader::*)()>(&Loader::init$))},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", nullptr, $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{"locateBytes", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(Loader::*)()>(&Loader::locateBytes))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Loader::main)), "java.lang.Exception"},
	{"report", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Loader::report))},
	{}
};

$ClassInfo _Loader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Loader",
	"java.lang.ClassLoader",
	nullptr,
	_Loader_FieldInfo_,
	_Loader_MethodInfo_
};

$Object* allocate$Loader($Class* clazz) {
	return $of($alloc(Loader));
}

void Loader::init$() {
	$ClassLoader::init$();
}

$Class* Loader::loadClass($String* name, bool resolve) {
	$useLocalCurrentObjectStackCache();
	$Class* c = nullptr;
	try {
		c = findSystemClass(name);
	} catch ($ClassNotFoundException&) {
		$catch();
	}
	if (c == nullptr) {
		if (!$nc(name)->equals("Loadee"_s)) {
			$throwNew($Error, $$str({"java.lang.ClassLoader.findSystemClass() did not find class "_s, name}));
		}
		$var($bytes, b, locateBytes());
		c = defineClass(name, b, 0, $nc(b)->length);
	}
	if (resolve) {
		resolveClass(c);
	}
	return c;
}

$bytes* Loader::locateBytes() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, f, $new($File, $($System::getProperty("test.src"_s, "."_s)), "Loadee.classfile"_s));
		int64_t l = f->length();
		$var($bytes, b, $new($bytes, (int32_t)l));
		$var($DataInputStream, in, $new($DataInputStream, $$new($FileInputStream, f)));
		in->readFully(b);
		return b;
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		ioe->printStackTrace();
		$throwNew($Error, "Test failed due to IOException!"_s);
	}
	$shouldNotReachHere();
}

void Loader::main($StringArray* args) {
	$init(Loader);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t tests = (Loader::FIND | Loader::RESOURCE) | Loader::RESOURCES;
	if ($nc(args)->length == 1 && $nc(args->get(0))->equals("-1.1"_s)) {
		tests &= (uint32_t)~Loader::RESOURCES;
	}
	if (((int32_t)(tests & (uint32_t)Loader::FIND)) == Loader::FIND) {
		report("findSystemClass()"_s);
		$var($ClassLoader, l, $new(Loader));
		$Class* c = l->loadClass("Loadee"_s);
		$var($Object, o, $nc(c)->newInstance());
	}
	if (((int32_t)(tests & (uint32_t)Loader::RESOURCE)) == Loader::RESOURCE) {
		report("getSystemResource()"_s);
		$var($URL, u, getSystemResource("Loadee.resource"_s));
		if (u == nullptr) {
			$throwNew($Exception, "java.lang.ClassLoader.getSystemResource() test failed!"_s);
		}
	}
}

void Loader::report($String* s) {
	$init(Loader);
	$init($System);
	$nc($System::out)->println($$str({"Testing java.lang.ClassLoader."_s, s, " ..."_s}));
}

Loader::Loader() {
}

$Class* Loader::load$($String* name, bool initialize) {
	$loadClass(Loader, name, initialize, &_Loader_ClassInfo_, allocate$Loader);
	return class$;
}

$Class* Loader::class$ = nullptr;