#include <BadProperties.h>

#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;

$MethodInfo _BadProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BadProperties::*)()>(&BadProperties::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BadProperties::main)), "java.io.IOException"},
	{}
};

$ClassInfo _BadProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BadProperties",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BadProperties_MethodInfo_
};

$Object* allocate$BadProperties($Class* clazz) {
	return $of($alloc(BadProperties));
}

void BadProperties::init$() {
}

void BadProperties::main($StringArray* args) {
	$AsynchronousSocketChannel::open();
}

BadProperties::BadProperties() {
}

$Class* BadProperties::load$($String* name, bool initialize) {
	$loadClass(BadProperties, name, initialize, &_BadProperties_ClassInfo_, allocate$BadProperties);
	return class$;
}

$Class* BadProperties::class$ = nullptr;