#include <sun/nio/ch/MembershipKeyImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/nio/channels/MembershipKey.h>
#include <java/nio/channels/MulticastChannel.h>
#include <java/util/HashSet.h>
#include <sun/nio/ch/DatagramChannelImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $MembershipKey = ::java::nio::channels::MembershipKey;
using $MulticastChannel = ::java::nio::channels::MulticastChannel;
using $HashSet = ::java::util::HashSet;
using $DatagramChannelImpl = ::sun::nio::ch::DatagramChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _MembershipKeyImpl_FieldInfo_[] = {
	{"ch", "Ljava/nio/channels/MulticastChannel;", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl, ch)},
	{"group", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl, group$)},
	{"interf", "Ljava/net/NetworkInterface;", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl, interf)},
	{"source", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl, source)},
	{"invalid", "Z", nullptr, $PRIVATE | $VOLATILE, $field(MembershipKeyImpl, invalid)},
	{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MembershipKeyImpl, stateLock)},
	{"blockedSet", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljava/net/InetAddress;>;", $PRIVATE, $field(MembershipKeyImpl, blockedSet)},
	{}
};

$MethodInfo _MembershipKeyImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/MulticastChannel;Ljava/net/InetAddress;Ljava/net/NetworkInterface;Ljava/net/InetAddress;)V", nullptr, $PRIVATE, $method(static_cast<void(MembershipKeyImpl::*)($MulticastChannel*,$InetAddress*,$NetworkInterface*,$InetAddress*)>(&MembershipKeyImpl::init$))},
	{"block", "(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"channel", "()Ljava/nio/channels/MulticastChannel;", nullptr, $PUBLIC},
	{"drop", "()V", nullptr, $PUBLIC},
	{"group", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, 0},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"networkInterface", "()Ljava/net/NetworkInterface;", nullptr, $PUBLIC},
	{"sourceAddress", "()Ljava/net/InetAddress;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unblock", "(Ljava/net/InetAddress;)Ljava/nio/channels/MembershipKey;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MembershipKeyImpl_InnerClassesInfo_[] = {
	{"sun.nio.ch.MembershipKeyImpl$Type6", "sun.nio.ch.MembershipKeyImpl", "Type6", $STATIC},
	{"sun.nio.ch.MembershipKeyImpl$Type4", "sun.nio.ch.MembershipKeyImpl", "Type4", $STATIC},
	{}
};

$ClassInfo _MembershipKeyImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.MembershipKeyImpl",
	"java.nio.channels.MembershipKey",
	nullptr,
	_MembershipKeyImpl_FieldInfo_,
	_MembershipKeyImpl_MethodInfo_,
	nullptr,
	nullptr,
	_MembershipKeyImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.MembershipKeyImpl$Type6,sun.nio.ch.MembershipKeyImpl$Type4"
};

$Object* allocate$MembershipKeyImpl($Class* clazz) {
	return $of($alloc(MembershipKeyImpl));
}

void MembershipKeyImpl::init$($MulticastChannel* ch, $InetAddress* group, $NetworkInterface* interf, $InetAddress* source) {
	$MembershipKey::init$();
	$set(this, stateLock, $new($Object));
	$set(this, ch, ch);
	$set(this, group$, group);
	$set(this, interf, interf);
	$set(this, source, source);
}

bool MembershipKeyImpl::isValid() {
	return !this->invalid;
}

void MembershipKeyImpl::invalidate() {
	this->invalid = true;
}

void MembershipKeyImpl::drop() {
	$nc(($cast($DatagramChannelImpl, this->ch)))->drop(this);
}

$MulticastChannel* MembershipKeyImpl::channel() {
	return this->ch;
}

$InetAddress* MembershipKeyImpl::group() {
	return this->group$;
}

$NetworkInterface* MembershipKeyImpl::networkInterface() {
	return this->interf;
}

$InetAddress* MembershipKeyImpl::sourceAddress() {
	return this->source;
}

$MembershipKey* MembershipKeyImpl::block($InetAddress* toBlock) {
	if (this->source != nullptr) {
		$throwNew($IllegalStateException, "key is source-specific"_s);
	}
	$synchronized(this->stateLock) {
		if ((this->blockedSet != nullptr) && $nc(this->blockedSet)->contains(toBlock)) {
			return this;
		}
		$nc(($cast($DatagramChannelImpl, this->ch)))->block(this, toBlock);
		if (this->blockedSet == nullptr) {
			$set(this, blockedSet, $new($HashSet));
		}
		$nc(this->blockedSet)->add(toBlock);
	}
	return this;
}

$MembershipKey* MembershipKeyImpl::unblock($InetAddress* toUnblock) {
	$synchronized(this->stateLock) {
		if ((this->blockedSet == nullptr) || !$nc(this->blockedSet)->contains(toUnblock)) {
			$throwNew($IllegalStateException, "not blocked"_s);
		}
		$nc(($cast($DatagramChannelImpl, this->ch)))->unblock(this, toUnblock);
		$nc(this->blockedSet)->remove(toUnblock);
	}
	return this;
}

$String* MembershipKeyImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 64));
	sb->append(u'<');
	sb->append($($nc(this->group$)->getHostAddress()));
	sb->append(u',');
	sb->append($($nc(this->interf)->getName()));
	if (this->source != nullptr) {
		sb->append(u',');
		sb->append($($nc(this->source)->getHostAddress()));
	}
	sb->append(u'>');
	return sb->toString();
}

MembershipKeyImpl::MembershipKeyImpl() {
}

$Class* MembershipKeyImpl::load$($String* name, bool initialize) {
	$loadClass(MembershipKeyImpl, name, initialize, &_MembershipKeyImpl_ClassInfo_, allocate$MembershipKeyImpl);
	return class$;
}

$Class* MembershipKeyImpl::class$ = nullptr;

		} // ch
	} // nio
} // sun