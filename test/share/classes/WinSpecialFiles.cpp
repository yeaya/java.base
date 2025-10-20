#include <WinSpecialFiles.h>

#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WinSpecialFiles_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WinSpecialFiles::*)()>(&WinSpecialFiles::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WinSpecialFiles::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _WinSpecialFiles_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WinSpecialFiles",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WinSpecialFiles_MethodInfo_
};

$Object* allocate$WinSpecialFiles($Class* clazz) {
	return $of($alloc(WinSpecialFiles));
}

void WinSpecialFiles::init$() {
}

void WinSpecialFiles::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
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
		$var($String, name, $nc($($nc(dir->get(i))->getPath()))->toLowerCase());
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
	$loadClass(WinSpecialFiles, name, initialize, &_WinSpecialFiles_ClassInfo_, allocate$WinSpecialFiles);
	return class$;
}

$Class* WinSpecialFiles::class$ = nullptr;