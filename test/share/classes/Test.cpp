#include <Test.h>

#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

$MethodInfo _Test_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test::*)()>(&Test::init$))},
	{"foo", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<-TT;>;)Ljava/util/List<+TT;>;", 0},
	{"max", "(Ljava/util/Collection;)Ljava/lang/Object;", "<S:Ljava/lang/Object;:Ljava/lang/Comparable<-TS;>;>(Ljava/util/Collection<+TS;>;)TS;", $STATIC, $method(static_cast<$Object*(*)($Collection*)>(&Test::max))},
	{}
};

$InnerClassInfo _Test_InnerClassesInfo_[] = {
	{"Test$Inner2", "Test", "Inner2", 0},
	{"Test$Inner1", "Test", "Inner1", $STATIC},
	{}
};

$ClassInfo _Test_ClassInfo_ = {
	$ACC_SUPER,
	"Test",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test$Inner2,Test$Inner1"
};

$Object* allocate$Test($Class* clazz) {
	return $of($alloc(Test));
}

void Test::init$() {
}

$Object* Test::max($Collection* coll) {
	return $of(nullptr);
}

$List* Test::foo($List* t) {
	return nullptr;
}

Test::Test() {
}

$Class* Test::load$($String* name, bool initialize) {
	$loadClass(Test, name, initialize, &_Test_ClassInfo_, allocate$Test);
	return class$;
}

$Class* Test::class$ = nullptr;