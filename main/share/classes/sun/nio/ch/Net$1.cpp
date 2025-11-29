#include <sun/nio/ch/Net$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Net$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Net$1::*)()>(&Net$1::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Net$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.Net",
	nullptr,
	nullptr
};

$InnerClassInfo _Net$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.Net$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Net$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Net$1",
	"java.lang.Object",
	"java.net.ProtocolFamily",
	nullptr,
	_Net$1_MethodInfo_,
	nullptr,
	&_Net$1_EnclosingMethodInfo_,
	_Net$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Net"
};

$Object* allocate$Net$1($Class* clazz) {
	return $of($alloc(Net$1));
}

void Net$1::init$() {
}

$String* Net$1::name() {
	return "UNSPEC"_s;
}

Net$1::Net$1() {
}

$Class* Net$1::load$($String* name, bool initialize) {
	$loadClass(Net$1, name, initialize, &_Net$1_ClassInfo_, allocate$Net$1);
	return class$;
}

$Class* Net$1::class$ = nullptr;

		} // ch
	} // nio
} // sun