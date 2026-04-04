#include <MacPathTest.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/lang/CharSequence.h>
#include <java/text/Normalizer$Form.h>
#include <java/text/Normalizer.h>
#include <jcpp.h>

#undef NFD

using $FileArray = $Array<::java::io::File>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Normalizer = ::java::text::Normalizer;
using $Normalizer$Form = ::java::text::Normalizer$Form;

void MacPathTest::init$() {
}

void MacPathTest::main($StringArray* args) {
	$var($String, osname, $System::getProperty("os.name"_s));
	bool var$0 = !$nc(osname)->contains("OS X"_s);
	if (var$0 && !osname->contains("Darwin"_s)) {
		return;
	}
	test("TestDir_apple"_s, "dir_macosx"_s, "file_macosx"_s);
	test(u"TestDir_トイヤニナル/"_s, u"dir_イチゴのケーキ"_s, u"file_イチゴのケーキ"_s);
	test(u"TestDir_Körperlichäß/"_s, u"dir_Enttäuschung"_s, u"file_Enttäuschung"_s);
	test(u"TestDir_Körperlichäß/"_s, u"dir_EnttÄuschung"_s, u"file_EnttÄuschung"_s);
	test(u"TestDir_가각갂"_s, u"dir_갠갡갢"_s, u"file_곀곁곂"_s);
}

void MacPathTest::removeAll($File* file) {
	$useLocalObjectStack();
	if ($nc(file)->isDirectory()) {
		$var($FileArray, arr$, file->listFiles());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, f, arr$->get(i$));
			{
				removeAll(f);
			}
		}
	}
	file->delete$();
}

bool MacPathTest::equal(Object$* x, Object$* y) {
	return x == nullptr ? y == nullptr : $of(x)->equals(y);
}

bool MacPathTest::match($File* target, $File* src) {
	$useLocalObjectStack();
	if ($nc(target)->equals(src)) {
		$var($String, fname, target->toString());
		$nc($System::out)->printf("    ->matched   : [%s], length=%d%n"_s, $$new($ObjectArray, {
			fname,
			$($Integer::valueOf($nc(fname)->length()))
		}));
		return true;
	}
	return false;
}

void MacPathTest::open_read($String* what, $File* file) {
	$useLocalObjectStack();
	{
		$var($FileInputStream, fis, $new($FileInputStream, file));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($bytes, bytes, $new($bytes, 10));
				fis->read(bytes);
				$nc($System::out)->printf("    %s:%s%n"_s, $$new($ObjectArray, {
					what,
					$$new($String, bytes)
				}));
			} catch ($Throwable& t$) {
				try {
					fis->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			fis->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void MacPathTest::test($String* testdir, $String* dname, $String* fname_nfc) {
	$useLocalObjectStack();
	$var($String, fname, nullptr);
	$init($Normalizer$Form);
	$var($String, dname_nfd, $Normalizer::normalize(dname, $Normalizer$Form::NFD));
	$var($String, fname_nfd, $Normalizer::normalize(fname_nfc, $Normalizer$Form::NFD));
	$nc($System::out)->printf("%n%n--------Testing...----------%n"_s, $$new($ObjectArray, 0));
	$var($File, base, $new($File, testdir));
	$var($File, dir, $new($File, base, dname));
	$var($File, dir_nfd, $new($File, base, dname_nfd));
	$var($File, file_nfc, $new($File, base, fname_nfc));
	$var($File, file_nfd, $new($File, base, fname_nfd));
	$System::out->printf("base           :[%s][len=%d]%n"_s, $$new($ObjectArray, {
		testdir,
		$($Integer::valueOf($nc(testdir)->length()))
	}));
	$System::out->printf("dir            :[%s][len=%d]%n"_s, $$new($ObjectArray, {
		dname,
		$($Integer::valueOf($nc(dname)->length()))
	}));
	$System::out->printf("fname_nfc      :[%s][len=%d]%n"_s, $$new($ObjectArray, {
		fname_nfc,
		$($Integer::valueOf($nc(fname_nfc)->length()))
	}));
	$System::out->printf("fname_nfd      :[%s][len=%d]%n"_s, $$new($ObjectArray, {
		fname_nfd,
		$($Integer::valueOf($nc(fname_nfd)->length()))
	}));
	$assign(fname, file_nfc->toString());
	$System::out->printf("file_nfc ->[%s][len=%d]%n"_s, $$new($ObjectArray, {
		fname,
		$($Integer::valueOf($nc(fname)->length()))
	}));
	$assign(fname, file_nfd->toString());
	$System::out->printf("file_nfd ->[%s][len=%d]%n%n"_s, $$new($ObjectArray, {
		fname,
		$($Integer::valueOf($nc(fname)->length()))
	}));
	removeAll(base);
	dir->mkdirs();
	$assign(fname, dir->toString());
	$System::out->printf(":Directory [%s][len=%d] created%n"_s, $$new($ObjectArray, {
		fname,
		$($Integer::valueOf($nc(fname)->length()))
	}));
	bool var$0 = !dir->isDirectory();
	if (var$0 || !dir_nfd->isDirectory()) {
		$throwNew($RuntimeException, "File.isDirectory() failed"_s);
	}
	{
		$var($FileOutputStream, fos, $new($FileOutputStream, file_nfd));
		$var($Throwable, var$1, nullptr);
		try {
			try {
				fos->write(u'n');
				fos->write(u'f');
				fos->write(u'd');
			} catch ($Throwable& t$) {
				try {
					fos->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			fos->close();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	open_read("read in with nfc (from nfd)"_s, file_nfc);
	file_nfd->delete$();
	{
		$var($FileOutputStream, fos, $new($FileOutputStream, file_nfc));
		$var($Throwable, var$3, nullptr);
		try {
			try {
				fos->write(u'n');
				fos->write(u'f');
				fos->write(u'c');
			} catch ($Throwable& t$) {
				try {
					fos->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			fos->close();
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
	open_read("read in with nfd      (from nfc)"_s, file_nfd);
	bool found_dir = false;
	bool found_file_nfc = false;
	bool found_file_nfd = false;
	{
		$var($FileArray, arr$, base->listFiles());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($File, f, arr$->get(i$));
			{
				$assign(fname, $nc(f)->toString());
				$System::out->printf("Found   : [%s], length=%d%n"_s, $$new($ObjectArray, {
					fname,
					$($Integer::valueOf($nc(fname)->length()))
				}));
				found_dir |= match(dir, f);
				found_file_nfc |= match(file_nfc, f);
				found_file_nfd |= match(file_nfd, f);
			}
		}
	}
	if (!found_dir || !found_file_nfc || !found_file_nfc) {
		$throwNew($RuntimeException, "File.equal() failed"_s);
	}
	removeAll(base);
}

MacPathTest::MacPathTest() {
}

$Class* MacPathTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MacPathTest, init$, void)},
		{"equal", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MacPathTest, equal, bool, Object$*, Object$*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MacPathTest, main, void, $StringArray*), "java.lang.Throwable"},
		{"match", "(Ljava/io/File;Ljava/io/File;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MacPathTest, match, bool, $File*, $File*)},
		{"open_read", "(Ljava/lang/String;Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MacPathTest, open_read, void, $String*, $File*), "java.lang.Throwable"},
		{"removeAll", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MacPathTest, removeAll, void, $File*), "java.lang.Throwable"},
		{"test", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MacPathTest, test, void, $String*, $String*, $String*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MacPathTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MacPathTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MacPathTest);
	});
	return class$;
}

$Class* MacPathTest::class$ = nullptr;