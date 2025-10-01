#include <Basic4ref$1.h>

#include <Basic4ref.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Basic4ref = ::Basic4ref;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Reference = ::java::lang::ref::Reference;

$MethodInfo _Basic4ref$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Basic4ref$1::*)()>(&Basic4ref$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Basic4ref$1_EnclosingMethodInfo_ = {
	"Basic4ref",
	"showReferences",
	"()V"
};

$InnerClassInfo _Basic4ref$1_InnerClassesInfo_[] = {
	{"Basic4ref$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Basic4ref$1_ClassInfo_ = {
	$ACC_SUPER,
	"Basic4ref$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Basic4ref$1_MethodInfo_,
	nullptr,
	&_Basic4ref$1_EnclosingMethodInfo_,
	_Basic4ref$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ref"
};

$Object* allocate$Basic4ref$1($Class* clazz) {
	return $of($alloc(Basic4ref$1));
}

void Basic4ref$1::init$() {
}

void Basic4ref$1::run() {
	$init($System);
	$init($Basic4ref);
	$var($String, var$4, $$str({"References: W "_s, $($nc($Basic4ref::rw)->get()), ", W2 "_s}));
	$var($String, var$3, $$concat(var$4, $($nc($Basic4ref::rw2)->get())));
	$var($String, var$2, $$concat(var$3, ", P "));
	$var($String, var$1, $$concat(var$2, $($nc($Basic4ref::rp)->get())));
	$var($String, var$0, $$concat(var$1, ", P2 "));
	$nc($System::err)->println($$concat(var$0, $($nc($Basic4ref::rp2)->get())));
}

Basic4ref$1::Basic4ref$1() {
}

$Class* Basic4ref$1::load$($String* name, bool initialize) {
	$loadClass(Basic4ref$1, name, initialize, &_Basic4ref$1_ClassInfo_, allocate$Basic4ref$1);
	return class$;
}

$Class* Basic4ref$1::class$ = nullptr;