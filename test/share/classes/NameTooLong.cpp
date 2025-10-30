#include <NameTooLong.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/nio/file/Path.h>
#include <jcpp.h>

using $StringArray2 = $Array<::java::lang::String, 2>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Path = ::java::nio::file::Path;

$MethodInfo _NameTooLong_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NameTooLong::*)()>(&NameTooLong::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NameTooLong::main))},
	{}
};

$ClassInfo _NameTooLong_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NameTooLong",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NameTooLong_MethodInfo_
};

$Object* allocate$NameTooLong($Class* clazz) {
	return $of($alloc(NameTooLong));
}

void NameTooLong::init$() {
}

void NameTooLong::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray2, prefixSuffix, $new($StringArray2, {
		$$new($StringArray, {
			"1234567890123456789012345678901234567xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx89012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890"_s,
			"txt"_s
		}),
		$$new($StringArray, {
			"prefix"_s,
			"1234567890123456789012345678901234567xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx89012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890.txt"_s
		}),
		$$new($StringArray, {
			"prefix"_s,
			".txt1234567890123456789012345678901234567xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx89012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890"_s
		})
	}));
	int32_t failures = 0;
	int32_t index = 0;
	{
		$var($StringArray2, arr$, prefixSuffix);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StringArray, ps, arr$->get(i$));
			{
				$var($File, f, nullptr);
				try {
					$assign(f, $File::createTempFile($nc(ps)->get(0), ps->get(1), $$new($File, $($System::getProperty("test.dir"_s, "."_s)))));
					$var($String, s, $nc($($nc($($nc(f)->toPath()))->getFileName()))->toString());
					if (!$nc(s)->startsWith($($nc($nc(ps)->get(0))->substring(0, 3)))) {
						$nc($System::err)->printf("%s did not start with %s%n"_s, $$new($ObjectArray, {
							$of(s),
							$($of($nc($nc(ps)->get(0))->substring(0, 3)))
						}));
						++failures;
					}
					bool var$0 = $nc($nc(ps)->get(1))->startsWith("."_s);
					if (var$0 && !$nc(s)->contains($($nc(ps->get(1))->substring(0, 4)))) {
						$nc($System::err)->printf("%s did not contain %s%n"_s, $$new($ObjectArray, {
							$of(s),
							$($of($nc(ps->get(1))->substring(0, 4)))
						}));
						++failures;
					}
				} catch ($IOException& e) {
					++failures;
					$nc($System::err)->println();
					e->printStackTrace();
					$nc($System::err)->println();
				}
				++index;
			}
		}
	}
	if (failures != 0) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

NameTooLong::NameTooLong() {
}

$Class* NameTooLong::load$($String* name, bool initialize) {
	$loadClass(NameTooLong, name, initialize, &_NameTooLong_ClassInfo_, allocate$NameTooLong);
	return class$;
}

$Class* NameTooLong::class$ = nullptr;