#include <Test$Inner2.h>

#include <Test.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Test = ::Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

$FieldInfo _Test$Inner2_FieldInfo_[] = {
	{"this$0", "LTest;", nullptr, $FINAL | $SYNTHETIC, $field(Test$Inner2, this$0)},
	{}
};

$MethodInfo _Test$Inner2_MethodInfo_[] = {
	{"<init>", "(LTest;)V", nullptr, 0, $method(static_cast<void(Test$Inner2::*)($Test*)>(&Test$Inner2::init$))},
	{"foo2", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+TV;>;)Ljava/util/List<*>;", 0},
	{}
};

$InnerClassInfo _Test$Inner2_InnerClassesInfo_[] = {
	{"Test$Inner2", "Test", "Inner2", 0},
	{}
};

$ClassInfo _Test$Inner2_ClassInfo_ = {
	$ACC_SUPER,
	"Test$Inner2",
	"java.lang.Object",
	nullptr,
	_Test$Inner2_FieldInfo_,
	_Test$Inner2_MethodInfo_,
	"<V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Test$Inner2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test"
};

$Object* allocate$Test$Inner2($Class* clazz) {
	return $of($alloc(Test$Inner2));
}

void Test$Inner2::init$($Test* this$0) {
	$set(this, this$0, this$0);
}

$List* Test$Inner2::foo2($List* t) {
	return nullptr;
}

Test$Inner2::Test$Inner2() {
}

$Class* Test$Inner2::load$($String* name, bool initialize) {
	$loadClass(Test$Inner2, name, initialize, &_Test$Inner2_ClassInfo_, allocate$Test$Inner2);
	return class$;
}

$Class* Test$Inner2::class$ = nullptr;