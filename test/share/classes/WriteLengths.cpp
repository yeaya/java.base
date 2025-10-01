#include <WriteLengths.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _WriteLengths_FieldInfo_[] = {
	{"log", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(WriteLengths, log)},
	{"failures", "I", nullptr, $STATIC, $staticField(WriteLengths, failures)},
	{"bos", "Ljava/io/ByteArrayOutputStream;", nullptr, $STATIC, $staticField(WriteLengths, bos)},
	{}
};

$MethodInfo _WriteLengths_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WriteLengths::*)()>(&WriteLengths::init$))},
	{"go", "(ILjava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$String*)>(&WriteLengths::go)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WriteLengths::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _WriteLengths_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WriteLengths",
	"java.lang.Object",
	nullptr,
	_WriteLengths_FieldInfo_,
	_WriteLengths_MethodInfo_
};

$Object* allocate$WriteLengths($Class* clazz) {
	return $of($alloc(WriteLengths));
}

$PrintStream* WriteLengths::log = nullptr;
int32_t WriteLengths::failures = 0;
$ByteArrayOutputStream* WriteLengths::bos = nullptr;

void WriteLengths::init$() {
}

void WriteLengths::go(int32_t len, $String* enc) {
	$init(WriteLengths);
	$nc(WriteLengths::bos)->reset();
	$var($OutputStreamWriter, osw, $new($OutputStreamWriter, static_cast<$OutputStream*>(WriteLengths::bos), enc));
	$var($chars, cs, $new($chars, len));
	osw->write(cs);
	osw->close();
	$var($bytes, ba, $nc(WriteLengths::bos)->toByteArray());
	if ($nc(ba)->length != len) {
		$nc(WriteLengths::log)->println($$str({"FAIL: Wrote "_s, $$str(len), ", got "_s, $$str(ba->length), "; enc = "_s, enc}));
		++WriteLengths::failures;
	}
}

void WriteLengths::main($StringArray* args) {
	$init(WriteLengths);
	for (int32_t i = 0; i < (1 << 15); i += 1024) {
		go(i, "us-ascii"_s);
	}
}

void clinit$WriteLengths($Class* class$) {
	$init($System);
	$assignStatic(WriteLengths::log, $System::err);
	WriteLengths::failures = 0;
	$assignStatic(WriteLengths::bos, $new($ByteArrayOutputStream, 1 << 15));
}

WriteLengths::WriteLengths() {
}

$Class* WriteLengths::load$($String* name, bool initialize) {
	$loadClass(WriteLengths, name, initialize, &_WriteLengths_ClassInfo_, clinit$WriteLengths, allocate$WriteLengths);
	return class$;
}

$Class* WriteLengths::class$ = nullptr;