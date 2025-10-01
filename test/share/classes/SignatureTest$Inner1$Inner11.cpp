#include <SignatureTest$Inner1$Inner11.h>

#include <SignatureTest$Inner1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SignatureTest$Inner1 = ::SignatureTest$Inner1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _SignatureTest$Inner1$Inner11_FieldInfo_[] = {
	{"this$1", "LSignatureTest$Inner1;", nullptr, $FINAL | $SYNTHETIC, $field(SignatureTest$Inner1$Inner11, this$1)},
	{}
};

$MethodInfo _SignatureTest$Inner1$Inner11_MethodInfo_[] = {
	{"<init>", "(LSignatureTest$Inner1;)V", nullptr, 0, $method(static_cast<void(SignatureTest$Inner1$Inner11::*)($SignatureTest$Inner1*)>(&SignatureTest$Inner1$Inner11::init$))},
	{}
};

$InnerClassInfo _SignatureTest$Inner1$Inner11_InnerClassesInfo_[] = {
	{"SignatureTest$Inner1", "SignatureTest", "Inner1", 0},
	{"SignatureTest$Inner1$Inner11", "SignatureTest$Inner1", "Inner11", 0},
	{}
};

$ClassInfo _SignatureTest$Inner1$Inner11_ClassInfo_ = {
	$ACC_SUPER,
	"SignatureTest$Inner1$Inner11",
	"java.lang.Object",
	nullptr,
	_SignatureTest$Inner1$Inner11_FieldInfo_,
	_SignatureTest$Inner1$Inner11_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureTest$Inner1$Inner11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SignatureTest"
};

$Object* allocate$SignatureTest$Inner1$Inner11($Class* clazz) {
	return $of($alloc(SignatureTest$Inner1$Inner11));
}

void SignatureTest$Inner1$Inner11::init$($SignatureTest$Inner1* this$1) {
	$set(this, this$1, this$1);
}

SignatureTest$Inner1$Inner11::SignatureTest$Inner1$Inner11() {
}

$Class* SignatureTest$Inner1$Inner11::load$($String* name, bool initialize) {
	$loadClass(SignatureTest$Inner1$Inner11, name, initialize, &_SignatureTest$Inner1$Inner11_ClassInfo_, allocate$SignatureTest$Inner1$Inner11);
	return class$;
}

$Class* SignatureTest$Inner1$Inner11::class$ = nullptr;