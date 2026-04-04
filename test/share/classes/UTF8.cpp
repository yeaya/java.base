#include <UTF8.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef UTF8

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

$String* UTF8::test = nullptr;

void UTF8::init$() {
}

void UTF8::main($StringArray* args) {
	$init(UTF8);
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	$var($Writer, out, $new($OutputStreamWriter, bo, "UTF8"_s));
	out->write(UTF8::test);
	out->close();
	$var($Reader, in, $new($InputStreamReader, $$new($ByteArrayInputStream, $(bo->toByteArray())), "UTF8"_s));
	$var($StringBuffer, sb, $new($StringBuffer));
	$var($chars, buf, $new($chars, 1000));
	int32_t n = 0;
	while ((n = in->read(buf, 0, buf->length)) >= 0) {
		sb->append(buf, 0, n);
		$nc($System::err)->println(n);
	}
	if (!$(sb->toString())->equals(UTF8::test)) {
		$nc($System::err)->println($$str({"In: ["_s, UTF8::test, "]"_s}));
		$System::err->println($$str({"Out: ["_s, $(sb->toString()), "]"_s}));
		$throwNew($RuntimeException, "Output does not match input"_s);
	}
}

void UTF8::clinit$($Class* clazz) {
	$assignStatic(UTF8::test, "This is a simple\ntest of the UTF8\r\nbyte-to-char and char-to-byte\nconverters."_s);
}

UTF8::UTF8() {
}

$Class* UTF8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"test", "Ljava/lang/String;", nullptr, $STATIC, $staticField(UTF8, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UTF8, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UTF8, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UTF8",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UTF8, name, initialize, &classInfo$$, UTF8::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UTF8);
	});
	return class$;
}

$Class* UTF8::class$ = nullptr;