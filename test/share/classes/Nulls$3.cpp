#include <Nulls$3.h>

#include <Nulls.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $Nulls = ::Nulls;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

$MethodInfo _Nulls$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Nulls$3::*)()>(&Nulls$3::init$))},
	{}
};

$EnclosingMethodInfo _Nulls$3_EnclosingMethodInfo_ = {
	"Nulls",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Nulls$3_InnerClassesInfo_[] = {
	{"Nulls$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Nulls$3_ClassInfo_ = {
	$ACC_SUPER,
	"Nulls$3",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	nullptr,
	_Nulls$3_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_Nulls$3_EnclosingMethodInfo_,
	_Nulls$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Nulls"
};

$Object* allocate$Nulls$3($Class* clazz) {
	return $of($alloc(Nulls$3));
}

void Nulls$3::init$() {
	$SimpleFileVisitor::init$();
}

Nulls$3::Nulls$3() {
}

$Class* Nulls$3::load$($String* name, bool initialize) {
	$loadClass(Nulls$3, name, initialize, &_Nulls$3_ClassInfo_, allocate$Nulls$3);
	return class$;
}

$Class* Nulls$3::class$ = nullptr;