#include <NegativeAvailable.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <jcpp.h>

#undef NEGATIVE_SKIP
#undef SIZE
#undef SKIP

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Charset = ::java::nio::charset::Charset;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;

$MethodInfo _NegativeAvailable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NegativeAvailable::*)()>(&NegativeAvailable::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NegativeAvailable::main)), "java.io.IOException"},
	{"skipBytes", "(Ljava/io/FileInputStream;IJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)($FileInputStream*,int32_t,int64_t)>(&NegativeAvailable::skipBytes)), "java.io.IOException"},
	{}
};

$ClassInfo _NegativeAvailable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NegativeAvailable",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NegativeAvailable_MethodInfo_
};

$Object* allocate$NegativeAvailable($Class* clazz) {
	return $of($alloc(NegativeAvailable));
}

void NegativeAvailable::init$() {
}

void NegativeAvailable::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t SIZE = 10;
	int32_t SKIP = 5;
	int32_t NEGATIVE_SKIP = -5;
	$var($Path, tmp, $Files::createTempFile(nullptr, nullptr, $$new($FileAttributeArray, 0)));
	{
		$var($BufferedWriter, writer, $Files::newBufferedWriter(tmp, $($Charset::defaultCharset()), $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					for (int32_t i = 0; i < SIZE; ++i) {
						$nc(writer)->write((int32_t)u'1');
					}
				} catch ($Throwable& t$) {
					if (writer != nullptr) {
						try {
							writer->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (writer != nullptr) {
					writer->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($File, tempFile, $nc(tmp)->toFile());
	{
		$var($FileInputStream, fis, $new($FileInputStream, tempFile));
		{
			$var($Throwable, var$2, nullptr);
			try {
				try {
					if ($nc(tempFile)->length() != SIZE) {
						$throwNew($RuntimeException, $$str({"unexpected file size = "_s, $$str(tempFile->length())}));
					}
					int64_t space = skipBytes(fis, SKIP, SIZE);
					space = skipBytes(fis, NEGATIVE_SKIP, space);
					space = skipBytes(fis, SKIP, space);
					space = skipBytes(fis, SKIP, space);
					space = skipBytes(fis, SKIP, space);
					space = skipBytes(fis, NEGATIVE_SKIP, space);
					space = skipBytes(fis, NEGATIVE_SKIP, space);
				} catch ($Throwable& t$) {
					try {
						fis->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$2, var$3);
			} /*finally*/ {
				fis->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	$Files::deleteIfExists(tmp);
}

int64_t NegativeAvailable::skipBytes($FileInputStream* fis, int32_t toSkip, int64_t space) {
	$useLocalCurrentObjectStackCache();
	int64_t skip = $nc(fis)->skip(toSkip);
	if (skip != toSkip) {
		$throwNew($RuntimeException, $$str({"skip() returns "_s, $$str(skip), " but expected "_s, $$str(toSkip)}));
	}
	int64_t newSpace = space - toSkip;
	int64_t remaining = newSpace > 0 ? newSpace : (int64_t)0;
	int32_t avail = fis->available();
	if (avail != remaining) {
		$throwNew($RuntimeException, $$str({"available() returns "_s, $$str(avail), " but expected "_s, $$str(remaining)}));
	}
	$nc($System::out)->println($$str({"Skipped "_s, $$str(skip), " bytes  available() returns "_s, $$str(avail)}));
	return newSpace;
}

NegativeAvailable::NegativeAvailable() {
}

$Class* NegativeAvailable::load$($String* name, bool initialize) {
	$loadClass(NegativeAvailable, name, initialize, &_NegativeAvailable_ClassInfo_, allocate$NegativeAvailable);
	return class$;
}

$Class* NegativeAvailable::class$ = nullptr;