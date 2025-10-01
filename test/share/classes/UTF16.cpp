#include <UTF16.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _UTF16_FieldInfo_[] = {
	{"array", "[B", nullptr, $PRIVATE | $STATIC, $staticField(UTF16, array)},
	{}
};

$MethodInfo _UTF16_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UTF16::*)()>(&UTF16::init$))},
	{"go", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&UTF16::go)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UTF16::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _UTF16_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UTF16",
	"java.lang.Object",
	nullptr,
	_UTF16_FieldInfo_,
	_UTF16_MethodInfo_
};

$Object* allocate$UTF16($Class* clazz) {
	return $of($alloc(UTF16));
}

$bytes* UTF16::array = nullptr;

void UTF16::init$() {
}

void UTF16::go($String* cs) {
	$init(UTF16);
	$var($InputStream, is, $new($ByteArrayInputStream, UTF16::array));
	$var($Reader, r, $new($InputStreamReader, is, "UTF-16LE"_s));
	r->read();
}

void UTF16::main($StringArray* args) {
	$init(UTF16);
	go("UTF-16"_s);
	go("UTF-16LE"_s);
	go("UTF-16BE"_s);
}

void clinit$UTF16($Class* class$) {
	$assignStatic(UTF16::array, $new($bytes, 20000));
}

UTF16::UTF16() {
}

$Class* UTF16::load$($String* name, bool initialize) {
	$loadClass(UTF16, name, initialize, &_UTF16_ClassInfo_, clinit$UTF16, allocate$UTF16);
	return class$;
}

$Class* UTF16::class$ = nullptr;