#include <java/lang/ref/Cleaner$1.h>

#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::java::lang::ref::Cleaner;
using $Function = ::java::util::function::Function;
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;

namespace java {
	namespace lang {
		namespace ref {

$MethodInfo _Cleaner$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Cleaner$1::*)()>(&Cleaner$1::init$))},
	{"apply", "(Ljava/lang/ref/Cleaner;)Ljdk/internal/ref/CleanerImpl;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Cleaner$1_EnclosingMethodInfo_ = {
	"java.lang.ref.Cleaner",
	nullptr,
	nullptr
};

$InnerClassInfo _Cleaner$1_InnerClassesInfo_[] = {
	{"java.lang.ref.Cleaner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Cleaner$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.Cleaner$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_Cleaner$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/ref/Cleaner;Ljdk/internal/ref/CleanerImpl;>;",
	&_Cleaner$1_EnclosingMethodInfo_,
	_Cleaner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.Cleaner"
};

$Object* allocate$Cleaner$1($Class* clazz) {
	return $of($alloc(Cleaner$1));
}

void Cleaner$1::init$() {
}

$CleanerImpl* Cleaner$1::apply($Cleaner* cleaner) {
	return $nc(cleaner)->impl;
}

$Object* Cleaner$1::apply(Object$* cleaner) {
	return $of(this->apply($cast($Cleaner, cleaner)));
}

Cleaner$1::Cleaner$1() {
}

$Class* Cleaner$1::load$($String* name, bool initialize) {
	$loadClass(Cleaner$1, name, initialize, &_Cleaner$1_ClassInfo_, allocate$Cleaner$1);
	return class$;
}

$Class* Cleaner$1::class$ = nullptr;

		} // ref
	} // lang
} // java