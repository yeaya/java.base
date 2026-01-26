#include <SJIS.h>

#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

#undef SJIS

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _SJIS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SJIS, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SJIS, main, void, $StringArray*), "java.lang.Exception"},
	{"rm", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SJIS, rm, void, $File*)},
	{"touch", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SJIS, touch, void, $File*), "java.io.IOException"},
	{}
};

$ClassInfo _SJIS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SJIS",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SJIS_MethodInfo_
};

$Object* allocate$SJIS($Class* clazz) {
	return $of($alloc(SJIS));
}

void SJIS::init$() {
}

void SJIS::rm($File* f) {
	if (!$nc(f)->delete$()) {
		$throwNew($RuntimeException, $$str({"Can\'t delete "_s, f}));
	}
}

void SJIS::touch($File* f) {
	$var($OutputStream, o, $new($FileOutputStream, f));
	o->close();
}

void SJIS::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	if ($File::separatorChar != u'\\') {
		return;
	}
	$var($String, enc, $System::getProperty("file.encoding"_s));
	if ((enc == nullptr) || !$nc(enc)->equals("SJIS"_s)) {
		return;
	}
	$var($File, f, $new($File, u"ソ"_s));
	if (f->exists()) {
		rm(f);
	}
	$nc($System::err)->println($(f->getCanonicalPath()));
	touch(f);
	$nc($System::err)->println($(f->getCanonicalPath()));
	rm(f);
	if (!f->mkdir()) {
		$throwNew($Exception, $$str({"Can\'t create directory "_s, f}));
	}
	$var($File, f2, $new($File, f, u"ソ"_s));
	$nc($System::err)->println($(f2->getCanonicalPath()));
	touch(f2);
	$var($String, cfn, f2->getCanonicalPath());
	if (!($$new($File, cfn))->exists()) {
		$throwNew($Exception, $$str({cfn, " not found"_s}));
	}
	$var($File, d, $new($File, "."_s));
	$var($StringArray, fs, d->list());
	if (fs == nullptr) {
		$nc($System::err)->println("No files listed"_s);
	}
	for (int32_t i = 0; i < $nc(fs)->length; ++i) {
		$nc($System::err)->println(fs->get(i));
	}
}

SJIS::SJIS() {
}

$Class* SJIS::load$($String* name, bool initialize) {
	$loadClass(SJIS, name, initialize, &_SJIS_ClassInfo_, allocate$SJIS);
	return class$;
}

$Class* SJIS::class$ = nullptr;