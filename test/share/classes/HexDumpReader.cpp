#include <HexDumpReader.h>
#include <HexDumpReader$ByteArrayBuilder.h>
#include <java/io/BufferedReader.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <jcpp.h>

using $HexDumpReader$ByteArrayBuilder = ::HexDumpReader$ByteArrayBuilder;
using $BufferedReader = ::java::io::BufferedReader;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void HexDumpReader::init$() {
}

$InputStream* HexDumpReader::getStreamFromHexDump($String* fileName) {
	$useLocalObjectStack();
	return getStreamFromHexDump($$new($File, $($System::getProperty("test.src"_s, "."_s)), fileName));
}

$InputStream* HexDumpReader::getStreamFromHexDump($File* hexFile) {
	$useLocalObjectStack();
	$var($HexDumpReader$ByteArrayBuilder, bab, $new($HexDumpReader$ByteArrayBuilder));
	int32_t lineNo = 0;
	try {
		$var($BufferedReader, reader, $new($BufferedReader, $$new($InputStreamReader, $$new($FileInputStream, hexFile), "us-ascii"_s)));
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
					int32_t x = line->indexOf(u'#');
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
	} catch ($Exception& e) {
		$throwNew($RuntimeException, $$str({$($nc(hexFile)->getName()), ":error:"_s, $$str(lineNo), ": "_s, e}), e);
	}
	return $new($ByteArrayInputStream, $(bab->toArray()));
}

HexDumpReader::HexDumpReader() {
}

$Class* HexDumpReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HexDumpReader, init$, void)},
		{"getStreamFromHexDump", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(HexDumpReader, getStreamFromHexDump, $InputStream*, $String*)},
		{"getStreamFromHexDump", "(Ljava/io/File;)Ljava/io/InputStream;", nullptr, $PUBLIC | $STATIC, $staticMethod(HexDumpReader, getStreamFromHexDump, $InputStream*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HexDumpReader$ByteArrayBuilder", "HexDumpReader", "ByteArrayBuilder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HexDumpReader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"HexDumpReader$ByteArrayBuilder"
	};
	$loadClass(HexDumpReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HexDumpReader);
	});
	return class$;
}

$Class* HexDumpReader::class$ = nullptr;