#include <TIFFContentGuesser.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/net/URLConnection.h>
#include <jcpp.h>

#undef BIG_ENDIAN_MAGIC
#undef LITTLE_ENDIAN_MAGIC
#undef TIFF_MIME_TYPE

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLConnection = ::java::net::URLConnection;

$bytes* TIFFContentGuesser::LITTLE_ENDIAN_MAGIC = nullptr;
$bytes* TIFFContentGuesser::BIG_ENDIAN_MAGIC = nullptr;
$String* TIFFContentGuesser::TIFF_MIME_TYPE = nullptr;

void TIFFContentGuesser::init$() {
}

void TIFFContentGuesser::main($StringArray* args) {
	$init(TIFFContentGuesser);
	$useLocalObjectStack();
	int32_t failures = 0;
	$var($InputStream, stream, $new($ByteArrayInputStream, TIFFContentGuesser::LITTLE_ENDIAN_MAGIC));
	$var($String, contentType, $URLConnection::guessContentTypeFromStream(stream));
	if (contentType == nullptr || !contentType->equals(TIFFContentGuesser::TIFF_MIME_TYPE)) {
		++failures;
		$nc($System::err)->println("Test failed for little endian magic"_s);
	}
	$assign(stream, $new($ByteArrayInputStream, TIFFContentGuesser::BIG_ENDIAN_MAGIC));
	$assign(contentType, $URLConnection::guessContentTypeFromStream(stream));
	if (contentType == nullptr || !contentType->equals(TIFFContentGuesser::TIFF_MIME_TYPE)) {
		++failures;
		$nc($System::err)->println("Test failed for big endian magic"_s);
	}
	if (failures != 0) {
		$throwNew($RuntimeException, $$str({"Test failed with "_s, $$str(failures), " error(s)"_s}));
	}
}

void TIFFContentGuesser::clinit$($Class* clazz) {
	$assignStatic(TIFFContentGuesser::TIFF_MIME_TYPE, "image/tiff"_s);
	$assignStatic(TIFFContentGuesser::LITTLE_ENDIAN_MAGIC, $new($bytes, {
		(int8_t)73,
		(int8_t)73,
		(int8_t)42,
		(int8_t)0
	}));
	$assignStatic(TIFFContentGuesser::BIG_ENDIAN_MAGIC, $new($bytes, {
		(int8_t)77,
		(int8_t)77,
		(int8_t)0,
		(int8_t)42
	}));
}

TIFFContentGuesser::TIFFContentGuesser() {
}

$Class* TIFFContentGuesser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LITTLE_ENDIAN_MAGIC", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFContentGuesser, LITTLE_ENDIAN_MAGIC)},
		{"BIG_ENDIAN_MAGIC", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFContentGuesser, BIG_ENDIAN_MAGIC)},
		{"TIFF_MIME_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFContentGuesser, TIFF_MIME_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFContentGuesser, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TIFFContentGuesser, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TIFFContentGuesser",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFContentGuesser, name, initialize, &classInfo$$, TIFFContentGuesser::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFContentGuesser);
	});
	return class$;
}

$Class* TIFFContentGuesser::class$ = nullptr;