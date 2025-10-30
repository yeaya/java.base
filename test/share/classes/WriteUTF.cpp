#include <WriteUTF.h>

#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/UTFDataFormatException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $UTFDataFormatException = ::java::io::UTFDataFormatException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _WriteUTF_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WriteUTF::*)()>(&WriteUTF::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WriteUTF::main)), "java.io.IOException"},
	{}
};

$ClassInfo _WriteUTF_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WriteUTF",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WriteUTF_MethodInfo_
};

$Object* allocate$WriteUTF($Class* clazz) {
	return $of($alloc(WriteUTF));
}

void WriteUTF::init$() {
}

void WriteUTF::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($RandomAccessFile, f, nullptr);
	$var($File, fn, $new($File, "x.WriteUTF"_s));
	$var($String, s, u"\uffff"_s);
	for (int32_t i = 0; i < 16; ++i) {
		$plusAssign(s, s);
	}
	$nc($System::err)->println($$str({"String length "_s, $$str(s->length())}));
	$assign(f, $new($RandomAccessFile, fn, "rw"_s));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				f->writeUTF(s);
			} catch ($UTFDataFormatException& x) {
				return;
			}
			$throwNew($RuntimeException, "UTFDataFormatException not thrown"_s);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			f->close();
			fn->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

WriteUTF::WriteUTF() {
}

$Class* WriteUTF::load$($String* name, bool initialize) {
	$loadClass(WriteUTF, name, initialize, &_WriteUTF_ClassInfo_, allocate$WriteUTF);
	return class$;
}

$Class* WriteUTF::class$ = nullptr;