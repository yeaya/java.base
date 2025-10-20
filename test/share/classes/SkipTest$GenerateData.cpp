#include <SkipTest$GenerateData.h>

#include <SkipTest.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SkipTest = ::SkipTest;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

$MethodInfo _SkipTest$GenerateData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SkipTest$GenerateData::*)()>(&SkipTest$GenerateData::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SkipTest$GenerateData::main))},
	{}
};

$InnerClassInfo _SkipTest$GenerateData_InnerClassesInfo_[] = {
	{"SkipTest$GenerateData", "SkipTest", "GenerateData", $STATIC},
	{}
};

$ClassInfo _SkipTest$GenerateData_ClassInfo_ = {
	$ACC_SUPER,
	"SkipTest$GenerateData",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SkipTest$GenerateData_MethodInfo_,
	nullptr,
	nullptr,
	_SkipTest$GenerateData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SkipTest"
};

$Object* allocate$SkipTest$GenerateData($Class* clazz) {
	return $of($alloc(SkipTest$GenerateData));
}

void SkipTest$GenerateData::init$() {
}

void SkipTest$GenerateData::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($System);
		$var($OutputStream, out, $new($BufferedOutputStream, $System::out));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (int32_t header = u'A'; header <= u'Z'; ++header) {
						out->write(header);
						int32_t data = $Character::toLowerCase(header);
						for (int32_t i = 0; i < 10000; ++i) {
							out->write(data);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						out->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				out->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		ioe->printStackTrace();
		$System::exit(1);
	}
	try {
		$init($System);
		$var($OutputStream, err, $new($BufferedOutputStream, $System::err));
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					for (int32_t header = u'A'; header <= u'Z'; ++header) {
						err->write(header);
						int32_t data = $Character::toLowerCase(header);
						for (int32_t i = 0; i < 10000; ++i) {
							err->write(data);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						err->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				err->close();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		ioe->printStackTrace();
		$System::exit(1);
	}
}

SkipTest$GenerateData::SkipTest$GenerateData() {
}

$Class* SkipTest$GenerateData::load$($String* name, bool initialize) {
	$loadClass(SkipTest$GenerateData, name, initialize, &_SkipTest$GenerateData_ClassInfo_, allocate$SkipTest$GenerateData);
	return class$;
}

$Class* SkipTest$GenerateData::class$ = nullptr;