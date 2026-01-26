#include <java/lang/ref/Reference$1.h>

#include <java/lang/ref/Finalizer.h>
#include <java/lang/ref/Reference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Finalizer = ::java::lang::ref::Finalizer;
using $Reference = ::java::lang::ref::Reference;

namespace java {
	namespace lang {
		namespace ref {

$MethodInfo _Reference$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Reference$1, init$, void)},
	{"runFinalization", "()V", nullptr, $PUBLIC, $virtualMethod(Reference$1, runFinalization, void)},
	{"waitForReferenceProcessing", "()Z", nullptr, $PUBLIC, $virtualMethod(Reference$1, waitForReferenceProcessing, bool), "java.lang.InterruptedException"},
	{}
};

$EnclosingMethodInfo _Reference$1_EnclosingMethodInfo_ = {
	"java.lang.ref.Reference",
	nullptr,
	nullptr
};

$InnerClassInfo _Reference$1_InnerClassesInfo_[] = {
	{"java.lang.ref.Reference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reference$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ref.Reference$1",
	"java.lang.Object",
	"jdk.internal.access.JavaLangRefAccess",
	nullptr,
	_Reference$1_MethodInfo_,
	nullptr,
	&_Reference$1_EnclosingMethodInfo_,
	_Reference$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.Reference"
};

$Object* allocate$Reference$1($Class* clazz) {
	return $of($alloc(Reference$1));
}

void Reference$1::init$() {
}

bool Reference$1::waitForReferenceProcessing() {
	return $Reference::waitForReferenceProcessing();
}

void Reference$1::runFinalization() {
	$Finalizer::runFinalization();
}

Reference$1::Reference$1() {
}

$Class* Reference$1::load$($String* name, bool initialize) {
	$loadClass(Reference$1, name, initialize, &_Reference$1_ClassInfo_, allocate$Reference$1);
	return class$;
}

$Class* Reference$1::class$ = nullptr;

		} // ref
	} // lang
} // java