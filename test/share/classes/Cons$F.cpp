#include <Cons$F.h>

#include <Cons.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Cons = ::Cons;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Cons$F_FieldInfo_[] = {
	{"exp", "Ljava/lang/String;", nullptr, 0, $field(Cons$F, exp)},
	{}
};

$MethodInfo _Cons$F_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Cons$F::*)($String*)>(&Cons$F::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Cons$F::*)($String*,$String*)>(&Cons$F::init$))},
	{"<init>", "(LCons$F;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Cons$F::*)(Cons$F*,$String*)>(&Cons$F::init$))},
	{}
};

$InnerClassInfo _Cons$F_InnerClassesInfo_[] = {
	{"Cons$F", "Cons", "F", $STATIC},
	{}
};

$ClassInfo _Cons$F_ClassInfo_ = {
	$ACC_SUPER,
	"Cons$F",
	"java.io.File",
	nullptr,
	_Cons$F_FieldInfo_,
	_Cons$F_MethodInfo_,
	nullptr,
	nullptr,
	_Cons$F_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Cons"
};

$Object* allocate$Cons$F($Class* clazz) {
	return $of($alloc(Cons$F));
}

void Cons$F::init$($String* path) {
	$File::init$(path);
	$set(this, exp, $Cons::cons(path));
}

void Cons$F::init$($String* parent, $String* child) {
	$File::init$(parent, child);
	$set(this, exp, $Cons::cons(parent, child));
}

void Cons$F::init$(Cons$F* parent, $String* child) {
	$File::init$(static_cast<$File*>(parent), child);
	if (parent == nullptr) {
		$set(this, exp, $Cons::cons(($String*)nullptr, child));
	} else {
		$set(this, exp, $Cons::cons(parent, child));
	}
}

Cons$F::Cons$F() {
}

$Class* Cons$F::load$($String* name, bool initialize) {
	$loadClass(Cons$F, name, initialize, &_Cons$F_ClassInfo_, allocate$Cons$F);
	return class$;
}

$Class* Cons$F::class$ = nullptr;