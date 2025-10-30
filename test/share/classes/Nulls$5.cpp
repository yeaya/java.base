#include <Nulls$5.h>

#include <Nulls.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $Nulls = ::Nulls;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

$MethodInfo _Nulls$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Nulls$5::*)()>(&Nulls$5::init$))},
	{}
};

$EnclosingMethodInfo _Nulls$5_EnclosingMethodInfo_ = {
	"Nulls",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Nulls$5_InnerClassesInfo_[] = {
	{"Nulls$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Nulls$5_ClassInfo_ = {
	$ACC_SUPER,
	"Nulls$5",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	nullptr,
	_Nulls$5_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_Nulls$5_EnclosingMethodInfo_,
	_Nulls$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Nulls"
};

$Object* allocate$Nulls$5($Class* clazz) {
	return $of($alloc(Nulls$5));
}

void Nulls$5::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$5::Nulls$5() {
}

$Class* Nulls$5::load$($String* name, bool initialize) {
	$loadClass(Nulls$5, name, initialize, &_Nulls$5_ClassInfo_, allocate$Nulls$5);
	return class$;
}

$Class* Nulls$5::class$ = nullptr;