#include <sun/nio/ch/MembershipKeyImpl$Type6.h>

#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/nio/channels/MulticastChannel.h>
#include <sun/nio/ch/MembershipKeyImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $MulticastChannel = ::java::nio::channels::MulticastChannel;
using $MembershipKeyImpl = ::sun::nio::ch::MembershipKeyImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _MembershipKeyImpl$Type6_FieldInfo_[] = {
	{"groupAddress", "[B", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl$Type6, groupAddress$)},
	{"index", "I", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl$Type6, index$)},
	{"sourceAddress", "[B", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl$Type6, sourceAddress$)},
	{}
};

$MethodInfo _MembershipKeyImpl$Type6_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/MulticastChannel;Ljava/net/InetAddress;Ljava/net/NetworkInterface;Ljava/net/InetAddress;[BI[B)V", nullptr, 0, $method(static_cast<void(MembershipKeyImpl$Type6::*)($MulticastChannel*,$InetAddress*,$NetworkInterface*,$InetAddress*,$bytes*,int32_t,$bytes*)>(&MembershipKeyImpl$Type6::init$))},
	{"groupAddress", "()[B", nullptr, 0},
	{"index", "()I", nullptr, 0},
	{"source", "()[B", nullptr, 0},
	{}
};

$InnerClassInfo _MembershipKeyImpl$Type6_InnerClassesInfo_[] = {
	{"sun.nio.ch.MembershipKeyImpl$Type6", "sun.nio.ch.MembershipKeyImpl", "Type6", $STATIC},
	{}
};

$ClassInfo _MembershipKeyImpl$Type6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.MembershipKeyImpl$Type6",
	"sun.nio.ch.MembershipKeyImpl",
	nullptr,
	_MembershipKeyImpl$Type6_FieldInfo_,
	_MembershipKeyImpl$Type6_MethodInfo_,
	nullptr,
	nullptr,
	_MembershipKeyImpl$Type6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.MembershipKeyImpl"
};

$Object* allocate$MembershipKeyImpl$Type6($Class* clazz) {
	return $of($alloc(MembershipKeyImpl$Type6));
}

void MembershipKeyImpl$Type6::init$($MulticastChannel* ch, $InetAddress* group, $NetworkInterface* interf, $InetAddress* source, $bytes* groupAddress, int32_t index, $bytes* sourceAddress) {
	$MembershipKeyImpl::init$(ch, group, interf, source);
	$set(this, groupAddress$, groupAddress);
	this->index$ = index;
	$set(this, sourceAddress$, sourceAddress);
}

$bytes* MembershipKeyImpl$Type6::groupAddress() {
	return this->groupAddress$;
}

int32_t MembershipKeyImpl$Type6::index() {
	return this->index$;
}

$bytes* MembershipKeyImpl$Type6::source() {
	return this->sourceAddress$;
}

MembershipKeyImpl$Type6::MembershipKeyImpl$Type6() {
}

$Class* MembershipKeyImpl$Type6::load$($String* name, bool initialize) {
	$loadClass(MembershipKeyImpl$Type6, name, initialize, &_MembershipKeyImpl$Type6_ClassInfo_, allocate$MembershipKeyImpl$Type6);
	return class$;
}

$Class* MembershipKeyImpl$Type6::class$ = nullptr;

		} // ch
	} // nio
} // sun