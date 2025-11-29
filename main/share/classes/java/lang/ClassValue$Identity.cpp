#include <java/lang/ClassValue$Identity.h>

#include <java/lang/ClassValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _ClassValue$Identity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassValue$Identity::*)()>(&ClassValue$Identity::init$))},
	{}
};

$InnerClassInfo _ClassValue$Identity_InnerClassesInfo_[] = {
	{"java.lang.ClassValue$Identity", "java.lang.ClassValue", "Identity", $STATIC},
	{}
};

$ClassInfo _ClassValue$Identity_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ClassValue$Identity",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClassValue$Identity_MethodInfo_,
	nullptr,
	nullptr,
	_ClassValue$Identity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ClassValue"
};

$Object* allocate$ClassValue$Identity($Class* clazz) {
	return $of($alloc(ClassValue$Identity));
}

void ClassValue$Identity::init$() {
}

ClassValue$Identity::ClassValue$Identity() {
}

$Class* ClassValue$Identity::load$($String* name, bool initialize) {
	$loadClass(ClassValue$Identity, name, initialize, &_ClassValue$Identity_ClassInfo_, allocate$ClassValue$Identity);
	return class$;
}

$Class* ClassValue$Identity::class$ = nullptr;

	} // lang
} // java