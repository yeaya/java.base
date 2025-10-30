#include <NewVSOld_th_TH.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/text/BreakIterator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DONE
#undef ENCODING
#undef THAI_LOCALE

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $BreakIterator = ::java::text::BreakIterator;
using $Locale = ::java::util::Locale;

$MethodInfo _NewVSOld_th_TH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NewVSOld_th_TH::*)()>(&NewVSOld_th_TH::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NewVSOld_th_TH::main)), "java.io.FileNotFoundException,java.io.UnsupportedEncodingException,java.io.IOException"},
	{}
};

$ClassInfo _NewVSOld_th_TH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NewVSOld_th_TH",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NewVSOld_th_TH_MethodInfo_
};

$Object* allocate$NewVSOld_th_TH($Class* clazz) {
	return $of($alloc(NewVSOld_th_TH));
}

void NewVSOld_th_TH::init$() {
}

void NewVSOld_th_TH::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, ENCODING, "UTF-8"_s);
	$var($Locale, THAI_LOCALE, $new($Locale, "th"_s, "TH"_s));
	$var($String, rawFileName, "test_th_TH.txt"_s);
	$var($String, oldFileName, "broken_th_TH.txt"_s);
	$var($StringBuilder, rawText, $new($StringBuilder));
	$var($StringBuilder, oldText, $new($StringBuilder));
	$var($StringBuilder, cookedText, $new($StringBuilder));
	$var($File, f, nullptr);
	$assign(f, $new($File, $($System::getProperty("test.src"_s, "."_s)), rawFileName));
	{
		$var($InputStreamReader, rawReader, $new($InputStreamReader, static_cast<$InputStream*>($$new($FileInputStream, f)), ENCODING));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int32_t c = 0;
					while ((c = rawReader->read()) != -1) {
						rawText->append((char16_t)c);
					}
				} catch ($Throwable& t$) {
					try {
						rawReader->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				rawReader->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$assign(f, $new($File, $($System::getProperty("test.src"_s, "."_s)), oldFileName));
	{
		$var($InputStreamReader, oldReader, $new($InputStreamReader, static_cast<$InputStream*>($$new($FileInputStream, f)), ENCODING));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					int32_t c = 0;
					while ((c = oldReader->read()) != -1) {
						oldText->append((char16_t)c);
					}
				} catch ($Throwable& t$) {
					try {
						oldReader->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				oldReader->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	$var($BreakIterator, breakIterator, $BreakIterator::getWordInstance(THAI_LOCALE));
	$nc(breakIterator)->setText($(rawText->toString()));
	int32_t start = breakIterator->first();
	for (int32_t end = breakIterator->next(); end != $BreakIterator::DONE; start = end, end = breakIterator->next()) {
		cookedText->append($(rawText->substring(start, end)));
		cookedText->append("\n"_s);
	}
	$var($String, cooked, cookedText->toString());
	$var($String, old, oldText->toString());
	if ($nc(cooked)->compareTo(old) != 0) {
		$throwNew($RuntimeException, "Text not broken the same as with the old BreakIterators"_s);
	}
}

NewVSOld_th_TH::NewVSOld_th_TH() {
}

$Class* NewVSOld_th_TH::load$($String* name, bool initialize) {
	$loadClass(NewVSOld_th_TH, name, initialize, &_NewVSOld_th_TH_ClassInfo_, allocate$NewVSOld_th_TH);
	return class$;
}

$Class* NewVSOld_th_TH::class$ = nullptr;