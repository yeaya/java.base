#include <GetCallerClassTest$InnerClassCaller.h>

#include <GetCallerClassTest$InnerClassCaller$Inner.h>
#include <GetCallerClassTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$InnerClassCaller$Inner = ::GetCallerClassTest$InnerClassCaller$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _GetCallerClassTest$InnerClassCaller_FieldInfo_[] = {
	{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$InnerClassCaller, this$0)},
	{}
};

$MethodInfo _GetCallerClassTest$InnerClassCaller_MethodInfo_[] = {
	{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(static_cast<void(GetCallerClassTest$InnerClassCaller::*)($GetCallerClassTest*)>(&GetCallerClassTest$InnerClassCaller::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetCallerClassTest$InnerClassCaller_InnerClassesInfo_[] = {
	{"GetCallerClassTest$InnerClassCaller", "GetCallerClassTest", "InnerClassCaller", 0},
	{"GetCallerClassTest$InnerClassCaller$Inner", "GetCallerClassTest$InnerClassCaller", "Inner", 0},
	{}
};

$ClassInfo _GetCallerClassTest$InnerClassCaller_ClassInfo_ = {
	$ACC_SUPER,
	"GetCallerClassTest$InnerClassCaller",
	"java.lang.Object",
	"java.lang.Runnable",
	_GetCallerClassTest$InnerClassCaller_FieldInfo_,
	_GetCallerClassTest$InnerClassCaller_MethodInfo_,
	nullptr,
	nullptr,
	_GetCallerClassTest$InnerClassCaller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetCallerClassTest"
};

$Object* allocate$GetCallerClassTest$InnerClassCaller($Class* clazz) {
	return $of($alloc(GetCallerClassTest$InnerClassCaller));
}

void GetCallerClassTest$InnerClassCaller::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

void GetCallerClassTest$InnerClassCaller::run() {
	$$new($GetCallerClassTest$InnerClassCaller$Inner, this)->test();
}

GetCallerClassTest$InnerClassCaller::GetCallerClassTest$InnerClassCaller() {
}

$Class* GetCallerClassTest$InnerClassCaller::load$($String* name, bool initialize) {
	$loadClass(GetCallerClassTest$InnerClassCaller, name, initialize, &_GetCallerClassTest$InnerClassCaller_ClassInfo_, allocate$GetCallerClassTest$InnerClassCaller);
	return class$;
}

$Class* GetCallerClassTest$InnerClassCaller::class$ = nullptr;