#include <ReadOffset.h>

#include <ReadOffset$1.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <jcpp.h>

using $ReadOffset$1 = ::ReadOffset$1;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channels = ::java::nio::channels::Channels;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

$MethodInfo _ReadOffset_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadOffset::*)()>(&ReadOffset::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadOffset::main)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ReadOffset_InnerClassesInfo_[] = {
	{"ReadOffset$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReadOffset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadOffset",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadOffset_MethodInfo_,
	nullptr,
	nullptr,
	_ReadOffset_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReadOffset$1"
};

$Object* allocate$ReadOffset($Class* clazz) {
	return $of($alloc(ReadOffset));
}

void ReadOffset::init$() {
}

void ReadOffset::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ReadableByteChannel, rbc, $new($ReadOffset$1));
	$var($InputStream, in, $Channels::newInputStream(rbc));
	$var($bytes, b, $new($bytes, 3));
	$nc(in)->read(b, 0, 1);
	in->read(b, 2, 1);
}

ReadOffset::ReadOffset() {
}

$Class* ReadOffset::load$($String* name, bool initialize) {
	$loadClass(ReadOffset, name, initialize, &_ReadOffset_ClassInfo_, allocate$ReadOffset);
	return class$;
}

$Class* ReadOffset::class$ = nullptr;