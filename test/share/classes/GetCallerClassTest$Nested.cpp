#include <GetCallerClassTest$Nested.h>

#include <GetCallerClassTest$Nested$NestedClassCaller.h>
#include <GetCallerClassTest.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$Nested$NestedClassCaller = ::GetCallerClassTest$Nested$NestedClassCaller;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _GetCallerClassTest$Nested_FieldInfo_[] = {
	{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$Nested, this$0)},
	{}
};

$MethodInfo _GetCallerClassTest$Nested_MethodInfo_[] = {
	{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(static_cast<void(GetCallerClassTest$Nested::*)($GetCallerClassTest*)>(&GetCallerClassTest$Nested::init$))},
	{"createNestedCaller", "()LGetCallerClassTest$Nested$NestedClassCaller;", nullptr, 0},
	{}
};

$InnerClassInfo _GetCallerClassTest$Nested_InnerClassesInfo_[] = {
	{"GetCallerClassTest$Nested", "GetCallerClassTest", "Nested", 0},
	{"GetCallerClassTest$Nested$NestedClassCaller", "GetCallerClassTest$Nested", "NestedClassCaller", 0},
	{}
};

$ClassInfo _GetCallerClassTest$Nested_ClassInfo_ = {
	$ACC_SUPER,
	"GetCallerClassTest$Nested",
	"java.lang.Object",
	nullptr,
	_GetCallerClassTest$Nested_FieldInfo_,
	_GetCallerClassTest$Nested_MethodInfo_,
	nullptr,
	nullptr,
	_GetCallerClassTest$Nested_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetCallerClassTest"
};

$Object* allocate$GetCallerClassTest$Nested($Class* clazz) {
	return $of($alloc(GetCallerClassTest$Nested));
}

void GetCallerClassTest$Nested::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

$GetCallerClassTest$Nested$NestedClassCaller* GetCallerClassTest$Nested::createNestedCaller() {
	return $new($GetCallerClassTest$Nested$NestedClassCaller, this);
}

GetCallerClassTest$Nested::GetCallerClassTest$Nested() {
}

$Class* GetCallerClassTest$Nested::load$($String* name, bool initialize) {
	$loadClass(GetCallerClassTest$Nested, name, initialize, &_GetCallerClassTest$Nested_ClassInfo_, allocate$GetCallerClassTest$Nested);
	return class$;
}

$Class* GetCallerClassTest$Nested::class$ = nullptr;