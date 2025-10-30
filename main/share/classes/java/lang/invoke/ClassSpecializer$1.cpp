#include <java/lang/invoke/ClassSpecializer$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _ClassSpecializer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassSpecializer$1::*)()>(&ClassSpecializer$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClassSpecializer$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.ClassSpecializer",
	nullptr,
	nullptr
};

$InnerClassInfo _ClassSpecializer$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.ClassSpecializer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassSpecializer$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.ClassSpecializer$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_ClassSpecializer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/Object;Ljava/lang/Object;>;",
	&_ClassSpecializer$1_EnclosingMethodInfo_,
	_ClassSpecializer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.ClassSpecializer"
};

$Object* allocate$ClassSpecializer$1($Class* clazz) {
	return $of($alloc(ClassSpecializer$1));
}

void ClassSpecializer$1::init$() {
}

$Object* ClassSpecializer$1::apply(Object$* key) {
	return $of($new($Object));
}

ClassSpecializer$1::ClassSpecializer$1() {
}

$Class* ClassSpecializer$1::load$($String* name, bool initialize) {
	$loadClass(ClassSpecializer$1, name, initialize, &_ClassSpecializer$1_ClassInfo_, allocate$ClassSpecializer$1);
	return class$;
}

$Class* ClassSpecializer$1::class$ = nullptr;

		} // invoke
	} // lang
} // java