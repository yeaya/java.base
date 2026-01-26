#include <HexDumpReader.h>

#include <HexDumpReader$ByteArrayBuilder.h>
#include <java/io/BufferedReader.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $HexDumpReader$ByteArrayBuilder = ::HexDumpReader$ByteArrayBuilder;
using $BufferedReader = ::java::io::BufferedReader;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _HexDumpReader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HexDumpReader, init$, void)},
	{"getStreamFromHexDump", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(HexDumpReader, getStreamFromHexDump, $InputStream*, $String*)},
	{"getStreamFromHexDump", "(Ljava/io/File;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(HexDumpReader, getStreamFromHexDump, $InputStream*, $File*)},
	{}
};

$InnerClassInfo _HexDumpReader_InnerClassesInfo_[] = {
	{"HexDumpReader$ByteArrayBuilder", "HexDumpReader", "ByteArrayBuilder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _HexDumpReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HexDumpReader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HexDumpReader_MethodInfo_,
	nullptr,
	nullptr,
	_HexDumpReader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HexDumpReader$ByteArrayBuilder"
};

$Object* allocate$HexDumpReader($Class* clazz) {
	return $of($alloc(HexDumpReader));
}

void HexDumpReader::init$() {
}

$InputStream* HexDumpReader::getStreamFromHexDump($String* fileName) {
	$useLocalCurrentObjectStackCache();
	return getStreamFromHexDump($$new($File, $($System::getProperty("test.src"_s, "."_s)), fileName));
}

$InputStream* HexDumpReader::getStreamFromHexDump($File* hexFile) {
	$useLocalCurrentObjectStackCache();
	$var($HexDumpReader$ByteArrayBuilder, bab, $new($HexDumpReader$ByteArrayBuilder));
	int32_t lineNo = 0;
	try {
		$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, static_cast<$InputStream*>($$new($FileInputStream, hexFile)), "us-ascii"_s)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($String, line, nullptr);
					while (($assign(line, reader->readLine())) != nullptr) {
						++lineNo;
						$assign(line, $nc(line)->trim());
						if (line->length() == 0) {
							continue;
						}
						int32_t x = line->indexOf((int32_t)u'#');
						if (x == 0) {
							continue;
						}
						if (x > 0) {
							$assign(line, $(line->substring(0, x))->trim());
						}
						int32_t len = line->length();
						for (int32_t i = 0; i < len; i += 2) {
							bab->put((int8_t)$Integer::parseInt(line, i, i + 2, 16));
						}
					}
				} catch ($Throwable& t$) {
					try {
						reader->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				reader->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({$($nc(hexFile)->getName()), ":error:"_s, $$str(lineNo), ": "_s, e}), e);
	}
	return $new($ByteArrayInputStream, $(bab->toArray()));
}

HexDumpReader::HexDumpReader() {
}

$Class* HexDumpReader::load$($String* name, bool initialize) {
	$loadClass(HexDumpReader, name, initialize, &_HexDumpReader_ClassInfo_, allocate$HexDumpReader);
	return class$;
}

$Class* HexDumpReader::class$ = nullptr;