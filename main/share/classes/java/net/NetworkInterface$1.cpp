#include <java/net/NetworkInterface$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/NetworkInterface.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NetworkInterface = ::java::net::NetworkInterface;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace net {

$FieldInfo _NetworkInterface$1_FieldInfo_[] = {
	{"val$a", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(NetworkInterface$1, val$a)},
	{"i", "I", nullptr, 0, $field(NetworkInterface$1, i)},
	{}
};

$MethodInfo _NetworkInterface$1_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(NetworkInterface$1::*)($ObjectArray*)>(&NetworkInterface$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _NetworkInterface$1_EnclosingMethodInfo_ = {
	"java.net.NetworkInterface",
	"enumerationFromArray",
	"([Ljava/lang/Object;)Ljava/util/Enumeration;"
};

$InnerClassInfo _NetworkInterface$1_InnerClassesInfo_[] = {
	{"java.net.NetworkInterface$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetworkInterface$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.NetworkInterface$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_NetworkInterface$1_FieldInfo_,
	_NetworkInterface$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<TT;>;",
	&_NetworkInterface$1_EnclosingMethodInfo_,
	_NetworkInterface$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.NetworkInterface"
};

$Object* allocate$NetworkInterface$1($Class* clazz) {
	return $of($alloc(NetworkInterface$1));
}

void NetworkInterface$1::init$($ObjectArray* val$a) {
	$set(this, val$a, val$a);
	this->i = 0;
}

$Object* NetworkInterface$1::nextElement() {
	if (this->i < $nc(this->val$a)->length) {
		return $of($nc(this->val$a)->get(this->i++));
	} else {
		$throwNew($NoSuchElementException);
	}
}

bool NetworkInterface$1::hasMoreElements() {
	return this->i < $nc(this->val$a)->length;
}

NetworkInterface$1::NetworkInterface$1() {
}

$Class* NetworkInterface$1::load$($String* name, bool initialize) {
	$loadClass(NetworkInterface$1, name, initialize, &_NetworkInterface$1_ClassInfo_, allocate$NetworkInterface$1);
	return class$;
}

$Class* NetworkInterface$1::class$ = nullptr;

	} // net
} // java