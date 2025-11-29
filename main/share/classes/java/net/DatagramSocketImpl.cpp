#include <java/net/DatagramSocketImpl.h>

#include <java/io/FileDescriptor.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/DatagramPacket.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $InetAddress = ::java::net::InetAddress;
using $SocketOption = ::java::net::SocketOption;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;

namespace java {
	namespace net {

$CompoundAttribute _DatagramSocketImpl_MethodAnnotations_getTTL10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _DatagramSocketImpl_MethodAnnotations_setTTL21[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _DatagramSocketImpl_FieldInfo_[] = {
	{"localPort", "I", nullptr, $PROTECTED, $field(DatagramSocketImpl, localPort)},
	{"fd", "Ljava/io/FileDescriptor;", nullptr, $PROTECTED, $field(DatagramSocketImpl, fd)},
	{}
};

$MethodInfo _DatagramSocketImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DatagramSocketImpl::*)()>(&DatagramSocketImpl::init$))},
	{"bind", "(ILjava/net/InetAddress;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.net.SocketException"},
	{"close", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"connect", "(Ljava/net/InetAddress;I)V", nullptr, $PROTECTED, nullptr, "java.net.SocketException"},
	{"create", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.net.SocketException"},
	{"dataAvailable", "()I", nullptr, 0},
	{"disconnect", "()V", nullptr, $PROTECTED},
	{"getFileDescriptor", "()Ljava/io/FileDescriptor;", nullptr, $PROTECTED},
	{"getLocalPort", "()I", nullptr, $PROTECTED},
	{"getOption", "(Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;)TT;", $PROTECTED, nullptr, "java.io.IOException"},
	{"getTTL", "()B", nullptr, $PROTECTED | $ABSTRACT | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _DatagramSocketImpl_MethodAnnotations_getTTL10},
	{"getTimeToLive", "()I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"join", "(Ljava/net/InetAddress;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"joinGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"leave", "(Ljava/net/InetAddress;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"leaveGroup", "(Ljava/net/SocketAddress;Ljava/net/NetworkInterface;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"peek", "(Ljava/net/InetAddress;)I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"peekData", "(Ljava/net/DatagramPacket;)I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"receive", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"send", "(Ljava/net/DatagramPacket;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PROTECTED, nullptr, "java.io.IOException"},
	{"setTTL", "(B)V", nullptr, $PROTECTED | $ABSTRACT | $DEPRECATED, nullptr, "java.io.IOException", nullptr, _DatagramSocketImpl_MethodAnnotations_setTTL21},
	{"setTimeToLive", "(I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"supportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PROTECTED},
	{}
};

$ClassInfo _DatagramSocketImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.net.DatagramSocketImpl",
	"java.lang.Object",
	"java.net.SocketOptions",
	_DatagramSocketImpl_FieldInfo_,
	_DatagramSocketImpl_MethodInfo_
};

$Object* allocate$DatagramSocketImpl($Class* clazz) {
	return $of($alloc(DatagramSocketImpl));
}

void DatagramSocketImpl::init$() {
}

int32_t DatagramSocketImpl::dataAvailable() {
	return 0;
}

void DatagramSocketImpl::connect($InetAddress* address, int32_t port) {
}

void DatagramSocketImpl::disconnect() {
}

int32_t DatagramSocketImpl::getLocalPort() {
	return this->localPort;
}

$FileDescriptor* DatagramSocketImpl::getFileDescriptor() {
	return this->fd;
}

void DatagramSocketImpl::setOption($SocketOption* name, Object$* value) {
	$Objects::requireNonNull(name);
	$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
}

$Object* DatagramSocketImpl::getOption($SocketOption* name) {
	$Objects::requireNonNull(name);
	$throwNew($UnsupportedOperationException, $$str({"\'"_s, name, "\' not supported"_s}));
	$shouldNotReachHere();
}

$Set* DatagramSocketImpl::supportedOptions() {
	return $Set::of();
}

DatagramSocketImpl::DatagramSocketImpl() {
}

$Class* DatagramSocketImpl::load$($String* name, bool initialize) {
	$loadClass(DatagramSocketImpl, name, initialize, &_DatagramSocketImpl_ClassInfo_, allocate$DatagramSocketImpl);
	return class$;
}

$Class* DatagramSocketImpl::class$ = nullptr;

	} // net
} // java