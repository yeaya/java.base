#include <Basic4ref$Sub.h>

#include <Basic4ref.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Basic4ref$Sub_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic4ref$Sub::*)()>(&Basic4ref$Sub::init$))},
	{}
};

$InnerClassInfo _Basic4ref$Sub_InnerClassesInfo_[] = {
	{"Basic4ref$Sub", "Basic4ref", "Sub", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Basic4ref$Sub_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic4ref$Sub",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Basic4ref$Sub_MethodInfo_,
	nullptr,
	nullptr,
	_Basic4ref$Sub_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ref"
};

$Object* allocate$Basic4ref$Sub($Class* clazz) {
	return $of($alloc(Basic4ref$Sub));
}

void Basic4ref$Sub::init$() {
}

Basic4ref$Sub::Basic4ref$Sub() {
}

$Class* Basic4ref$Sub::load$($String* name, bool initialize) {
	$loadClass(Basic4ref$Sub, name, initialize, &_Basic4ref$Sub_ClassInfo_, allocate$Basic4ref$Sub);
	return class$;
}

$Class* Basic4ref$Sub::class$ = nullptr;