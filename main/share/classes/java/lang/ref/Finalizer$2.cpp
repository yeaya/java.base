#include <java/lang/ref/Finalizer$2.h>

#include <java/lang/ref/Finalizer.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Finalizer = ::java::lang::ref::Finalizer;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace lang {
		namespace ref {

$FieldInfo _Finalizer$2_FieldInfo_[] = {
	{"running", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Finalizer$2, running)},
	{}
};

$MethodInfo _Finalizer$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Finalizer$2::*)()>(&Finalizer$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Finalizer$2_EnclosingMethodInfo_ = {
	"java.lang.ref.Finalizer",
	"runFinalization",
	"()V"
};

$InnerClassInfo _Finalizer$2_InnerClassesInfo_[] = {
	{"java.lang.ref.Finalizer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Finalizer$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.Finalizer$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_Finalizer$2_FieldInfo_,
	_Finalizer$2_MethodInfo_,
	nullptr,
	&_Finalizer$2_EnclosingMethodInfo_,
	_Finalizer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.Finalizer"
};

$Object* allocate$Finalizer$2($Class* clazz) {
	return $of($alloc(Finalizer$2));
}

void Finalizer$2::init$() {
}

void Finalizer$2::run() {
	$useLocalCurrentObjectStackCache();
	if (this->running) {
		return;
	}
	$var($JavaLangAccess, jla, $SharedSecrets::getJavaLangAccess());
	this->running = true;
	$init($Finalizer);
	{
		$var($Finalizer, f, nullptr);
		for (; ($assign(f, $cast($Finalizer, $nc($Finalizer::queue)->poll()))) != nullptr;) {
			$nc(f)->runFinalizer(jla);
		}
	}
}

Finalizer$2::Finalizer$2() {
}

$Class* Finalizer$2::load$($String* name, bool initialize) {
	$loadClass(Finalizer$2, name, initialize, &_Finalizer$2_ClassInfo_, allocate$Finalizer$2);
	return class$;
}

$Class* Finalizer$2::class$ = nullptr;

		} // ref
	} // lang
} // java