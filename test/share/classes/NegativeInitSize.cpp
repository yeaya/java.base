#include <NegativeInitSize.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/CharArrayReader.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/InputStream.h>
#include <java/io/PushbackInputStream.h>
#include <java/io/PushbackReader.h>
#include <jcpp.h>

#undef CAR

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $CharArrayReader = ::java::io::CharArrayReader;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $InputStream = ::java::io::InputStream;
using $PushbackInputStream = ::java::io::PushbackInputStream;
using $PushbackReader = ::java::io::PushbackReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

void NegativeInitSize::init$() {
}

void NegativeInitSize::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream, -1));
	} catch ($IllegalArgumentException& e) {
	} catch ($Exception& e) {
		$nc($System::out)->println($(e->getMessage()));
		$throwNew($Exception, "ByteArrayOutputStream failed to detect negative init size"_s);
	}
	$var($CharArrayReader, CAR, $new($CharArrayReader, $("test"_s->toCharArray())));
	try {
		$var($PushbackReader, pbr, $new($PushbackReader, CAR, -1));
	} catch ($IllegalArgumentException& e) {
	} catch ($Exception& e) {
		$nc($System::out)->println($(e->getClass()->getName()));
		$throwNew($Exception, "PushbackReader failed to detect negative init size"_s);
	}
	try {
		$var($PushbackInputStream, pbis, $new($PushbackInputStream, nullptr, -1));
	} catch ($IllegalArgumentException& e) {
	} catch ($Exception& e) {
		$throwNew($Exception, "PushbackInputStream failed to detect negative init size"_s);
	}
	$var($ByteArrayOutputStream, goodbos, $new($ByteArrayOutputStream));
	try {
		$var($BufferedOutputStream, bos, $new($BufferedOutputStream, goodbos, -1));
	} catch ($IllegalArgumentException& e) {
	} catch ($Exception& e) {
		$throwNew($Exception, "BufferedOutputStream failed to detect negative init size"_s);
	}
	$var($bytes, ba, $new($bytes, {123}));
	$var($ByteArrayInputStream, goodbis, $new($ByteArrayInputStream, ba));
	try {
		$var($BufferedInputStream, bis, $new($BufferedInputStream, goodbis, -1));
	} catch ($IllegalArgumentException& e) {
	} catch ($Exception& e) {
		$throwNew($Exception, "BufferedInputStream failed to detect negative init size"_s);
	}
	try {
		$var($CharArrayWriter, caw, $new($CharArrayWriter, -1));
	} catch ($IllegalArgumentException& e) {
	} catch ($Exception& e) {
		$throwNew($Exception, "CharArrayWriter failed to detect negative init size"_s);
	}
}

NegativeInitSize::NegativeInitSize() {
}

$Class* NegativeInitSize::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NegativeInitSize, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NegativeInitSize, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NegativeInitSize",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NegativeInitSize, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NegativeInitSize);
	});
	return class$;
}

$Class* NegativeInitSize::class$ = nullptr;