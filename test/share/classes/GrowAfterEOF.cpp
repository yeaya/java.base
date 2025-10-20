#include <GrowAfterEOF.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GrowAfterEOF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GrowAfterEOF::*)()>(&GrowAfterEOF::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GrowAfterEOF::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _GrowAfterEOF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GrowAfterEOF",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GrowAfterEOF_MethodInfo_
};

$Object* allocate$GrowAfterEOF($Class* clazz) {
	return $of($alloc(GrowAfterEOF));
}

void GrowAfterEOF::init$() {
}

void GrowAfterEOF::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, input, $new($File, "."_s, "TestEOFInput.txt"_s));
	$var($RandomAccessFile, rf, $new($RandomAccessFile, input, "rw"_s));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($BufferedReader, r, $new($BufferedReader, $$new($InputStreamReader, $$new($FileInputStream, input))));
			{
				$var($Throwable, var$1, nullptr);
				try {
					rf->writeBytes("a line"_s);
					while (r->readLine() != nullptr) {
					}
					rf->seek(rf->length());
					rf->writeBytes("new line"_s);
					bool readMore = false;
					while (r->readLine() != nullptr) {
						readMore = true;
					}
					if (!readMore) {
						input->delete$();
						$throwNew($Exception, "Failed test: unable to read!"_s);
					} else {
						input->delete$();
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} /*finally*/ {
					r->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			rf->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

GrowAfterEOF::GrowAfterEOF() {
}

$Class* GrowAfterEOF::load$($String* name, bool initialize) {
	$loadClass(GrowAfterEOF, name, initialize, &_GrowAfterEOF_ClassInfo_, allocate$GrowAfterEOF);
	return class$;
}

$Class* GrowAfterEOF::class$ = nullptr;