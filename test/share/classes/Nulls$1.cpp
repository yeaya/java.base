#include <Nulls$1.h>

#include <Nulls.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

$MethodInfo _Nulls$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Nulls$1, init$, void)},
	{}
};

$EnclosingMethodInfo _Nulls$1_EnclosingMethodInfo_ = {
	"Nulls",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Nulls$1_InnerClassesInfo_[] = {
	{"Nulls$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Nulls$1_ClassInfo_ = {
	$ACC_SUPER,
	"Nulls$1",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	nullptr,
	_Nulls$1_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_Nulls$1_EnclosingMethodInfo_,
	_Nulls$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Nulls"
};

$Object* allocate$Nulls$1($Class* clazz) {
	return $of($alloc(Nulls$1));
}

void Nulls$1::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$1::Nulls$1() {
}

$Class* Nulls$1::load$($String* name, bool initialize) {
	$loadClass(Nulls$1, name, initialize, &_Nulls$1_ClassInfo_, allocate$Nulls$1);
	return class$;
}

$Class* Nulls$1::class$ = nullptr;