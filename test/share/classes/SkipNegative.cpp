#include <SkipNegative.h>

#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SkipNegative_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SkipNegative, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SkipNegative, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SkipNegative_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SkipNegative",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SkipNegative_MethodInfo_
};

$Object* allocate$SkipNegative($Class* clazz) {
	return $of($alloc(SkipNegative));
}

void SkipNegative::init$() {
}

void SkipNegative::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, $($System::getProperty("test.src"_s, "."_s)), "SkipInput.txt"_s));
	$var($FileReader, fr, $new($FileReader, f));
	int64_t nchars = -1;
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				int64_t actual = fr->skip(nchars);
			} catch ($IllegalArgumentException& e) {
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			fr->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	$throwNew($Exception, "Skip should not accept negative values"_s);
}

SkipNegative::SkipNegative() {
}

$Class* SkipNegative::load$($String* name, bool initialize) {
	$loadClass(SkipNegative, name, initialize, &_SkipNegative_ClassInfo_, allocate$SkipNegative);
	return class$;
}

$Class* SkipNegative::class$ = nullptr;