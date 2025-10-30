#include <Bash$TestReference.h>

#include <Bash.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $Bash = ::Bash;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

$FieldInfo _Bash$TestReference_FieldInfo_[] = {
	{"head", "LBash$TestReference;", nullptr, $PUBLIC | $STATIC, $staticField(Bash$TestReference, head)},
	{"next", "LBash$TestReference;", nullptr, $PUBLIC, $field(Bash$TestReference, next)},
	{}
};

$MethodInfo _Bash$TestReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Bash$TestReference::*)(Object$*)>(&Bash$TestReference::init$))},
	{}
};

$InnerClassInfo _Bash$TestReference_InnerClassesInfo_[] = {
	{"Bash$TestReference", "Bash", "TestReference", $STATIC},
	{}
};

$ClassInfo _Bash$TestReference_ClassInfo_ = {
	$ACC_SUPER,
	"Bash$TestReference",
	"java.lang.ref.SoftReference",
	nullptr,
	_Bash$TestReference_FieldInfo_,
	_Bash$TestReference_MethodInfo_,
	nullptr,
	nullptr,
	_Bash$TestReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Bash"
};

$Object* allocate$Bash$TestReference($Class* clazz) {
	return $of($alloc(Bash$TestReference));
}

Bash$TestReference* Bash$TestReference::head = nullptr;

void Bash$TestReference::init$(Object$* referent) {
	$SoftReference::init$(referent);
	$set(this, next, Bash$TestReference::head);
	$assignStatic(Bash$TestReference::head, this);
}

Bash$TestReference::Bash$TestReference() {
}

$Class* Bash$TestReference::load$($String* name, bool initialize) {
	$loadClass(Bash$TestReference, name, initialize, &_Bash$TestReference_ClassInfo_, allocate$Bash$TestReference);
	return class$;
}

$Class* Bash$TestReference::class$ = nullptr;