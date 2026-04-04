#include <SpecialTempFile.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

void SpecialTempFile::init$() {
}

void SpecialTempFile::test($String* name, $StringArray* prefix, $StringArray* suffix, bool exceptionExpected) {
	$useLocalObjectStack();
	if (prefix == nullptr || suffix == nullptr || prefix->length != suffix->length) {
		return;
	}
	$var($String, exceptionMsg, "Unable to create temporary file"_s);
	$var($StringArray, dirs, $new($StringArray, {
		nullptr,
		"."_s
	}));
	$var($Path, testPath, $Paths::get($($System::getProperty("test.dir"_s, "."_s)), $$new($StringArray, 0)));
	for (int32_t i = 0; i < $nc(prefix)->length; ++i) {
		bool exceptionThrown = false;
		$var($File, f, nullptr);
		{
			$var($StringArray, arr$, dirs);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, dir, arr$->get(i$));
				{
					$var($Path, tempDir, $Files::createTempDirectory(testPath, dir, $$new($FileAttributeArray, 0)));
					$nc($System::out)->println($$str({"In test "_s, name, ", creating temp file with prefix, "_s, prefix->get(i), ", suffix, "_s, $nc(suffix)->get(i), ", in dir, "_s, tempDir}));
					try {
						$assign(f, $File::createTempFile(prefix->get(i), suffix->get(i), $($nc(tempDir)->toFile())));
					} catch ($IOException& e) {
						if (exceptionExpected) {
							if ($$nc(e->getMessage())->startsWith(exceptionMsg)) {
								exceptionThrown = true;
							} else {
								$System::out->println($$str({"Wrong error message:"_s, $(e->getMessage())}));
							}
						} else {
							$throw(e);
						}
					}
					if (exceptionExpected && (!exceptionThrown || f != nullptr)) {
						$throwNew($RuntimeException, "IOException is expected"_s);
					}
				}
			}
		}
	}
}

void SpecialTempFile::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, name, "SpecialTempFile"_s);
	$var($StringArray, nulPre, $new($StringArray, {$$str({name, $cstr({'\0'})})}));
	$var($StringArray, nulSuf, $new($StringArray, {".test"_s}));
	test("NulName"_s, nulPre, nulSuf, true);
	$var($StringArray, goodPre, $new($StringArray, {
		"///..///"_s,
		"/foo"_s
	}));
	$var($StringArray, goodSuf, $new($StringArray, {
		".temp"_s,
		".tmp"_s
	}));
	test("goodName"_s, goodPre, goodSuf, false);
	$var($StringArray, slashPre, $new($StringArray, {
		"temp"_s,
		"///..///"_s,
		"/foo"_s
	}));
	$var($StringArray, slashSuf, $new($StringArray, {
		"///..///.."_s,
		"///..///.."_s,
		"///..///.."_s
	}));
	test("SlashedName"_s, slashPre, slashSuf, true);
	if (!$$nc($System::getProperty("os.name"_s))->startsWith("Windows"_s)) {
		return;
	}
	$var($StringArray, resvPre, $new($StringArray, {
		"LPT1.package.zip"_s,
		"com7.4.package.zip"_s
	}));
	$var($StringArray, resvSuf, $new($StringArray, {
		".temp"_s,
		".temp"_s
	}));
	test("ReservedName"_s, resvPre, resvSuf, true);
}

SpecialTempFile::SpecialTempFile() {
}

$Class* SpecialTempFile::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SpecialTempFile, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SpecialTempFile, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SpecialTempFile, test, void, $String*, $StringArray*, $StringArray*, bool), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SpecialTempFile",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SpecialTempFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpecialTempFile);
	});
	return class$;
}

$Class* SpecialTempFile::class$ = nullptr;