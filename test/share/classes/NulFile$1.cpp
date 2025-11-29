#include <NulFile$1.h>

#include <NulFile.h>
#include <java/io/File.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _NulFile$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NulFile$1::*)()>(&NulFile$1::init$))},
	{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NulFile$1_EnclosingMethodInfo_ = {
	"NulFile",
	"test",
	"(Ljava/io/File;Z)V"
};

$InnerClassInfo _NulFile$1_InnerClassesInfo_[] = {
	{"NulFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NulFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"NulFile$1",
	"java.lang.Object",
	"java.io.FilenameFilter",
	nullptr,
	_NulFile$1_MethodInfo_,
	nullptr,
	&_NulFile$1_EnclosingMethodInfo_,
	_NulFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NulFile"
};

$Object* allocate$NulFile$1($Class* clazz) {
	return $of($alloc(NulFile$1));
}

void NulFile$1::init$() {
}

bool NulFile$1::accept($File* dir, $String* name) {
	return false;
}

NulFile$1::NulFile$1() {
}

$Class* NulFile$1::load$($String* name, bool initialize) {
	$loadClass(NulFile$1, name, initialize, &_NulFile$1_ClassInfo_, allocate$NulFile$1);
	return class$;
}

$Class* NulFile$1::class$ = nullptr;