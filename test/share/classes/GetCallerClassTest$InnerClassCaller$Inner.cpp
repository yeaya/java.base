#include <GetCallerClassTest$InnerClassCaller$Inner.h>

#include <GetCallerClassTest$InnerClassCaller.h>
#include <GetCallerClassTest.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$InnerClassCaller = ::GetCallerClassTest$InnerClassCaller;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;

$FieldInfo _GetCallerClassTest$InnerClassCaller$Inner_FieldInfo_[] = {
	{"this$1", "LGetCallerClassTest$InnerClassCaller;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$InnerClassCaller$Inner, this$1)},
	{}
};

$MethodInfo _GetCallerClassTest$InnerClassCaller$Inner_MethodInfo_[] = {
	{"<init>", "(LGetCallerClassTest$InnerClassCaller;)V", nullptr, 0, $method(static_cast<void(GetCallerClassTest$InnerClassCaller$Inner::*)($GetCallerClassTest$InnerClassCaller*)>(&GetCallerClassTest$InnerClassCaller$Inner::init$))},
	{"test", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _GetCallerClassTest$InnerClassCaller$Inner_InnerClassesInfo_[] = {
	{"GetCallerClassTest$InnerClassCaller", "GetCallerClassTest", "InnerClassCaller", 0},
	{"GetCallerClassTest$InnerClassCaller$Inner", "GetCallerClassTest$InnerClassCaller", "Inner", 0},
	{}
};

$ClassInfo _GetCallerClassTest$InnerClassCaller$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"GetCallerClassTest$InnerClassCaller$Inner",
	"java.lang.Object",
	nullptr,
	_GetCallerClassTest$InnerClassCaller$Inner_FieldInfo_,
	_GetCallerClassTest$InnerClassCaller$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_GetCallerClassTest$InnerClassCaller$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetCallerClassTest"
};

$Object* allocate$GetCallerClassTest$InnerClassCaller$Inner($Class* clazz) {
	return $of($alloc(GetCallerClassTest$InnerClassCaller$Inner));
}

void GetCallerClassTest$InnerClassCaller$Inner::init$($GetCallerClassTest$InnerClassCaller* this$1) {
	$set(this, this$1, this$1);
}

void GetCallerClassTest$InnerClassCaller$Inner::test() {
	$GetCallerClassTest::staticGetCallerClass($nc(this->this$1->this$0)->walker, $of(this)->getClass(), $nc(this->this$1->this$0)->expectUOE);
	$GetCallerClassTest::reflectiveGetCallerClass($nc(this->this$1->this$0)->walker, $of(this)->getClass(), $nc(this->this$1->this$0)->expectUOE);
	$GetCallerClassTest::methodHandleGetCallerClass($nc(this->this$1->this$0)->walker, $of(this)->getClass(), $nc(this->this$1->this$0)->expectUOE);
}

GetCallerClassTest$InnerClassCaller$Inner::GetCallerClassTest$InnerClassCaller$Inner() {
}

$Class* GetCallerClassTest$InnerClassCaller$Inner::load$($String* name, bool initialize) {
	$loadClass(GetCallerClassTest$InnerClassCaller$Inner, name, initialize, &_GetCallerClassTest$InnerClassCaller$Inner_ClassInfo_, allocate$GetCallerClassTest$InnerClassCaller$Inner);
	return class$;
}

$Class* GetCallerClassTest$InnerClassCaller$Inner::class$ = nullptr;