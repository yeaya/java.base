#include <GetCallerClassTest$Nested$NestedClassCaller.h>

#include <GetCallerClassTest$Nested.h>
#include <GetCallerClassTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$Nested = ::GetCallerClassTest$Nested;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StackWalker = ::java::lang::StackWalker;

$FieldInfo _GetCallerClassTest$Nested$NestedClassCaller_FieldInfo_[] = {
	{"this$1", "LGetCallerClassTest$Nested;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$Nested$NestedClassCaller, this$1)},
	{}
};

$MethodInfo _GetCallerClassTest$Nested$NestedClassCaller_MethodInfo_[] = {
	{"<init>", "(LGetCallerClassTest$Nested;)V", nullptr, 0, $method(static_cast<void(GetCallerClassTest$Nested$NestedClassCaller::*)($GetCallerClassTest$Nested*)>(&GetCallerClassTest$Nested$NestedClassCaller::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetCallerClassTest$Nested$NestedClassCaller_InnerClassesInfo_[] = {
	{"GetCallerClassTest$Nested", "GetCallerClassTest", "Nested", 0},
	{"GetCallerClassTest$Nested$NestedClassCaller", "GetCallerClassTest$Nested", "NestedClassCaller", 0},
	{}
};

$ClassInfo _GetCallerClassTest$Nested$NestedClassCaller_ClassInfo_ = {
	$ACC_SUPER,
	"GetCallerClassTest$Nested$NestedClassCaller",
	"java.lang.Object",
	"java.lang.Runnable",
	_GetCallerClassTest$Nested$NestedClassCaller_FieldInfo_,
	_GetCallerClassTest$Nested$NestedClassCaller_MethodInfo_,
	nullptr,
	nullptr,
	_GetCallerClassTest$Nested$NestedClassCaller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetCallerClassTest"
};

$Object* allocate$GetCallerClassTest$Nested$NestedClassCaller($Class* clazz) {
	return $of($alloc(GetCallerClassTest$Nested$NestedClassCaller));
}

void GetCallerClassTest$Nested$NestedClassCaller::init$($GetCallerClassTest$Nested* this$1) {
	$set(this, this$1, this$1);
}

void GetCallerClassTest$Nested$NestedClassCaller::run() {
	$GetCallerClassTest::staticGetCallerClass($nc(this->this$1->this$0)->walker, $of(this)->getClass(), $nc(this->this$1->this$0)->expectUOE);
	$GetCallerClassTest::reflectiveGetCallerClass($nc(this->this$1->this$0)->walker, $of(this)->getClass(), $nc(this->this$1->this$0)->expectUOE);
	$GetCallerClassTest::methodHandleGetCallerClass($nc(this->this$1->this$0)->walker, $of(this)->getClass(), $nc(this->this$1->this$0)->expectUOE);
}

GetCallerClassTest$Nested$NestedClassCaller::GetCallerClassTest$Nested$NestedClassCaller() {
}

$Class* GetCallerClassTest$Nested$NestedClassCaller::load$($String* name, bool initialize) {
	$loadClass(GetCallerClassTest$Nested$NestedClassCaller, name, initialize, &_GetCallerClassTest$Nested$NestedClassCaller_ClassInfo_, allocate$GetCallerClassTest$Nested$NestedClassCaller);
	return class$;
}

$Class* GetCallerClassTest$Nested$NestedClassCaller::class$ = nullptr;