#include <Nulls$2.h>

#include <Nulls.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

$MethodInfo _Nulls$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Nulls$2::*)()>(&Nulls$2::init$))},
	{}
};

$EnclosingMethodInfo _Nulls$2_EnclosingMethodInfo_ = {
	"Nulls",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Nulls$2_InnerClassesInfo_[] = {
	{"Nulls$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Nulls$2_ClassInfo_ = {
	$ACC_SUPER,
	"Nulls$2",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	nullptr,
	_Nulls$2_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_Nulls$2_EnclosingMethodInfo_,
	_Nulls$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Nulls"
};

$Object* allocate$Nulls$2($Class* clazz) {
	return $of($alloc(Nulls$2));
}

void Nulls$2::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$2::Nulls$2() {
}

$Class* Nulls$2::load$($String* name, bool initialize) {
	$loadClass(Nulls$2, name, initialize, &_Nulls$2_ClassInfo_, allocate$Nulls$2);
	return class$;
}

$Class* Nulls$2::class$ = nullptr;