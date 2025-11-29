#include <Exceptions4StringBuilder$7.h>

#include <Exceptions4StringBuilder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Exceptions4StringBuilder$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Exceptions4StringBuilder$7::*)()>(&Exceptions4StringBuilder$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Exceptions4StringBuilder$7_EnclosingMethodInfo_ = {
	"Exceptions4StringBuilder",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Exceptions4StringBuilder$7_InnerClassesInfo_[] = {
	{"Exceptions4StringBuilder$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Exceptions4StringBuilder$7_ClassInfo_ = {
	$ACC_SUPER,
	"Exceptions4StringBuilder$7",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Exceptions4StringBuilder$7_MethodInfo_,
	nullptr,
	&_Exceptions4StringBuilder$7_EnclosingMethodInfo_,
	_Exceptions4StringBuilder$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Exceptions4StringBuilder"
};

$Object* allocate$Exceptions4StringBuilder$7($Class* clazz) {
	return $of($alloc(Exceptions4StringBuilder$7));
}

void Exceptions4StringBuilder$7::init$() {
}

void Exceptions4StringBuilder$7::run() {
	$var($StringBuilder, sb, $new($StringBuilder, "banach"_s));
	sb->replace(7, 8, " "_s);
}

Exceptions4StringBuilder$7::Exceptions4StringBuilder$7() {
}

$Class* Exceptions4StringBuilder$7::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuilder$7, name, initialize, &_Exceptions4StringBuilder$7_ClassInfo_, allocate$Exceptions4StringBuilder$7);
	return class$;
}

$Class* Exceptions4StringBuilder$7::class$ = nullptr;