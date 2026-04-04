#include <Bug6856817.h>
#include <java/io/File.h>
#include <java/io/FileOutputStream.h>
#include <java/io/FileReader.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

#undef BUF_SIZE

using $File = ::java::io::File;
using $FileOutputStream = ::java::io::FileOutputStream;
using $FileReader = ::java::io::FileReader;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;

$String* Bug6856817::str = nullptr;

void Bug6856817::init$() {
}

void Bug6856817::main($StringArray* args) {
	$init(Bug6856817);
	$useLocalObjectStack();
	$var($CharBuffer, charBuffer, $CharBuffer::allocate(Bug6856817::BUF_SIZE));
	$var($File, file, $new($File, "temp.txt"_s));
	file->deleteOnExit();
	$nc(charBuffer)->put(Bug6856817::str);
	charBuffer->flip();
	checkFileContent(charBuffer, file, Bug6856817::str);
	charBuffer->position(10);
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(10)));
	charBuffer->position(charBuffer->limit());
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(charBuffer->limit())));
	$var($chars, arr, $new($chars, Bug6856817::BUF_SIZE));
	$assign(charBuffer, $CharBuffer::wrap(arr));
	$nc(charBuffer)->put(Bug6856817::str);
	charBuffer->flip();
	checkFileContent(charBuffer, file, Bug6856817::str);
	charBuffer->position(10);
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(10)));
	charBuffer->position(charBuffer->limit());
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(charBuffer->limit())));
	$var($chars, secArr, $new($chars, Bug6856817::BUF_SIZE));
	$assign(charBuffer, $CharBuffer::wrap(secArr));
	$nc(charBuffer)->put(Bug6856817::str);
	charBuffer->position(5);
	charBuffer->limit(Bug6856817::str->length() - 7);
	$assign(charBuffer, charBuffer->slice());
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(5, (Bug6856817::str->length() - 7))));
	$nc(charBuffer)->position(10);
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(15, (Bug6856817::str->length() - 7))));
	charBuffer->position(charBuffer->limit());
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(charBuffer->limit())));
	$assign(charBuffer, $$nc($ByteBuffer::allocate(Bug6856817::BUF_SIZE))->asCharBuffer());
	$nc(charBuffer)->put(Bug6856817::str);
	charBuffer->flip();
	checkFileContent(charBuffer, file, Bug6856817::str);
	charBuffer->position(10);
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(10)));
	charBuffer->position(charBuffer->limit());
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(charBuffer->limit())));
	$assign(charBuffer, $$nc($ByteBuffer::allocateDirect(1024))->asCharBuffer());
	$nc(charBuffer)->put(Bug6856817::str);
	charBuffer->flip();
	checkFileContent(charBuffer, file, Bug6856817::str);
	charBuffer->position(10);
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(10)));
	charBuffer->position(charBuffer->limit());
	checkFileContent(charBuffer, file, $(Bug6856817::str->substring(charBuffer->limit())));
}

void Bug6856817::checkFileContent($CharBuffer* charBuffer, $File* file, $String* expectedValue) {
	$init(Bug6856817);
	$useLocalObjectStack();
	$var($OutputStreamWriter, writer, nullptr);
	$var($FileReader, reader, nullptr);
	int32_t position = 0;
	int32_t limit = 0;
	position = $nc(charBuffer)->position();
	limit = charBuffer->limit();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$var($OutputStream, outputStream, $new($FileOutputStream, file));
			$assign(writer, $new($OutputStreamWriter, outputStream));
			writer->append(charBuffer);
			writer->close();
			if (!isEqual(position, charBuffer->position())) {
				$nc($System::out)->println(": failed"_s);
				$throwNew($RuntimeException, $$str({"buffer position before write: "_s, $$str(position), " and position after write: "_s, $$str(charBuffer->position())}));
			}
			if (!isEqual(limit, charBuffer->limit())) {
				$nc($System::out)->println(": failed"_s);
				$throwNew($RuntimeException, $$str({"buffer limit before write: "_s, $$str(limit), " and limit after write: "_s, $$str(charBuffer->limit())}));
			}
			$assign(reader, $new($FileReader, file));
			$var($chars, arr, $new($chars, Bug6856817::BUF_SIZE));
			int32_t byteRead = reader->read(arr);
			if (byteRead != -1) {
				$var($String, stringRead, $new($String, arr, 0, byteRead));
				if ($nc(expectedValue)->equals(stringRead)) {
					$nc($System::out)->println(": passed"_s);
				} else {
					$nc($System::out)->println(": failed"_s);
					$throwNew($RuntimeException, $$str({"expected :"_s, expectedValue, " and got:"_s, stringRead}));
				}
			}
		} catch ($IOException& ex) {
			ex->printStackTrace();
			$throwNew($RuntimeException, ex);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		try {
			if (writer != nullptr) {
				writer->close();
			}
			if (reader != nullptr) {
				reader->close();
			}
		} catch ($IOException& ex) {
			$throwNew($RuntimeException, ex);
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

bool Bug6856817::isEqual(int32_t first, int32_t second) {
	$init(Bug6856817);
	return (first == second);
}

Bug6856817::Bug6856817() {
}

void Bug6856817::clinit$($Class* clazz) {
	$assignStatic(Bug6856817::str, "This is just a test string that i am using it to test the CharBuffer.append(CharSequence csq)  for little bit performance improvement."_s);
}

$Class* Bug6856817::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bug6856817, str)},
		{"BUF_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Bug6856817, BUF_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bug6856817, init$, void)},
		{"checkFileContent", "(Ljava/nio/CharBuffer;Ljava/io/File;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug6856817, checkFileContent, void, $CharBuffer*, $File*, $String*)},
		{"isEqual", "(II)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Bug6856817, isEqual, bool, int32_t, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bug6856817, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bug6856817",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Bug6856817, name, initialize, &classInfo$$, Bug6856817::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Bug6856817);
	});
	return class$;
}

$Class* Bug6856817::class$ = nullptr;