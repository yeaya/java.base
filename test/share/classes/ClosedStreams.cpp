#include <ClosedStreams.h>

#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/nio/channels/Channel.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ClosedStreams_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedStreams::*)()>(&ClosedStreams::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClosedStreams::main)), "java.io.IOException"},
	{}
};

$ClassInfo _ClosedStreams_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedStreams",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ClosedStreams_MethodInfo_
};

$Object* allocate$ClosedStreams($Class* clazz) {
	return $of($alloc(ClosedStreams));
}

void ClosedStreams::init$() {
}

void ClosedStreams::main($StringArray* args) {
	$init($FileDescriptor);
	($$new($FileInputStream, $FileDescriptor::in))->close();
	if ($System::inheritedChannel() != nullptr) {
		$throwNew($RuntimeException, "inherited channel not null - unexpected!"_s);
	}
}

ClosedStreams::ClosedStreams() {
}

$Class* ClosedStreams::load$($String* name, bool initialize) {
	$loadClass(ClosedStreams, name, initialize, &_ClosedStreams_ClassInfo_, allocate$ClosedStreams);
	return class$;
}

$Class* ClosedStreams::class$ = nullptr;