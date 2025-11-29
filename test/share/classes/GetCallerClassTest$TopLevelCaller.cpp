#include <GetCallerClassTest$TopLevelCaller.h>

#include <GetCallerClassTest.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetCallerClassTest$TopLevelCaller_FieldInfo_[] = {
	{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$TopLevelCaller, this$0)},
	{}
};

$MethodInfo _GetCallerClassTest$TopLevelCaller_MethodInfo_[] = {
	{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(static_cast<void(GetCallerClassTest$TopLevelCaller::*)($GetCallerClassTest*)>(&GetCallerClassTest$TopLevelCaller::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetCallerClassTest$TopLevelCaller_InnerClassesInfo_[] = {
	{"GetCallerClassTest$TopLevelCaller", "GetCallerClassTest", "TopLevelCaller", 0},
	{}
};

$ClassInfo _GetCallerClassTest$TopLevelCaller_ClassInfo_ = {
	$ACC_SUPER,
	"GetCallerClassTest$TopLevelCaller",
	"java.lang.Object",
	"java.lang.Runnable",
	_GetCallerClassTest$TopLevelCaller_FieldInfo_,
	_GetCallerClassTest$TopLevelCaller_MethodInfo_,
	nullptr,
	nullptr,
	_GetCallerClassTest$TopLevelCaller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetCallerClassTest"
};

$Object* allocate$GetCallerClassTest$TopLevelCaller($Class* clazz) {
	return $of($alloc(GetCallerClassTest$TopLevelCaller));
}

void GetCallerClassTest$TopLevelCaller::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

void GetCallerClassTest$TopLevelCaller::run() {
	$GetCallerClassTest::staticGetCallerClass(this->this$0->walker, $of(this)->getClass(), this->this$0->expectUOE);
	$GetCallerClassTest::reflectiveGetCallerClass(this->this$0->walker, $of(this)->getClass(), this->this$0->expectUOE);
	$GetCallerClassTest::methodHandleGetCallerClass(this->this$0->walker, $of(this)->getClass(), this->this$0->expectUOE);
}

GetCallerClassTest$TopLevelCaller::GetCallerClassTest$TopLevelCaller() {
}

$Class* GetCallerClassTest$TopLevelCaller::load$($String* name, bool initialize) {
	$loadClass(GetCallerClassTest$TopLevelCaller, name, initialize, &_GetCallerClassTest$TopLevelCaller_ClassInfo_, allocate$GetCallerClassTest$TopLevelCaller);
	return class$;
}

$Class* GetCallerClassTest$TopLevelCaller::class$ = nullptr;