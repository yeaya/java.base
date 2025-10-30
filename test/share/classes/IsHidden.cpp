#include <IsHidden.h>

#include <java/io/File.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/DosFileAttributeView.h>
#include <java/nio/file/attribute/FileAttributeView.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $LinkOption = ::java::nio::file::LinkOption;
using $Path = ::java::nio::file::Path;
using $DosFileAttributeView = ::java::nio::file::attribute::DosFileAttributeView;
using $FileAttributeView = ::java::nio::file::attribute::FileAttributeView;

$FieldInfo _IsHidden_FieldInfo_[] = {
	{"dir", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(IsHidden, dir)},
	{}
};

$MethodInfo _IsHidden_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IsHidden::*)()>(&IsHidden::init$))},
	{"checkHidden", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&IsHidden::checkHidden))},
	{"ck", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,bool)>(&IsHidden::ck)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IsHidden::main)), "java.lang.Exception"},
	{"setHidden", "(Ljava/io/File;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*,bool)>(&IsHidden::setHidden)), "java.io.IOException"},
	{"testUnix", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IsHidden::testUnix)), "java.lang.Exception"},
	{"testWin32", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IsHidden::testWin32)), "java.lang.Exception"},
	{}
};

$ClassInfo _IsHidden_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IsHidden",
	"java.lang.Object",
	nullptr,
	_IsHidden_FieldInfo_,
	_IsHidden_MethodInfo_
};

$Object* allocate$IsHidden($Class* clazz) {
	return $of($alloc(IsHidden));
}

$String* IsHidden::dir = nullptr;

void IsHidden::init$() {
}

void IsHidden::ck($String* path, bool ans) {
	$init(IsHidden);
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, path));
	bool x = f->isHidden();
	if (x != ans) {
		$throwNew($Exception, $$str({path, ": expected "_s, $$str(ans), ", got "_s, $$str(x)}));
	}
	$nc($System::err)->println($$str({path, " ==> "_s, $$str(x)}));
}

void IsHidden::setHidden($File* f, bool value) {
	$init(IsHidden);
	$useLocalCurrentObjectStackCache();
	$load($DosFileAttributeView);
	$nc(($cast($DosFileAttributeView, $($Files::getFileAttributeView($($nc(f)->toPath()), $DosFileAttributeView::class$, $$new($LinkOptionArray, 0))))))->setHidden(value);
}

void IsHidden::checkHidden($File* f) {
	$init(IsHidden);
	if (!$nc(f)->isHidden()) {
		$throwNew($RuntimeException, $$str({f, " should be hidden"_s}));
	}
}

void IsHidden::testWin32() {
	$init(IsHidden);
	$useLocalCurrentObjectStackCache();
	$var($File, f, $new($File, IsHidden::dir, "test"_s));
	f->deleteOnExit();
	f->createNewFile();
	setHidden(f, true);
	{
		$var($Throwable, var$0, nullptr);
		try {
			ck($(f->getPath()), true);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			setHidden(f, false);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	ck(".foo"_s, false);
	ck("foo"_s, false);
	$var($File, pagefile, $new($File, "C:\\pagefile.sys"_s));
	$var($File, hiberfil, $new($File, "C:\\hiberfil.sys"_s));
	if (pagefile->exists()) {
		checkHidden(pagefile);
	}
	if (hiberfil->exists()) {
		checkHidden(hiberfil);
	}
}

void IsHidden::testUnix() {
	$init(IsHidden);
	$useLocalCurrentObjectStackCache();
	ck($$str({IsHidden::dir, "/IsHidden.java"_s}), false);
	ck($$str({IsHidden::dir, "/."_s}), true);
	ck("."_s, true);
	ck(".."_s, true);
	ck(".foo"_s, true);
	ck("foo"_s, false);
	ck(""_s, false);
}

void IsHidden::main($StringArray* args) {
	$init(IsHidden);
	$init($File);
	if ($File::separatorChar == u'\\') {
		testWin32();
	}
	if ($File::separatorChar == u'/') {
		testUnix();
	}
}

void clinit$IsHidden($Class* class$) {
	$assignStatic(IsHidden::dir, $System::getProperty("test.dir"_s, "."_s));
}

IsHidden::IsHidden() {
}

$Class* IsHidden::load$($String* name, bool initialize) {
	$loadClass(IsHidden, name, initialize, &_IsHidden_ClassInfo_, clinit$IsHidden, allocate$IsHidden);
	return class$;
}

$Class* IsHidden::class$ = nullptr;