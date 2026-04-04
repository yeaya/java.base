#include <WinSpecialFiles.h>
#include <java/io/File.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void WinSpecialFiles::init$() {
}

void WinSpecialFiles::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, osName, $System::getProperty("os.name"_s));
	if (!$nc(osName)->startsWith("Windows"_s)) {
		return;
	}
	$var($File, root, $new($File, "C:\\"_s));
	$var($FileArray, dir, root->listFiles());
	for (int32_t i = 0; i < $nc(dir)->length; ++i) {
		if (!$nc(dir->get(i))->exists()) {
			$throwNew($Exception, $$str({"exists() returns false for <"_s, $($nc(dir->get(i))->getPath()), ">"_s}));
		}
		$var($String, name, $$nc($nc(dir->get(i))->getPath())->toLowerCase());
		bool var$0 = name->indexOf("pagefile.sys"_s) != -1;
		if (var$0 || name->indexOf("hiberfil.sys"_s) != -1) {
			if ($nc(dir->get(i))->length() == 0) {
				$throwNew($Exception, $$str({"Size of existing file \""_s, $($nc(dir->get(i))->getPath()), "\" is ZERO"_s}));
			}
		}
	}
}

WinSpecialFiles::WinSpecialFiles() {
}

$Class* WinSpecialFiles::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WinSpecialFiles, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WinSpecialFiles, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WinSpecialFiles",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WinSpecialFiles, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WinSpecialFiles);
	});
	return class$;
}

$Class* WinSpecialFiles::class$ = nullptr;