#include <Nulls$4.h>

#include <Nulls.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $Nulls = ::Nulls;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

$MethodInfo _Nulls$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Nulls$4::*)()>(&Nulls$4::init$))},
	{}
};

$EnclosingMethodInfo _Nulls$4_EnclosingMethodInfo_ = {
	"Nulls",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Nulls$4_InnerClassesInfo_[] = {
	{"Nulls$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Nulls$4_ClassInfo_ = {
	$ACC_SUPER,
	"Nulls$4",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	nullptr,
	_Nulls$4_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_Nulls$4_EnclosingMethodInfo_,
	_Nulls$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Nulls"
};

$Object* allocate$Nulls$4($Class* clazz) {
	return $of($alloc(Nulls$4));
}

void Nulls$4::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$4::Nulls$4() {
}

$Class* Nulls$4::load$($String* name, bool initialize) {
	$loadClass(Nulls$4, name, initialize, &_Nulls$4_ClassInfo_, allocate$Nulls$4);
	return class$;
}

$Class* Nulls$4::class$ = nullptr;