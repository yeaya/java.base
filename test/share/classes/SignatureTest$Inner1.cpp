#include <SignatureTest$Inner1.h>

#include <SignatureTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SignatureTest = ::SignatureTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _SignatureTest$Inner1_FieldInfo_[] = {
	{"this$0", "LSignatureTest;", nullptr, $FINAL | $SYNTHETIC, $field(SignatureTest$Inner1, this$0)},
	{}
};

$MethodInfo _SignatureTest$Inner1_MethodInfo_[] = {
	{"<init>", "(LSignatureTest;)V", nullptr, 0, $method(static_cast<void(SignatureTest$Inner1::*)($SignatureTest*)>(&SignatureTest$Inner1::init$))},
	{}
};

$InnerClassInfo _SignatureTest$Inner1_InnerClassesInfo_[] = {
	{"SignatureTest$Inner1", "SignatureTest", "Inner1", 0},
	{"SignatureTest$Inner1$Inner11", "SignatureTest$Inner1", "Inner11", 0},
	{}
};

$ClassInfo _SignatureTest$Inner1_ClassInfo_ = {
	$ACC_SUPER,
	"SignatureTest$Inner1",
	"java.lang.Object",
	nullptr,
	_SignatureTest$Inner1_FieldInfo_,
	_SignatureTest$Inner1_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureTest$Inner1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SignatureTest"
};

$Object* allocate$SignatureTest$Inner1($Class* clazz) {
	return $of($alloc(SignatureTest$Inner1));
}

void SignatureTest$Inner1::init$($SignatureTest* this$0) {
	$set(this, this$0, this$0);
}

SignatureTest$Inner1::SignatureTest$Inner1() {
}

$Class* SignatureTest$Inner1::load$($String* name, bool initialize) {
	$loadClass(SignatureTest$Inner1, name, initialize, &_SignatureTest$Inner1_ClassInfo_, allocate$SignatureTest$Inner1);
	return class$;
}

$Class* SignatureTest$Inner1::class$ = nullptr;