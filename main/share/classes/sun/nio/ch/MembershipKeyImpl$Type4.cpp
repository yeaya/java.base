#include <sun/nio/ch/MembershipKeyImpl$Type4.h>

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

$FieldInfo _MembershipKeyImpl$Type4_FieldInfo_[] = {
	{"groupAddress", "I", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl$Type4, groupAddress$)},
	{"interfAddress", "I", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl$Type4, interfAddress)},
	{"sourceAddress", "I", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl$Type4, sourceAddress$)},
	{}
};

$MethodInfo _MembershipKeyImpl$Type4_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/MulticastChannel;Ljava/net/InetAddress;Ljava/net/NetworkInterface;Ljava/net/InetAddress;III)V", nullptr, 0, $method(static_cast<void(MembershipKeyImpl$Type4::*)($MulticastChannel*,$InetAddress*,$NetworkInterface*,$InetAddress*,int32_t,int32_t,int32_t)>(&MembershipKeyImpl$Type4::init$))},
	{"groupAddress", "()I", nullptr, 0},
	{"interfaceAddress", "()I", nullptr, 0},
	{"source", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _MembershipKeyImpl$Type4_InnerClassesInfo_[] = {
	{"sun.nio.ch.MembershipKeyImpl$Type4", "sun.nio.ch.MembershipKeyImpl", "Type4", $STATIC},
	{}
};

$ClassInfo _MembershipKeyImpl$Type4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.MembershipKeyImpl$Type4",
	"sun.nio.ch.MembershipKeyImpl",
	nullptr,
	_MembershipKeyImpl$Type4_FieldInfo_,
	_MembershipKeyImpl$Type4_MethodInfo_,
	nullptr,
	nullptr,
	_MembershipKeyImpl$Type4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.MembershipKeyImpl"
};

$Object* allocate$MembershipKeyImpl$Type4($Class* clazz) {
	return $of($alloc(MembershipKeyImpl$Type4));
}

void MembershipKeyImpl$Type4::init$($MulticastChannel* ch, $InetAddress* group, $NetworkInterface* interf, $InetAddress* source, int32_t groupAddress, int32_t interfAddress, int32_t sourceAddress) {
	$MembershipKeyImpl::init$(ch, group, interf, source);
	this->groupAddress$ = groupAddress;
	this->interfAddress = interfAddress;
	this->sourceAddress$ = sourceAddress;
}

int32_t MembershipKeyImpl$Type4::groupAddress() {
	return this->groupAddress$;
}

int32_t MembershipKeyImpl$Type4::interfaceAddress() {
	return this->interfAddress;
}

int32_t MembershipKeyImpl$Type4::source() {
	return this->sourceAddress$;
}

MembershipKeyImpl$Type4::MembershipKeyImpl$Type4() {
}

$Class* MembershipKeyImpl$Type4::load$($String* name, bool initialize) {
	$loadClass(MembershipKeyImpl$Type4, name, initialize, &_MembershipKeyImpl$Type4_ClassInfo_, allocate$MembershipKeyImpl$Type4);
	return class$;
}

$Class* MembershipKeyImpl$Type4::class$ = nullptr;

		} // ch
	} // nio
} // sun