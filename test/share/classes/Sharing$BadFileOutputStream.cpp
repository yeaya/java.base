#include <Sharing$BadFileOutputStream.h>

#include <Sharing.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Sharing = ::Sharing;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Sharing$BadFileOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(static_cast<void(Sharing$BadFileOutputStream::*)($FileDescriptor*)>(&Sharing$BadFileOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Sharing$BadFileOutputStream_InnerClassesInfo_[] = {
	{"Sharing$BadFileOutputStream", "Sharing", "BadFileOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Sharing$BadFileOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"Sharing$BadFileOutputStream",
	"java.io.FileOutputStream",
	nullptr,
	nullptr,
	_Sharing$BadFileOutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Sharing$BadFileOutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sharing"
};

$Object* allocate$Sharing$BadFileOutputStream($Class* clazz) {
	return $of($alloc(Sharing$BadFileOutputStream));
}

void Sharing$BadFileOutputStream::init$($FileDescriptor* fd) {
	$FileOutputStream::init$(fd);
}

void Sharing$BadFileOutputStream::close() {
	$throwNew($IOException, "Bad close operation"_s);
}

Sharing$BadFileOutputStream::Sharing$BadFileOutputStream() {
}

$Class* Sharing$BadFileOutputStream::load$($String* name, bool initialize) {
	$loadClass(Sharing$BadFileOutputStream, name, initialize, &_Sharing$BadFileOutputStream_ClassInfo_, allocate$Sharing$BadFileOutputStream);
	return class$;
}

$Class* Sharing$BadFileOutputStream::class$ = nullptr;