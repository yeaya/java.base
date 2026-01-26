#include <sun/nio/ch/Net.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/InternalError.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/net/Inet4Address.h>
#include <java/net/Inet6Address.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/net/ProtocolFamily.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketException.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardProtocolFamily.h>
#include <java/net/StandardSocketOptions.h>
#include <java/net/UnknownHostException.h>
#include <java/nio/channels/AlreadyBoundException.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/NotYetBoundException.h>
#include <java/nio/channels/NotYetConnectedException.h>
#include <java/nio/channels/UnresolvedAddressException.h>
#include <java/nio/channels/UnsupportedAddressTypeException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/net/ext/ExtendedSocketOptions.h>
#include <sun/net/util/IPAddressUtil.h>
#include <sun/nio/ch/IOUtil.h>
#include <sun/nio/ch/Net$1.h>
#include <sun/nio/ch/Net$2.h>
#include <sun/nio/ch/OptionKey.h>
#include <sun/nio/ch/SocketOptionRegistry.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef FALSE
#undef INET
#undef INET6
#undef IP_MULTICAST_TTL
#undef IP_TOS
#undef POLLCONN
#undef POLLERR
#undef POLLHUP
#undef POLLIN
#undef POLLNVAL
#undef POLLOUT
#undef SHUT_RD
#undef SHUT_RDWR
#undef SHUT_WR
#undef SO_LINGER
#undef SO_RCVBUF
#undef SO_SNDBUF
#undef TRUE
#undef UNSPEC

