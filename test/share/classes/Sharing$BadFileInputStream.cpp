#include <Sharing$BadFileInputStream.h>

#include <Sharing.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $Sharing = ::Sharing;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Sharing$BadFileInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, 0, $method(static_cast<void(Sharing$BadFileInputStream::*)($FileDescriptor*)>(&Sharing$BadFileInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Sharing$BadFileInputStream_InnerClassesInfo_[] = {
	{"Sharing$BadFileInputStream", "Sharing", "BadFileInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Sharing$BadFileInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"Sharing$BadFileInputStream",
	"java.io.FileInputStream",
	nullptr,
	nullptr,
	_Sharing$BadFileInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Sharing$BadFileInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Sharing"
};

$Object* allocate$Sharing$BadFileInputStream($Class* clazz) {
	return $of($alloc(Sharing$BadFileInputStream));
}

void Sharing$BadFileInputStream::init$($FileDescriptor* fd) {
	$FileInputStream::init$(fd);
}

void Sharing$BadFileInputStream::close() {
	$throwNew($IOException, "Bad close operation"_s);
}

Sharing$BadFileInputStream::Sharing$BadFileInputStream() {
}

$Class* Sharing$BadFileInputStream::load$($String* name, bool initialize) {
	$loadClass(Sharing$BadFileInputStream, name, initialize, &_Sharing$BadFileInputStream_ClassInfo_, allocate$Sharing$BadFileInputStream);
	return class$;
}

$Class* Sharing$BadFileInputStream::class$ = nullptr;