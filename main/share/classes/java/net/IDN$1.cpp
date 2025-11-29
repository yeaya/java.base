#include <java/net/IDN$1.h>

#include <java/io/InputStream.h>
#include <java/net/IDN.h>
#include <jdk/internal/icu/text/StringPrep.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringPrep = ::jdk::internal::icu::text::StringPrep;

namespace java {
	namespace net {

$MethodInfo _IDN$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IDN$1::*)()>(&IDN$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IDN$1_EnclosingMethodInfo_ = {
	"java.net.IDN",
	nullptr,
	nullptr
};

$InnerClassInfo _IDN$1_InnerClassesInfo_[] = {
	{"java.net.IDN$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IDN$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.IDN$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_IDN$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_IDN$1_EnclosingMethodInfo_,
	_IDN$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.IDN"
};

$Object* allocate$IDN$1($Class* clazz) {
	return $of($alloc(IDN$1));
}

void IDN$1::init$() {
}

$Object* IDN$1::run() {
	$beforeCallerSensitive();
	$load($StringPrep);
	return $of($StringPrep::class$->getResourceAsStream("/sun/net/idn/uidna.spp"_s));
}

IDN$1::IDN$1() {
}

$Class* IDN$1::load$($String* name, bool initialize) {
	$loadClass(IDN$1, name, initialize, &_IDN$1_ClassInfo_, allocate$IDN$1);
	return class$;
}

$Class* IDN$1::class$ = nullptr;

	} // net
} // java