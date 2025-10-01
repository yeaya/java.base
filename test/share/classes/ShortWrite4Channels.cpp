#include <ShortWrite4Channels.h>

#include <ShortWrite4Channels$1.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ShortWrite4Channels$1 = ::ShortWrite4Channels$1;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Channels = ::java::nio::channels::Channels;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $Random = ::java::util::Random;

$FieldInfo _ShortWrite4Channels_FieldInfo_[] = {
	{"rand", "Ljava/util/Random;", nullptr, $STATIC, $staticField(ShortWrite4Channels, rand)},
	{"bytesWritten", "I", nullptr, $STATIC, $staticField(ShortWrite4Channels, bytesWritten)},
	{}
};

$MethodInfo _ShortWrite4Channels_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShortWrite4Channels::*)()>(&ShortWrite4Channels::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ShortWrite4Channels::main)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ShortWrite4Channels_InnerClassesInfo_[] = {
	{"ShortWrite4Channels$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShortWrite4Channels_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ShortWrite4Channels",
	"java.lang.Object",
	nullptr,
	_ShortWrite4Channels_FieldInfo_,
	_ShortWrite4Channels_MethodInfo_,
	nullptr,
	nullptr,
	_ShortWrite4Channels_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ShortWrite4Channels$1"
};

$Object* allocate$ShortWrite4Channels($Class* clazz) {
	return $of($alloc(ShortWrite4Channels));
}

$Random* ShortWrite4Channels::rand = nullptr;
int32_t ShortWrite4Channels::bytesWritten = 0;

void ShortWrite4Channels::init$() {
}

void ShortWrite4Channels::main($StringArray* args) {
	$init(ShortWrite4Channels);
	$var($WritableByteChannel, wbc, $new($ShortWrite4Channels$1));
	$var($OutputStream, out, $Channels::newOutputStream(wbc));
	int32_t expected = 0;
	$var($bytes, buf, $new($bytes, 100));
	for (int32_t i = 0; i < buf->length; ++i) {
		int32_t len = buf->length - i;
		$nc(out)->write(buf, i, len);
		expected += len;
	}
	$init($System);
	$nc($System::out)->format("Bytes written: %d, expected: %d\n"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(ShortWrite4Channels::bytesWritten))),
		$($of($Integer::valueOf(expected)))
	}));
	if (ShortWrite4Channels::bytesWritten != expected) {
		$throwNew($RuntimeException, "incorrect number of bytes written"_s);
	}
}

void clinit$ShortWrite4Channels($Class* class$) {
	$assignStatic(ShortWrite4Channels::rand, $new($Random));
	ShortWrite4Channels::bytesWritten = 0;
}

ShortWrite4Channels::ShortWrite4Channels() {
}

$Class* ShortWrite4Channels::load$($String* name, bool initialize) {
	$loadClass(ShortWrite4Channels, name, initialize, &_ShortWrite4Channels_ClassInfo_, clinit$ShortWrite4Channels, allocate$ShortWrite4Channels);
	return class$;
}

$Class* ShortWrite4Channels::class$ = nullptr;