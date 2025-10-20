#include <Seek.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Seek_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Seek::*)()>(&Seek::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Seek::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Seek_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Seek",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Seek_MethodInfo_
};

$Object* allocate$Seek($Class* clazz) {
	return $of($alloc(Seek));
}

void Seek::init$() {
}

void Seek::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($String, dir, $System::getProperty("test.src"_s, "."_s));
	$var($RandomAccessFile, raf, $new($RandomAccessFile, $$new($File, dir, "Seek.java"_s), "r"_s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				raf->seek(-10);
				$throwNew($Exception, "Should have thrown an IOException when seek offset is < 0"_s);
			} catch ($IOException&) {
				$catch();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			raf->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Seek::Seek() {
}

$Class* Seek::load$($String* name, bool initialize) {
	$loadClass(Seek, name, initialize, &_Seek_ClassInfo_, allocate$Seek);
	return class$;
}

$Class* Seek::class$ = nullptr;