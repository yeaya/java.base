#include <java/lang/ref/Cleaner$Cleanable.h>

#include <java/lang/ref/Cleaner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace ref {

$MethodInfo _Cleaner$Cleanable_MethodInfo_[] = {
	{"clean", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Cleaner$Cleanable_InnerClassesInfo_[] = {
	{"java.lang.ref.Cleaner$Cleanable", "java.lang.ref.Cleaner", "Cleanable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Cleaner$Cleanable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.ref.Cleaner$Cleanable",
	nullptr,
	nullptr,
	nullptr,
	_Cleaner$Cleanable_MethodInfo_,
	nullptr,
	nullptr,
	_Cleaner$Cleanable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.Cleaner"
};

$Object* allocate$Cleaner$Cleanable($Class* clazz) {
	return $of($alloc(Cleaner$Cleanable));
}

$Class* Cleaner$Cleanable::load$($String* name, bool initialize) {
	$loadClass(Cleaner$Cleanable, name, initialize, &_Cleaner$Cleanable_ClassInfo_, allocate$Cleaner$Cleanable);
	return class$;
}

$Class* Cleaner$Cleanable::class$ = nullptr;

		} // ref
	} // lang
} // java