using $InetSocketAddressArray = $Array<::java::net::InetSocketAddress>;
using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Inet4Address = ::java::net::Inet4Address;
using $Inet6Address = ::java::net::Inet6Address;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $ProtocolFamily = ::java::net::ProtocolFamily;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketException = ::java::net::SocketException;
using $SocketOption = ::java::net::SocketOption;
using $StandardProtocolFamily = ::java::net::StandardProtocolFamily;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $UnknownHostException = ::java::net::UnknownHostException;
using $AlreadyBoundException = ::java::nio::channels::AlreadyBoundException;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $NotYetBoundException = ::java::nio::channels::NotYetBoundException;
using $NotYetConnectedException = ::java::nio::channels::NotYetConnectedException;
using $UnresolvedAddressException = ::java::nio::channels::UnresolvedAddressException;
using $UnsupportedAddressTypeException = ::java::nio::channels::UnsupportedAddressTypeException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ExtendedSocketOptions = ::sun::net::ext::ExtendedSocketOptions;
using $IPAddressUtil = ::sun::net::util::IPAddressUtil;
using $IOUtil = ::sun::nio::ch::IOUtil;
using $Net$1 = ::sun::nio::ch::Net$1;
using $Net$2 = ::sun::nio::ch::Net$2;
using $OptionKey = ::sun::nio::ch::OptionKey;
using $SocketOptionRegistry = ::sun::nio::ch::SocketOptionRegistry;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _Net_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Net, $assertionsDisabled)},
	{"UNSPEC", "Ljava/net/ProtocolFamily;", nullptr, $STATIC | $FINAL, $staticField(Net, UNSPEC)},
	{"exclusiveBind", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Net, exclusiveBind)},
	{"fastLoopback", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Net, fastLoopback)},
	{"checkedIPv6", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Net, checkedIPv6)},
	{"isIPv6Available", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Net, isIPv6Available$)},
	{"checkedReusePort", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Net, checkedReusePort)},
	{"isReusePortAvailable", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Net, isReusePortAvailable$)},
	{"anyLocalInet4Address", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Net, anyLocalInet4Address)},
	{"anyLocalInet6Address", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Net, anyLocalInet6Address)},
	{"inet4LoopbackAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Net, inet4LoopbackAddress$)},
	{"inet6LoopbackAddress", "Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Net, inet6LoopbackAddress$)},
	{"extendedOptions", "Lsun/net/ext/ExtendedSocketOptions;", nullptr, $STATIC | $FINAL, $staticField(Net, extendedOptions)},
	{"SHUT_RD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Net, SHUT_RD)},
	{"SHUT_WR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Net, SHUT_WR)},
	{"SHUT_RDWR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Net, SHUT_RDWR)},
	{"POLLIN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Net, POLLIN)},
	{"POLLOUT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Net, POLLOUT)},
	{"POLLERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Net, POLLERR)},
	{"POLLHUP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Net, POLLHUP)},
	{"POLLNVAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Net, POLLNVAL)},
	{"POLLCONN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Net, POLLCONN)},
	{}
};

$MethodInfo _Net_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Net, init$, void)},
	{"accept", "(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;[Ljava/net/InetSocketAddress;)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(Net, accept, int32_t, $FileDescriptor*, $FileDescriptor*, $InetSocketAddressArray*), "java.io.IOException"},
	{"anyInet4Address", "(Ljava/net/NetworkInterface;)Ljava/net/Inet4Address;", nullptr, $STATIC, $staticMethod(Net, anyInet4Address, $Inet4Address*, $NetworkInterface*)},
	{"anyLocalAddress", "(Ljava/net/ProtocolFamily;)Ljava/net/InetAddress;", nullptr, $STATIC, $staticMethod(Net, anyLocalAddress, $InetAddress*, $ProtocolFamily*)},
	{"asInetSocketAddress", "(Ljava/net/SocketAddress;)Ljava/net/InetSocketAddress;", nullptr, $STATIC, $staticMethod(Net, asInetSocketAddress, $InetSocketAddress*, $SocketAddress*)},
	{"available", "(Ljava/io/FileDescriptor;)I", nullptr, $STATIC | $NATIVE, $staticMethod(Net, available, int32_t, $FileDescriptor*), "java.io.IOException"},
	{"bind", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Net, bind, void, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
	{"bind", "(Ljava/net/ProtocolFamily;Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V", nullptr, $STATIC, $staticMethod(Net, bind, void, $ProtocolFamily*, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
	{"bind0", "(Ljava/io/FileDescriptor;ZZLjava/net/InetAddress;I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, bind0, void, $FileDescriptor*, bool, bool, $InetAddress*, int32_t), "java.io.IOException"},
	{"block4", "(Ljava/io/FileDescriptor;III)I", nullptr, $STATIC, $staticMethod(Net, block4, int32_t, $FileDescriptor*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"block6", "(Ljava/io/FileDescriptor;[BI[B)I", nullptr, $STATIC, $staticMethod(Net, block6, int32_t, $FileDescriptor*, $bytes*, int32_t, $bytes*), "java.io.IOException"},
	{"blockOrUnblock4", "(ZLjava/io/FileDescriptor;III)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, blockOrUnblock4, int32_t, bool, $FileDescriptor*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"blockOrUnblock6", "(ZLjava/io/FileDescriptor;[BI[B)I", nullptr, $STATIC | $NATIVE, $staticMethod(Net, blockOrUnblock6, int32_t, bool, $FileDescriptor*, $bytes*, int32_t, $bytes*), "java.io.IOException"},
	{"canIPv6SocketJoinIPv4Group", "()Z", nullptr, $STATIC, $staticMethod(Net, canIPv6SocketJoinIPv4Group, bool)},
	{"canIPv6SocketJoinIPv4Group0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, canIPv6SocketJoinIPv4Group0, bool)},
	{"canJoin6WithIPv4Group", "()Z", nullptr, $STATIC, $staticMethod(Net, canJoin6WithIPv4Group, bool)},
	{"canJoin6WithIPv4Group0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, canJoin6WithIPv4Group0, bool)},
	{"canUseIPv6OptionsWithIPv4LocalAddress", "()Z", nullptr, $STATIC, $staticMethod(Net, canUseIPv6OptionsWithIPv4LocalAddress, bool)},
	{"canUseIPv6OptionsWithIPv4LocalAddress0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, canUseIPv6OptionsWithIPv4LocalAddress0, bool)},
	{"checkAddress", "(Ljava/net/SocketAddress;)Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $STATIC, $staticMethod(Net, checkAddress, $InetSocketAddress*, $SocketAddress*)},
	{"checkAddress", "(Ljava/net/SocketAddress;Ljava/net/ProtocolFamily;)Ljava/net/InetSocketAddress;", nullptr, $STATIC, $staticMethod(Net, checkAddress, $InetSocketAddress*, $SocketAddress*, $ProtocolFamily*)},
	{"connect", "(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)I", nullptr, $STATIC, $staticMethod(Net, connect, int32_t, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
	{"connect", "(Ljava/net/ProtocolFamily;Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)I", nullptr, $STATIC, $staticMethod(Net, connect, int32_t, $ProtocolFamily*, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
	{"connect", "(Ljava/net/ProtocolFamily;Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)I", nullptr, $STATIC, $staticMethod(Net, connect, int32_t, $ProtocolFamily*, $FileDescriptor*, $SocketAddress*), "java.io.IOException"},
	{"connect0", "(ZLjava/io/FileDescriptor;Ljava/net/InetAddress;I)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, connect0, int32_t, bool, $FileDescriptor*, $InetAddress*, int32_t), "java.io.IOException"},
	{"discardOOB", "(Ljava/io/FileDescriptor;)Z", nullptr, $STATIC | $NATIVE, $staticMethod(Net, discardOOB, bool, $FileDescriptor*), "java.io.IOException"},
	{"drop4", "(Ljava/io/FileDescriptor;III)V", nullptr, $STATIC, $staticMethod(Net, drop4, void, $FileDescriptor*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"drop6", "(Ljava/io/FileDescriptor;[BI[B)V", nullptr, $STATIC, $staticMethod(Net, drop6, void, $FileDescriptor*, $bytes*, int32_t, $bytes*), "java.io.IOException"},
	{"getIntOption0", "(Ljava/io/FileDescriptor;ZII)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, getIntOption0, int32_t, $FileDescriptor*, bool, int32_t, int32_t), "java.io.IOException"},
	{"getInterface4", "(Ljava/io/FileDescriptor;)I", nullptr, $STATIC | $NATIVE, $staticMethod(Net, getInterface4, int32_t, $FileDescriptor*), "java.io.IOException"},
	{"getInterface6", "(Ljava/io/FileDescriptor;)I", nullptr, $STATIC | $NATIVE, $staticMethod(Net, getInterface6, int32_t, $FileDescriptor*), "java.io.IOException"},
	{"getLoopbackAddress", "(I)Ljava/net/InetSocketAddress;", nullptr, $PRIVATE | $STATIC, $staticMethod(Net, getLoopbackAddress, $InetSocketAddress*, int32_t)},
	{"getRevealedLocalAddress", "(Ljava/net/SocketAddress;)Ljava/net/InetSocketAddress;", nullptr, $STATIC, $staticMethod(Net, getRevealedLocalAddress, $InetSocketAddress*, $SocketAddress*)},
	{"getRevealedLocalAddressAsString", "(Ljava/net/SocketAddress;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Net, getRevealedLocalAddressAsString, $String*, $SocketAddress*)},
	{"getSocketOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;)Ljava/lang/Object;", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;)Ljava/lang/Object;", $STATIC, $staticMethod(Net, getSocketOption, $Object*, $FileDescriptor*, $SocketOption*), "java.io.IOException"},
	{"getSocketOption", "(Ljava/io/FileDescriptor;Ljava/net/ProtocolFamily;Ljava/net/SocketOption;)Ljava/lang/Object;", "(Ljava/io/FileDescriptor;Ljava/net/ProtocolFamily;Ljava/net/SocketOption<*>;)Ljava/lang/Object;", $STATIC, $staticMethod(Net, getSocketOption, $Object*, $FileDescriptor*, $ProtocolFamily*, $SocketOption*), "java.io.IOException"},
	{"inet4AsInt", "(Ljava/net/InetAddress;)I", nullptr, $STATIC, $staticMethod(Net, inet4AsInt, int32_t, $InetAddress*)},
	{"inet4FromInt", "(I)Ljava/net/InetAddress;", nullptr, $STATIC, $staticMethod(Net, inet4FromInt, $InetAddress*, int32_t)},
	{"inet4LoopbackAddress", "()Ljava/net/InetAddress;", nullptr, $STATIC, $staticMethod(Net, inet4LoopbackAddress, $InetAddress*)},
	{"inet6AsByteArray", "(Ljava/net/InetAddress;)[B", nullptr, $STATIC, $staticMethod(Net, inet6AsByteArray, $bytes*, $InetAddress*)},
	{"inet6LoopbackAddress", "()Ljava/net/InetAddress;", nullptr, $STATIC, $staticMethod(Net, inet6LoopbackAddress, $InetAddress*)},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, initIDs, void)},
	{"isExclusiveBindAvailable", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, isExclusiveBindAvailable, int32_t)},
	{"isFastTcpLoopbackRequested", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Net, isFastTcpLoopbackRequested, bool)},
	{"isIPv6Available", "()Z", nullptr, $STATIC, $staticMethod(Net, isIPv6Available, bool)},
	{"isIPv6Available0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, isIPv6Available0, bool)},
	{"isReusePortAvailable", "()Z", nullptr, $STATIC, $staticMethod(Net, isReusePortAvailable, bool)},
	{"isReusePortAvailable0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, isReusePortAvailable0, bool)},
	{"join4", "(Ljava/io/FileDescriptor;III)I", nullptr, $STATIC, $staticMethod(Net, join4, int32_t, $FileDescriptor*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"join6", "(Ljava/io/FileDescriptor;[BI[B)I", nullptr, $STATIC, $staticMethod(Net, join6, int32_t, $FileDescriptor*, $bytes*, int32_t, $bytes*), "java.io.IOException"},
	{"joinOrDrop4", "(ZLjava/io/FileDescriptor;III)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, joinOrDrop4, int32_t, bool, $FileDescriptor*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"joinOrDrop6", "(ZLjava/io/FileDescriptor;[BI[B)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, joinOrDrop6, int32_t, bool, $FileDescriptor*, $bytes*, int32_t, $bytes*), "java.io.IOException"},
	{"listen", "(Ljava/io/FileDescriptor;I)V", nullptr, $STATIC | $NATIVE, $staticMethod(Net, listen, void, $FileDescriptor*, int32_t), "java.io.IOException"},
	{"localAddress", "(Ljava/io/FileDescriptor;)Ljava/net/InetSocketAddress;", nullptr, $PUBLIC | $STATIC, $staticMethod(Net, localAddress, $InetSocketAddress*, $FileDescriptor*), "java.io.IOException"},
	{"localInetAddress", "(Ljava/io/FileDescriptor;)Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, localInetAddress, $InetAddress*, $FileDescriptor*), "java.io.IOException"},
	{"localPort", "(Ljava/io/FileDescriptor;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, localPort, int32_t, $FileDescriptor*), "java.io.IOException"},
	{"poll", "(Ljava/io/FileDescriptor;IJ)I", nullptr, $STATIC | $NATIVE, $staticMethod(Net, poll, int32_t, $FileDescriptor*, int32_t, int64_t), "java.io.IOException"},
	{"pollConnect", "(Ljava/io/FileDescriptor;J)Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(Net, pollConnect, bool, $FileDescriptor*, int64_t), "java.io.IOException"},
	{"pollConnectNow", "(Ljava/io/FileDescriptor;)Z", nullptr, $STATIC, $staticMethod(Net, pollConnectNow, bool, $FileDescriptor*), "java.io.IOException"},
	{"pollNow", "(Ljava/io/FileDescriptor;I)I", nullptr, $STATIC, $staticMethod(Net, pollNow, int32_t, $FileDescriptor*, int32_t), "java.io.IOException"},
	{"pollconnValue", "()S", nullptr, $STATIC | $NATIVE, $staticMethod(Net, pollconnValue, int16_t)},
	{"pollerrValue", "()S", nullptr, $STATIC | $NATIVE, $staticMethod(Net, pollerrValue, int16_t)},
	{"pollhupValue", "()S", nullptr, $STATIC | $NATIVE, $staticMethod(Net, pollhupValue, int16_t)},
	{"pollinValue", "()S", nullptr, $STATIC | $NATIVE, $staticMethod(Net, pollinValue, int16_t)},
	{"pollnvalValue", "()S", nullptr, $STATIC | $NATIVE, $staticMethod(Net, pollnvalValue, int16_t)},
	{"polloutValue", "()S", nullptr, $STATIC | $NATIVE, $staticMethod(Net, polloutValue, int16_t)},
	{"remoteAddress", "(Ljava/io/FileDescriptor;)Ljava/net/InetSocketAddress;", nullptr, $STATIC, $staticMethod(Net, remoteAddress, $InetSocketAddress*, $FileDescriptor*), "java.io.IOException"},
	{"remoteInetAddress", "(Ljava/io/FileDescriptor;)Ljava/net/InetAddress;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, remoteInetAddress, $InetAddress*, $FileDescriptor*), "java.io.IOException"},
	{"remotePort", "(Ljava/io/FileDescriptor;)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, remotePort, int32_t, $FileDescriptor*), "java.io.IOException"},
	{"sendOOB", "(Ljava/io/FileDescriptor;B)I", nullptr, $STATIC | $NATIVE, $staticMethod(Net, sendOOB, int32_t, $FileDescriptor*, int8_t), "java.io.IOException"},
	{"serverSocket", "(Z)Ljava/io/FileDescriptor;", nullptr, $STATIC, $staticMethod(Net, serverSocket, $FileDescriptor*, bool)},
	{"serverSocket", "(Ljava/net/ProtocolFamily;Z)Ljava/io/FileDescriptor;", nullptr, $STATIC, $staticMethod(Net, serverSocket, $FileDescriptor*, $ProtocolFamily*, bool)},
	{"setIntOption0", "(Ljava/io/FileDescriptor;ZIIIZ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, setIntOption0, void, $FileDescriptor*, bool, int32_t, int32_t, int32_t, bool), "java.io.IOException"},
	{"setInterface4", "(Ljava/io/FileDescriptor;I)V", nullptr, $STATIC | $NATIVE, $staticMethod(Net, setInterface4, void, $FileDescriptor*, int32_t), "java.io.IOException"},
	{"setInterface6", "(Ljava/io/FileDescriptor;I)V", nullptr, $STATIC | $NATIVE, $staticMethod(Net, setInterface6, void, $FileDescriptor*, int32_t), "java.io.IOException"},
	{"setSocketOption", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption;Ljava/lang/Object;)V", "(Ljava/io/FileDescriptor;Ljava/net/SocketOption<*>;Ljava/lang/Object;)V", $STATIC, $staticMethod(Net, setSocketOption, void, $FileDescriptor*, $SocketOption*, Object$*), "java.io.IOException"},
	{"setSocketOption", "(Ljava/io/FileDescriptor;Ljava/net/ProtocolFamily;Ljava/net/SocketOption;Ljava/lang/Object;)V", "(Ljava/io/FileDescriptor;Ljava/net/ProtocolFamily;Ljava/net/SocketOption<*>;Ljava/lang/Object;)V", $STATIC, $staticMethod(Net, setSocketOption, void, $FileDescriptor*, $ProtocolFamily*, $SocketOption*, Object$*), "java.io.IOException"},
	{"shouldSetBothIPv4AndIPv6Options", "()Z", nullptr, $STATIC, $staticMethod(Net, shouldSetBothIPv4AndIPv6Options, bool)},
	{"shouldSetBothIPv4AndIPv6Options0", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, shouldSetBothIPv4AndIPv6Options0, bool)},
	{"shutdown", "(Ljava/io/FileDescriptor;I)V", nullptr, $STATIC | $NATIVE, $staticMethod(Net, shutdown, void, $FileDescriptor*, int32_t), "java.io.IOException"},
	{"socket", "(Z)Ljava/io/FileDescriptor;", nullptr, $STATIC, $staticMethod(Net, socket, $FileDescriptor*, bool), "java.io.IOException"},
	{"socket", "(Ljava/net/ProtocolFamily;Z)Ljava/io/FileDescriptor;", nullptr, $STATIC, $staticMethod(Net, socket, $FileDescriptor*, $ProtocolFamily*, bool), "java.io.IOException"},
	{"socket0", "(ZZZZ)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Net, socket0, int32_t, bool, bool, bool, bool)},
	{"translateException", "(Ljava/lang/Exception;Z)V", nullptr, $STATIC, $staticMethod(Net, translateException, void, $Exception*, bool), "java.io.IOException"},
	{"translateException", "(Ljava/lang/Exception;)V", nullptr, $STATIC, $staticMethod(Net, translateException, void, $Exception*), "java.io.IOException"},
	{"translateToSocketException", "(Ljava/lang/Exception;)V", nullptr, $STATIC, $staticMethod(Net, translateToSocketException, void, $Exception*), "java.net.SocketException"},
	{"unblock4", "(Ljava/io/FileDescriptor;III)V", nullptr, $STATIC, $staticMethod(Net, unblock4, void, $FileDescriptor*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"unblock6", "(Ljava/io/FileDescriptor;[BI[B)V", nullptr, $STATIC, $staticMethod(Net, unblock6, void, $FileDescriptor*, $bytes*, int32_t, $bytes*), "java.io.IOException"},
	{"useExclusiveBind", "()Z", nullptr, $STATIC, $staticMethod(Net, useExclusiveBind, bool)},
	{}
};

#define _METHOD_INDEX_accept 1
#define _METHOD_INDEX_available 5
#define _METHOD_INDEX_bind0 8
#define _METHOD_INDEX_blockOrUnblock4 11
#define _METHOD_INDEX_blockOrUnblock6 12
#define _METHOD_INDEX_canIPv6SocketJoinIPv4Group0 14
#define _METHOD_INDEX_canJoin6WithIPv4Group0 16
#define _METHOD_INDEX_canUseIPv6OptionsWithIPv4LocalAddress0 18
#define _METHOD_INDEX_connect0 24
#define _METHOD_INDEX_discardOOB 25
#define _METHOD_INDEX_getIntOption0 28
#define _METHOD_INDEX_getInterface4 29
#define _METHOD_INDEX_getInterface6 30
#define _METHOD_INDEX_initIDs 41
#define _METHOD_INDEX_isExclusiveBindAvailable 42
#define _METHOD_INDEX_isIPv6Available0 45
#define _METHOD_INDEX_isReusePortAvailable0 47
#define _METHOD_INDEX_joinOrDrop4 50
#define _METHOD_INDEX_joinOrDrop6 51
#define _METHOD_INDEX_listen 52
#define _METHOD_INDEX_localInetAddress 54
#define _METHOD_INDEX_localPort 55
#define _METHOD_INDEX_poll 56
#define _METHOD_INDEX_pollConnect 57
#define _METHOD_INDEX_pollconnValue 60
#define _METHOD_INDEX_pollerrValue 61
#define _METHOD_INDEX_pollhupValue 62
#define _METHOD_INDEX_pollinValue 63
#define _METHOD_INDEX_pollnvalValue 64
#define _METHOD_INDEX_polloutValue 65
#define _METHOD_INDEX_remoteInetAddress 67
#define _METHOD_INDEX_remotePort 68
#define _METHOD_INDEX_sendOOB 69
#define _METHOD_INDEX_setIntOption0 72
#define _METHOD_INDEX_setInterface4 73
#define _METHOD_INDEX_setInterface6 74
#define _METHOD_INDEX_shouldSetBothIPv4AndIPv6Options0 78
#define _METHOD_INDEX_shutdown 79
#define _METHOD_INDEX_socket0 82

$InnerClassInfo _Net_InnerClassesInfo_[] = {
	{"sun.nio.ch.Net$2", nullptr, nullptr, 0},
	{"sun.nio.ch.Net$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Net_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.Net",
	"java.lang.Object",
	nullptr,
	_Net_FieldInfo_,
	_Net_MethodInfo_,
	nullptr,
	nullptr,
	_Net_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.ch.Net$2,sun.nio.ch.Net$1"
};

$Object* allocate$Net($Class* clazz) {
	return $of($alloc(Net));
}

bool Net::$assertionsDisabled = false;
$ProtocolFamily* Net::UNSPEC = nullptr;
bool Net::exclusiveBind = false;
bool Net::fastLoopback = false;
$volatile(bool) Net::checkedIPv6 = false;
$volatile(bool) Net::isIPv6Available$ = false;
$volatile(bool) Net::checkedReusePort = false;
$volatile(bool) Net::isReusePortAvailable$ = false;
$InetAddress* Net::anyLocalInet4Address = nullptr;
$InetAddress* Net::anyLocalInet6Address = nullptr;
$InetAddress* Net::inet4LoopbackAddress$ = nullptr;
$InetAddress* Net::inet6LoopbackAddress$ = nullptr;
$ExtendedSocketOptions* Net::extendedOptions = nullptr;
int16_t Net::POLLIN = 0;
int16_t Net::POLLOUT = 0;
int16_t Net::POLLERR = 0;
int16_t Net::POLLHUP = 0;
int16_t Net::POLLNVAL = 0;
int16_t Net::POLLCONN = 0;

void Net::init$() {
}

bool Net::isIPv6Available() {
	$init(Net);
	if (!Net::checkedIPv6) {
		Net::isIPv6Available$ = isIPv6Available0();
		Net::checkedIPv6 = true;
	}
	return Net::isIPv6Available$;
}

bool Net::isReusePortAvailable() {
	$init(Net);
	if (!Net::checkedReusePort) {
		Net::isReusePortAvailable$ = isReusePortAvailable0();
		Net::checkedReusePort = true;
	}
	return Net::isReusePortAvailable$;
}

bool Net::useExclusiveBind() {
	$init(Net);
	return Net::exclusiveBind;
}

bool Net::shouldSetBothIPv4AndIPv6Options() {
	$init(Net);
	return shouldSetBothIPv4AndIPv6Options0();
}

bool Net::canIPv6SocketJoinIPv4Group() {
	$init(Net);
	return canIPv6SocketJoinIPv4Group0();
}

bool Net::canJoin6WithIPv4Group() {
	$init(Net);
	return canJoin6WithIPv4Group0();
}

bool Net::canUseIPv6OptionsWithIPv4LocalAddress() {
	$init(Net);
	return canUseIPv6OptionsWithIPv4LocalAddress0();
}

$InetSocketAddress* Net::checkAddress($SocketAddress* sa) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	if (sa == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($InetSocketAddress, sa))) {
		$throwNew($UnsupportedAddressTypeException);
	}
	$var($InetSocketAddress, isa, $cast($InetSocketAddress, sa));
	if ($nc(isa)->isUnresolved()) {
		$throwNew($UnresolvedAddressException);
	}
	$var($InetAddress, addr, $nc(isa)->getAddress());
	if (!($instanceOf($Inet4Address, addr) || $instanceOf($Inet6Address, addr))) {
		$throwNew($IllegalArgumentException, "Invalid address type"_s);
	}
	return isa;
}

$InetSocketAddress* Net::checkAddress($SocketAddress* sa, $ProtocolFamily* family) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, isa, checkAddress(sa));
	$init($StandardProtocolFamily);
	if ($equals(family, $StandardProtocolFamily::INET)) {
		$var($InetAddress, addr, $nc(isa)->getAddress());
		if (!($instanceOf($Inet4Address, addr))) {
			$throwNew($UnsupportedAddressTypeException);
		}
	}
	return isa;
}

$InetSocketAddress* Net::asInetSocketAddress($SocketAddress* sa) {
	$init(Net);
	if (!($instanceOf($InetSocketAddress, sa))) {
		$throwNew($UnsupportedAddressTypeException);
	}
	return $cast($InetSocketAddress, sa);
}

void Net::translateToSocketException($Exception* x) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SocketException, x)) {
		$throw($cast($SocketException, x));
	}
	$var($Exception, nx, x);
	if ($instanceOf($ClosedChannelException, x)) {
		$assign(nx, $new($SocketException, "Socket is closed"_s));
	} else if ($instanceOf($NotYetConnectedException, x)) {
		$assign(nx, $new($SocketException, "Socket is not connected"_s));
	} else if ($instanceOf($AlreadyBoundException, x)) {
		$assign(nx, $new($SocketException, "Already bound"_s));
	} else if ($instanceOf($NotYetBoundException, x)) {
		$assign(nx, $new($SocketException, "Socket is not bound yet"_s));
	} else if ($instanceOf($UnsupportedAddressTypeException, x)) {
		$assign(nx, $new($SocketException, "Unsupported address type"_s));
	} else if ($instanceOf($UnresolvedAddressException, x)) {
		$assign(nx, $new($SocketException, "Unresolved address"_s));
	} else if ($instanceOf($IOException, x)) {
		$assign(nx, $new($SocketException, $($nc(x)->getMessage())));
	}
	if (nx != x) {
		$nc(nx)->initCause(x);
	}
	if ($instanceOf($SocketException, nx)) {
		$throw($cast($SocketException, nx));
	} else if ($instanceOf($RuntimeException, nx)) {
		$throw($cast($RuntimeException, nx));
	} else {
		$throwNew($Error, "Untranslated exception"_s, nx);
	}
}

void Net::translateException($Exception* x, bool unknownHostForUnresolved) {
	$init(Net);
	if ($instanceOf($IOException, x)) {
		$throw($cast($IOException, x));
	}
	if (unknownHostForUnresolved && ($instanceOf($UnresolvedAddressException, x))) {
		$throwNew($UnknownHostException);
	}
	translateToSocketException(x);
}

void Net::translateException($Exception* x) {
	$init(Net);
	translateException(x, false);
}

$InetSocketAddress* Net::getRevealedLocalAddress($SocketAddress* sa) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, isa, $cast($InetSocketAddress, sa));
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (isa != nullptr && sm != nullptr) {
		try {
			sm->checkConnect($($nc($(isa->getAddress()))->getHostAddress()), -1);
		} catch ($SecurityException& e) {
			$assign(isa, getLoopbackAddress(isa->getPort()));
		}
	}
	return isa;
}

$String* Net::getRevealedLocalAddressAsString($SocketAddress* sa) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, isa, $cast($InetSocketAddress, sa));
	if ($System::getSecurityManager() == nullptr) {
		return $nc(isa)->toString();
	} else {
		return $nc($(getLoopbackAddress($nc(isa)->getPort())))->toString();
	}
}

$InetSocketAddress* Net::getLoopbackAddress(int32_t port) {
	$init(Net);
	return $new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), port);
}

$InetAddress* Net::inet4LoopbackAddress() {
	$init(Net);
	return Net::inet4LoopbackAddress$;
}

$InetAddress* Net::inet6LoopbackAddress() {
	$init(Net);
	return Net::inet6LoopbackAddress$;
}

$InetAddress* Net::anyLocalAddress($ProtocolFamily* family) {
	$init(Net);
	$init($StandardProtocolFamily);
	if ($equals(family, $StandardProtocolFamily::INET)) {
		return Net::anyLocalInet4Address;
	} else {
		if ($equals(family, $StandardProtocolFamily::INET6)) {
			return Net::anyLocalInet6Address;
		} else {
			$throwNew($IllegalArgumentException);
		}
	}
}

$Inet4Address* Net::anyInet4Address($NetworkInterface* interf) {
	$init(Net);
	$beforeCallerSensitive();
	return $cast($Inet4Address, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Net$2, interf))));
}

int32_t Net::inet4AsInt($InetAddress* ia) {
	$init(Net);
	if ($instanceOf($Inet4Address, ia)) {
		$var($bytes, addr, $nc(ia)->getAddress());
		int32_t address = (int32_t)($nc(addr)->get(3) & (uint32_t)255);
		address |= ((int32_t)((addr->get(2) << 8) & (uint32_t)0x0000FF00));
		address |= ((int32_t)((addr->get(1) << 16) & (uint32_t)0x00FF0000));
		address |= ((int32_t)((addr->get(0) << 24) & (uint32_t)(int32_t)0xFF000000));
		return address;
	}
	$throwNew($AssertionError, $of("Should not reach here"_s));
}

$InetAddress* Net::inet4FromInt(int32_t address) {
	$init(Net);
	$var($bytes, addr, $new($bytes, 4));
	addr->set(0, (int8_t)((int32_t)(((int32_t)((uint32_t)address >> 24)) & (uint32_t)255)));
	addr->set(1, (int8_t)((int32_t)(((int32_t)((uint32_t)address >> 16)) & (uint32_t)255)));
	addr->set(2, (int8_t)((int32_t)(((int32_t)((uint32_t)address >> 8)) & (uint32_t)255)));
	addr->set(3, (int8_t)((int32_t)(address & (uint32_t)255)));
	try {
		return $InetAddress::getByAddress(addr);
	} catch ($UnknownHostException& uhe) {
		$throwNew($AssertionError, $of("Should not reach here"_s));
	}
	$shouldNotReachHere();
}

$bytes* Net::inet6AsByteArray($InetAddress* ia) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Inet6Address, ia)) {
		return $nc(ia)->getAddress();
	}
	if ($instanceOf($Inet4Address, ia)) {
		$var($bytes, ip4address, $nc(ia)->getAddress());
		$var($bytes, address, $new($bytes, 16));
		address->set(10, (int8_t)255);
		address->set(11, (int8_t)255);
		address->set(12, $nc(ip4address)->get(0));
		address->set(13, ip4address->get(1));
		address->set(14, ip4address->get(2));
		address->set(15, ip4address->get(3));
		return address;
	}
	$throwNew($AssertionError, $of("Should not reach here"_s));
}

void Net::setSocketOption($FileDescriptor* fd, $SocketOption* name, Object$* value) {
	$init(Net);
	setSocketOption(fd, Net::UNSPEC, name, value);
}

void Net::setSocketOption($FileDescriptor* fd, $ProtocolFamily* family, $SocketOption* name, Object$* value$renamed) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	$var($Object, value, value$renamed);
	if (value == nullptr) {
		$throwNew($IllegalArgumentException, "Invalid option value"_s);
	}
	$Class* type = $nc(name)->type();
	if ($nc(Net::extendedOptions)->isOptionSupported(name)) {
		$nc(Net::extendedOptions)->setOption(fd, name, value);
		return;
	}
	$load($Integer);
	$load($Boolean);
	if (type != $Integer::class$ && type != $Boolean::class$) {
		$throwNew($AssertionError, $of("Should not reach here"_s));
	}
	$init($StandardSocketOptions);
	if (name == $StandardSocketOptions::SO_RCVBUF || name == $StandardSocketOptions::SO_SNDBUF) {
		int32_t i = $nc(($cast($Integer, value)))->intValue();
		if (i < 0) {
			$throwNew($IllegalArgumentException, "Invalid send/receive buffer size"_s);
		}
	}
	if (name == $StandardSocketOptions::SO_LINGER) {
		int32_t i = $nc(($cast($Integer, value)))->intValue();
		if (i < 0) {
			$assign(value, $Integer::valueOf(-1));
		}
		if (i > 0x0000FFFF) {
			$assign(value, $Integer::valueOf(0x0000FFFF));
		}
	}
	if (name == $StandardSocketOptions::IP_TOS) {
		int32_t i = $nc(($cast($Integer, value)))->intValue();
		if (i < 0 || i > 255) {
			$throwNew($IllegalArgumentException, "Invalid IP_TOS value"_s);
		}
	}
	if (name == $StandardSocketOptions::IP_MULTICAST_TTL) {
		int32_t i = $nc(($cast($Integer, value)))->intValue();
		if (i < 0 || i > 255) {
			$throwNew($IllegalArgumentException, "Invalid TTL/hop value"_s);
		}
	}
	$var($OptionKey, key, $SocketOptionRegistry::findOption(name, family));
	if (key == nullptr) {
		$throwNew($AssertionError, $of("Option not found"_s));
	}
	int32_t arg = 0;
	if (type == $Integer::class$) {
		arg = $nc(($cast($Integer, value)))->intValue();
	} else {
		bool b = $nc(($cast($Boolean, value)))->booleanValue();
		arg = (b) ? 1 : 0;
	}
	bool mayNeedConversion = (family == Net::UNSPEC);
	$init($StandardProtocolFamily);
	bool isIPv6 = ($equals(family, $StandardProtocolFamily::INET6));
	$var($FileDescriptor, var$0, fd);
	bool var$1 = mayNeedConversion;
	int32_t var$2 = $nc(key)->level();
	setIntOption0(var$0, var$1, var$2, key->name(), arg, isIPv6);
}

$Object* Net::getSocketOption($FileDescriptor* fd, $SocketOption* name) {
	$init(Net);
	return $of(getSocketOption(fd, Net::UNSPEC, name));
}

$Object* Net::getSocketOption($FileDescriptor* fd, $ProtocolFamily* family, $SocketOption* name) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	$Class* type = $nc(name)->type();
	if ($nc(Net::extendedOptions)->isOptionSupported(name)) {
		return $of($nc(Net::extendedOptions)->getOption(fd, name));
	}
	$load($Integer);
	$load($Boolean);
	if (type != $Integer::class$ && type != $Boolean::class$) {
		$throwNew($AssertionError, $of("Should not reach here"_s));
	}
	$var($OptionKey, key, $SocketOptionRegistry::findOption(name, family));
	if (key == nullptr) {
		$throwNew($AssertionError, $of("Option not found"_s));
	}
	bool mayNeedConversion = (family == Net::UNSPEC);
	$var($FileDescriptor, var$0, fd);
	bool var$1 = mayNeedConversion;
	int32_t var$2 = $nc(key)->level();
	int32_t value = getIntOption0(var$0, var$1, var$2, key->name());
	if (type == $Integer::class$) {
		return $of($Integer::valueOf(value));
	} else {
		$init($Boolean);
		return $of((value == 0) ? $Boolean::FALSE : $Boolean::TRUE);
	}
}

bool Net::isFastTcpLoopbackRequested() {
	$init(Net);
	$var($String, loopbackProp, $GetPropertyAction::privilegedGetProperty("jdk.net.useFastTcpLoopback"_s, "false"_s));
	return $nc(loopbackProp)->isEmpty() ? true : $Boolean::parseBoolean(loopbackProp);
}

bool Net::isIPv6Available0() {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, isIPv6Available0, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool Net::isReusePortAvailable0() {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, isReusePortAvailable0, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t Net::isExclusiveBindAvailable() {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, isExclusiveBindAvailable, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool Net::shouldSetBothIPv4AndIPv6Options0() {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, shouldSetBothIPv4AndIPv6Options0, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool Net::canIPv6SocketJoinIPv4Group0() {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, canIPv6SocketJoinIPv4Group0, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool Net::canJoin6WithIPv4Group0() {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, canJoin6WithIPv4Group0, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool Net::canUseIPv6OptionsWithIPv4LocalAddress0() {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, canUseIPv6OptionsWithIPv4LocalAddress0, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$FileDescriptor* Net::socket(bool stream) {
	$init(Net);
	return socket(Net::UNSPEC, stream);
}

$FileDescriptor* Net::socket($ProtocolFamily* family, bool stream) {
	$init(Net);
	$init($StandardProtocolFamily);
	bool preferIPv6 = isIPv6Available() && (!$equals(family, $StandardProtocolFamily::INET));
	return $IOUtil::newFD(socket0(preferIPv6, stream, false, Net::fastLoopback));
}

$FileDescriptor* Net::serverSocket(bool stream) {
	$init(Net);
	return serverSocket(Net::UNSPEC, stream);
}

$FileDescriptor* Net::serverSocket($ProtocolFamily* family, bool stream) {
	$init(Net);
	$init($StandardProtocolFamily);
	bool preferIPv6 = isIPv6Available() && (!$equals(family, $StandardProtocolFamily::INET));
	return $IOUtil::newFD(socket0(preferIPv6, stream, true, Net::fastLoopback));
}

int32_t Net::socket0(bool preferIPv6, bool stream, bool reuse, bool fastLoopback) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, socket0, int32_t, bool preferIPv6, bool stream, bool reuse, bool fastLoopback);
	$ret = $invokeNativeStatic(preferIPv6, stream, reuse, fastLoopback);
	$finishNativeStatic();
	return $ret;
}

void Net::bind($FileDescriptor* fd, $InetAddress* addr, int32_t port) {
	$init(Net);
	bind(Net::UNSPEC, fd, addr, port);
}

void Net::bind($ProtocolFamily* family, $FileDescriptor* fd, $InetAddress* addr$renamed, int32_t port) {
	$init(Net);
	$var($InetAddress, addr, addr$renamed);
	$init($StandardProtocolFamily);
	bool preferIPv6 = isIPv6Available() && (!$equals(family, $StandardProtocolFamily::INET));
	if ($nc(addr)->isLinkLocalAddress()) {
		$assign(addr, $IPAddressUtil::toScopedAddress(addr));
	}
	bind0(fd, preferIPv6, Net::exclusiveBind, addr, port);
}

void Net::bind0($FileDescriptor* fd, bool preferIPv6, bool useExclBind, $InetAddress* addr, int32_t port) {
	$init(Net);
	$prepareNativeStatic(Net, bind0, void, $FileDescriptor* fd, bool preferIPv6, bool useExclBind, $InetAddress* addr, int32_t port);
	$invokeNativeStatic(fd, preferIPv6, useExclBind, addr, port);
	$finishNativeStatic();
}

void Net::listen($FileDescriptor* fd, int32_t backlog) {
	$init(Net);
	$prepareNativeStatic(Net, listen, void, $FileDescriptor* fd, int32_t backlog);
	$invokeNativeStatic(fd, backlog);
	$finishNativeStatic();
}

int32_t Net::connect($FileDescriptor* fd, $InetAddress* remote, int32_t remotePort) {
	$init(Net);
	return connect(Net::UNSPEC, fd, remote, remotePort);
}

int32_t Net::connect($ProtocolFamily* family, $FileDescriptor* fd, $InetAddress* remote$renamed, int32_t remotePort) {
	$init(Net);
	$var($InetAddress, remote, remote$renamed);
	if ($nc(remote)->isLinkLocalAddress()) {
		$assign(remote, $IPAddressUtil::toScopedAddress(remote));
	}
	$init($StandardProtocolFamily);
	bool preferIPv6 = isIPv6Available() && (!$equals(family, $StandardProtocolFamily::INET));
	return connect0(preferIPv6, fd, remote, remotePort);
}

int32_t Net::connect($ProtocolFamily* family, $FileDescriptor* fd, $SocketAddress* remote) {
	$init(Net);
	$useLocalCurrentObjectStackCache();
	$var($InetSocketAddress, isa, $cast($InetSocketAddress, remote));
	$var($ProtocolFamily, var$0, family);
	$var($FileDescriptor, var$1, fd);
	$var($InetAddress, var$2, $nc(isa)->getAddress());
	return connect(var$0, var$1, var$2, isa->getPort());
}

int32_t Net::connect0(bool preferIPv6, $FileDescriptor* fd, $InetAddress* remote, int32_t remotePort) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, connect0, int32_t, bool preferIPv6, $FileDescriptor* fd, $InetAddress* remote, int32_t remotePort);
	$ret = $invokeNativeStatic(preferIPv6, fd, remote, remotePort);
	$finishNativeStatic();
	return $ret;
}

int32_t Net::accept($FileDescriptor* fd, $FileDescriptor* newfd, $InetSocketAddressArray* isaa) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, accept, int32_t, $FileDescriptor* fd, $FileDescriptor* newfd, $InetSocketAddressArray* isaa);
	$ret = $invokeNativeStatic(fd, newfd, isaa);
	$finishNativeStatic();
	return $ret;
}

void Net::shutdown($FileDescriptor* fd, int32_t how) {
	$init(Net);
	$prepareNativeStatic(Net, shutdown, void, $FileDescriptor* fd, int32_t how);
	$invokeNativeStatic(fd, how);
	$finishNativeStatic();
}

int32_t Net::localPort($FileDescriptor* fd) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, localPort, int32_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

$InetAddress* Net::localInetAddress($FileDescriptor* fd) {
	$init(Net);
	$var($InetAddress, $ret, nullptr);
	$prepareNativeStatic(Net, localInetAddress, $InetAddress*, $FileDescriptor* fd);
	$assign($ret, $invokeNativeStaticObject(fd));
	$finishNativeStatic();
	return $ret;
}

$InetSocketAddress* Net::localAddress($FileDescriptor* fd) {
	$init(Net);
	$var($InetAddress, var$0, localInetAddress(fd));
	return $new($InetSocketAddress, var$0, localPort(fd));
}

int32_t Net::remotePort($FileDescriptor* fd) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, remotePort, int32_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

$InetAddress* Net::remoteInetAddress($FileDescriptor* fd) {
	$init(Net);
	$var($InetAddress, $ret, nullptr);
	$prepareNativeStatic(Net, remoteInetAddress, $InetAddress*, $FileDescriptor* fd);
	$assign($ret, $invokeNativeStaticObject(fd));
	$finishNativeStatic();
	return $ret;
}

$InetSocketAddress* Net::remoteAddress($FileDescriptor* fd) {
	$init(Net);
	$var($InetAddress, var$0, remoteInetAddress(fd));
	return $new($InetSocketAddress, var$0, remotePort(fd));
}

int32_t Net::getIntOption0($FileDescriptor* fd, bool mayNeedConversion, int32_t level, int32_t opt) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, getIntOption0, int32_t, $FileDescriptor* fd, bool mayNeedConversion, int32_t level, int32_t opt);
	$ret = $invokeNativeStatic(fd, mayNeedConversion, level, opt);
	$finishNativeStatic();
	return $ret;
}

void Net::setIntOption0($FileDescriptor* fd, bool mayNeedConversion, int32_t level, int32_t opt, int32_t arg, bool isIPv6) {
	$init(Net);
	$prepareNativeStatic(Net, setIntOption0, void, $FileDescriptor* fd, bool mayNeedConversion, int32_t level, int32_t opt, int32_t arg, bool isIPv6);
	$invokeNativeStatic(fd, mayNeedConversion, level, opt, arg, isIPv6);
	$finishNativeStatic();
}

int32_t Net::poll($FileDescriptor* fd, int32_t events, int64_t timeout) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, poll, int32_t, $FileDescriptor* fd, int32_t events, int64_t timeout);
	$ret = $invokeNativeStatic(fd, events, timeout);
	$finishNativeStatic();
	return $ret;
}

int32_t Net::pollNow($FileDescriptor* fd, int32_t events) {
	$init(Net);
	return poll(fd, events, 0);
}

bool Net::pollConnect($FileDescriptor* fd, int64_t timeout) {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, pollConnect, bool, $FileDescriptor* fd, int64_t timeout);
	$ret = $invokeNativeStatic(fd, timeout);
	$finishNativeStatic();
	return $ret;
}

bool Net::pollConnectNow($FileDescriptor* fd) {
	$init(Net);
	return pollConnect(fd, 0);
}

int32_t Net::available($FileDescriptor* fd) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, available, int32_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int32_t Net::sendOOB($FileDescriptor* fd, int8_t data) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, sendOOB, int32_t, $FileDescriptor* fd, int8_t data);
	$ret = $invokeNativeStatic(fd, data);
	$finishNativeStatic();
	return $ret;
}

bool Net::discardOOB($FileDescriptor* fd) {
	$init(Net);
	bool $ret = false;
	$prepareNativeStatic(Net, discardOOB, bool, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

int32_t Net::join4($FileDescriptor* fd, int32_t group, int32_t interf, int32_t source) {
	$init(Net);
	return joinOrDrop4(true, fd, group, interf, source);
}

void Net::drop4($FileDescriptor* fd, int32_t group, int32_t interf, int32_t source) {
	$init(Net);
	joinOrDrop4(false, fd, group, interf, source);
}

int32_t Net::joinOrDrop4(bool join, $FileDescriptor* fd, int32_t group, int32_t interf, int32_t source) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, joinOrDrop4, int32_t, bool join, $FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	$ret = $invokeNativeStatic(join, fd, group, interf, source);
	$finishNativeStatic();
	return $ret;
}

int32_t Net::block4($FileDescriptor* fd, int32_t group, int32_t interf, int32_t source) {
	$init(Net);
	return blockOrUnblock4(true, fd, group, interf, source);
}

void Net::unblock4($FileDescriptor* fd, int32_t group, int32_t interf, int32_t source) {
	$init(Net);
	blockOrUnblock4(false, fd, group, interf, source);
}

int32_t Net::blockOrUnblock4(bool block, $FileDescriptor* fd, int32_t group, int32_t interf, int32_t source) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, blockOrUnblock4, int32_t, bool block, $FileDescriptor* fd, int32_t group, int32_t interf, int32_t source);
	$ret = $invokeNativeStatic(block, fd, group, interf, source);
	$finishNativeStatic();
	return $ret;
}

int32_t Net::join6($FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source) {
	$init(Net);
	return joinOrDrop6(true, fd, group, index, source);
}

void Net::drop6($FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source) {
	$init(Net);
	joinOrDrop6(false, fd, group, index, source);
}

int32_t Net::joinOrDrop6(bool join, $FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, joinOrDrop6, int32_t, bool join, $FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	$ret = $invokeNativeStatic(join, fd, group, index, source);
	$finishNativeStatic();
	return $ret;
}

int32_t Net::block6($FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source) {
	$init(Net);
	return blockOrUnblock6(true, fd, group, index, source);
}

void Net::unblock6($FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source) {
	$init(Net);
	blockOrUnblock6(false, fd, group, index, source);
}

int32_t Net::blockOrUnblock6(bool block, $FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, blockOrUnblock6, int32_t, bool block, $FileDescriptor* fd, $bytes* group, int32_t index, $bytes* source);
	$ret = $invokeNativeStatic(block, fd, group, index, source);
	$finishNativeStatic();
	return $ret;
}

void Net::setInterface4($FileDescriptor* fd, int32_t interf) {
	$init(Net);
	$prepareNativeStatic(Net, setInterface4, void, $FileDescriptor* fd, int32_t interf);
	$invokeNativeStatic(fd, interf);
	$finishNativeStatic();
}

int32_t Net::getInterface4($FileDescriptor* fd) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, getInterface4, int32_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

void Net::setInterface6($FileDescriptor* fd, int32_t index) {
	$init(Net);
	$prepareNativeStatic(Net, setInterface6, void, $FileDescriptor* fd, int32_t index);
	$invokeNativeStatic(fd, index);
	$finishNativeStatic();
}

int32_t Net::getInterface6($FileDescriptor* fd) {
	$init(Net);
	int32_t $ret = 0;
	$prepareNativeStatic(Net, getInterface6, int32_t, $FileDescriptor* fd);
	$ret = $invokeNativeStatic(fd);
	$finishNativeStatic();
	return $ret;
}

void Net::initIDs() {
	$init(Net);
	$prepareNativeStatic(Net, initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

int16_t Net::pollinValue() {
	$init(Net);
	int16_t $ret = 0;
	$prepareNativeStatic(Net, pollinValue, int16_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int16_t Net::polloutValue() {
	$init(Net);
	int16_t $ret = 0;
	$prepareNativeStatic(Net, polloutValue, int16_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int16_t Net::pollerrValue() {
	$init(Net);
	int16_t $ret = 0;
	$prepareNativeStatic(Net, pollerrValue, int16_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int16_t Net::pollhupValue() {
	$init(Net);
	int16_t $ret = 0;
	$prepareNativeStatic(Net, pollhupValue, int16_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int16_t Net::pollnvalValue() {
	$init(Net);
	int16_t $ret = 0;
	$prepareNativeStatic(Net, pollnvalValue, int16_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int16_t Net::pollconnValue() {
	$init(Net);
	int16_t $ret = 0;
	$prepareNativeStatic(Net, pollconnValue, int16_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void clinit$Net($Class* class$) {
	$useLocalCurrentObjectStackCache();
	Net::$assertionsDisabled = !Net::class$->desiredAssertionStatus();
	$assignStatic(Net::UNSPEC, $new($Net$1));
	{
		try {
			$assignStatic(Net::anyLocalInet4Address, Net::inet4FromInt(0));
			if (!Net::$assertionsDisabled && !($instanceOf($Inet4Address, Net::anyLocalInet4Address) && $nc(Net::anyLocalInet4Address)->isAnyLocalAddress())) {
				$throwNew($AssertionError);
			}
			$assignStatic(Net::anyLocalInet6Address, $InetAddress::getByAddress($$new($bytes, 16)));
			if (!Net::$assertionsDisabled && !($instanceOf($Inet6Address, Net::anyLocalInet6Address) && $nc(Net::anyLocalInet6Address)->isAnyLocalAddress())) {
				$throwNew($AssertionError);
			}
			$assignStatic(Net::inet4LoopbackAddress$, Net::inet4FromInt(0x7F000001));
			if (!Net::$assertionsDisabled && !($instanceOf($Inet4Address, Net::inet4LoopbackAddress$) && $nc(Net::inet4LoopbackAddress$)->isLoopbackAddress())) {
				$throwNew($AssertionError);
			}
			$var($bytes, bytes, $new($bytes, 16));
			bytes->set(15, (int8_t)1);
			$assignStatic(Net::inet6LoopbackAddress$, $InetAddress::getByAddress(bytes));
			if (!Net::$assertionsDisabled && !($instanceOf($Inet6Address, Net::inet6LoopbackAddress$) && $nc(Net::inet6LoopbackAddress$)->isLoopbackAddress())) {
				$throwNew($AssertionError);
			}
		} catch ($Exception& e) {
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		}
	}
	$assignStatic(Net::extendedOptions, $ExtendedSocketOptions::getInstance());
	{
		$IOUtil::load();
		Net::initIDs();
		Net::POLLIN = Net::pollinValue();
		Net::POLLOUT = Net::polloutValue();
		Net::POLLERR = Net::pollerrValue();
		Net::POLLHUP = Net::pollhupValue();
		Net::POLLNVAL = Net::pollnvalValue();
		Net::POLLCONN = Net::pollconnValue();
	}
	{
		int32_t availLevel = Net::isExclusiveBindAvailable();
		if (availLevel >= 0) {
			$var($String, exclBindProp, $GetPropertyAction::privilegedGetProperty("sun.net.useExclusiveBind"_s));
			if (exclBindProp != nullptr) {
				Net::exclusiveBind = exclBindProp->isEmpty() ? true : $Boolean::parseBoolean(exclBindProp);
			} else if (availLevel == 1) {
				Net::exclusiveBind = true;
			} else {
				Net::exclusiveBind = false;
			}
		} else {
			Net::exclusiveBind = false;
		}
		Net::fastLoopback = Net::isFastTcpLoopbackRequested();
	}
}

Net::Net() {
}

$Class* Net::load$($String* name, bool initialize) {
	$loadClass(Net, name, initialize, &_Net_ClassInfo_, clinit$Net, allocate$Net);
	return class$;
}

$Class* Net::class$ = nullptr;

		} // ch
	} // nio
} // sun