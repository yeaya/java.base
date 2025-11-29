#include <FinThreads$Foo$1.h>

#include <FinThreads$Foo.h>
#include <jcpp.h>

using $FinThreads$Foo = ::FinThreads$Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _FinThreads$Foo$1_FieldInfo_[] = {
	{"val$catchFinalizer", "Z", nullptr, $FINAL | $SYNTHETIC, $field(FinThreads$Foo$1, val$catchFinalizer)},
	{}
};

$MethodInfo _FinThreads$Foo$1_MethodInfo_[] = {
	{"<init>", "(Z)V", "()V", 0, $method(static_cast<void(FinThreads$Foo$1::*)(bool)>(&FinThreads$Foo$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FinThreads$Foo$1_EnclosingMethodInfo_ = {
	"FinThreads$Foo",
	"create",
	"(Z)V"
};

$InnerClassInfo _FinThreads$Foo$1_InnerClassesInfo_[] = {
	{"FinThreads$Foo", "FinThreads", "Foo", $STATIC},
	{"FinThreads$Foo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FinThreads$Foo$1_ClassInfo_ = {
	$ACC_SUPER,
	"FinThreads$Foo$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_FinThreads$Foo$1_FieldInfo_,
	_FinThreads$Foo$1_MethodInfo_,
	nullptr,
	&_FinThreads$Foo$1_EnclosingMethodInfo_,
	_FinThreads$Foo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinThreads"
};

$Object* allocate$FinThreads$Foo$1($Class* clazz) {
	return $of($alloc(FinThreads$Foo$1));
}

void FinThreads$Foo$1::init$(bool val$catchFinalizer) {
	this->val$catchFinalizer = val$catchFinalizer;
}

void FinThreads$Foo$1::run() {
	$new($FinThreads$Foo, this->val$catchFinalizer);
}

FinThreads$Foo$1::FinThreads$Foo$1() {
}

$Class* FinThreads$Foo$1::load$($String* name, bool initialize) {
	$loadClass(FinThreads$Foo$1, name, initialize, &_FinThreads$Foo$1_ClassInfo_, allocate$FinThreads$Foo$1);
	return class$;
}

$Class* FinThreads$Foo$1::class$ = nullptr;