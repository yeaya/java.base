#include <EqualityTest$AnnotationHost.h>

#include <EqualityTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$CompoundAttribute _EqualityTest$AnnotationHost_Annotations_[] = {
	{"LTestAnnotation;", nullptr},
	{}
};

$MethodInfo _EqualityTest$AnnotationHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EqualityTest$AnnotationHost::*)()>(&EqualityTest$AnnotationHost::init$))},
	{}
};

$InnerClassInfo _EqualityTest$AnnotationHost_InnerClassesInfo_[] = {
	{"EqualityTest$AnnotationHost", "EqualityTest", "AnnotationHost", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EqualityTest$AnnotationHost_ClassInfo_ = {
	$ACC_SUPER,
	"EqualityTest$AnnotationHost",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EqualityTest$AnnotationHost_MethodInfo_,
	nullptr,
	nullptr,
	_EqualityTest$AnnotationHost_InnerClassesInfo_,
	_EqualityTest$AnnotationHost_Annotations_,
	nullptr,
	nullptr,
	"EqualityTest"
};

$Object* allocate$EqualityTest$AnnotationHost($Class* clazz) {
	return $of($alloc(EqualityTest$AnnotationHost));
}

void EqualityTest$AnnotationHost::init$() {
}

EqualityTest$AnnotationHost::EqualityTest$AnnotationHost() {
}

$Class* EqualityTest$AnnotationHost::load$($String* name, bool initialize) {
	$loadClass(EqualityTest$AnnotationHost, name, initialize, &_EqualityTest$AnnotationHost_ClassInfo_, allocate$EqualityTest$AnnotationHost);
	return class$;
}

$Class* EqualityTest$AnnotationHost::class$ = nullptr;