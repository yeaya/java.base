#include <NulFile$2.h>

#include <NulFile.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NulFile$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NulFile$2, init$, void)},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC, $virtualMethod(NulFile$2, accept, bool, $File*)},
	{}
};

$EnclosingMethodInfo _NulFile$2_EnclosingMethodInfo_ = {
	"NulFile",
	"test",
	"(Ljava/io/File;Z)V"
};

$InnerClassInfo _NulFile$2_InnerClassesInfo_[] = {
	{"NulFile$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NulFile$2_ClassInfo_ = {
	$ACC_SUPER,
	"NulFile$2",
	"java.lang.Object",
	"java.io.FileFilter",
	nullptr,
	_NulFile$2_MethodInfo_,
	nullptr,
	&_NulFile$2_EnclosingMethodInfo_,
	_NulFile$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NulFile"
};

$Object* allocate$NulFile$2($Class* clazz) {
	return $of($alloc(NulFile$2));
}

void NulFile$2::init$() {
}

bool NulFile$2::accept($File* file) {
	return false;
}

NulFile$2::NulFile$2() {
}

$Class* NulFile$2::load$($String* name, bool initialize) {
	$loadClass(NulFile$2, name, initialize, &_NulFile$2_ClassInfo_, allocate$NulFile$2);
	return class$;
}

$Class* NulFile$2::class$ = nullptr;