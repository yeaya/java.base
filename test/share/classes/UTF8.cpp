#include <UTF8.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef UTF8

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;

$FieldInfo _UTF8_FieldInfo_[] = {
	{"test", "Ljava/lang/String;", nullptr, $STATIC, $staticField(UTF8, test)},
	{}
};

$MethodInfo _UTF8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UTF8::*)()>(&UTF8::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UTF8::main)), "java.io.IOException"},
	{}
};

$ClassInfo _UTF8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UTF8",
	"java.lang.Object",
	nullptr,
	_UTF8_FieldInfo_,
	_UTF8_MethodInfo_
};

$Object* allocate$UTF8($Class* clazz) {
	return $of($alloc(UTF8));
}

$String* UTF8::test = nullptr;

void UTF8::init$() {
}

void UTF8::main($StringArray* args) {
	$init(UTF8);
	$var($ByteArrayOutputStream, bo, $new($ByteArrayOutputStream));
	$var($Writer, out, $new($OutputStreamWriter, static_cast<$OutputStream*>(bo), "UTF8"_s));
	out->write(UTF8::test);
	out->close();
	$var($Reader, in, $new($InputStreamReader, static_cast<$InputStream*>($$new($ByteArrayInputStream, $(bo->toByteArray()))), "UTF8"_s));
	$var($StringBuffer, sb, $new($StringBuffer));
	$var($chars, buf, $new($chars, 1000));
	int32_t n = 0;
	while ((n = in->read(buf, 0, buf->length)) >= 0) {
		sb->append(buf, 0, n);
		$init($System);
		$nc($System::err)->println(n);
	}
	if (!$nc($(sb->toString()))->equals(UTF8::test)) {
		$init($System);
		$nc($System::err)->println($$str({"In: ["_s, UTF8::test, "]"_s}));
		$nc($System::err)->println($$str({"Out: ["_s, $(sb->toString()), "]"_s}));
		$throwNew($RuntimeException, "Output does not match input"_s);
	}
}

void clinit$UTF8($Class* class$) {
	$assignStatic(UTF8::test, "This is a simple\ntest of the UTF8\r\nbyte-to-char and char-to-byte\nconverters."_s);
}

UTF8::UTF8() {
}

$Class* UTF8::load$($String* name, bool initialize) {
	$loadClass(UTF8, name, initialize, &_UTF8_ClassInfo_, clinit$UTF8, allocate$UTF8);
	return class$;
}

$Class* UTF8::class$ = nullptr;