#include <sun/security/util/SecurityConstants.h>

#include <java/lang/RuntimePermission.h>
#include <java/lang/reflect/ReflectPermission.h>
#include <java/net/NetPermission.h>
#include <java/net/SocketPermission.h>
#include <java/security/AllPermission.h>
#include <java/security/SecurityPermission.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ACCESS_PERMISSION
#undef ALL_PERMISSION
#undef CHECK_MEMBER_ACCESS_PERMISSION
#undef CREATE_ACC_PERMISSION
#undef CREATE_CLASSLOADER_PERMISSION
#undef FILE_DELETE_ACTION
#undef FILE_EXECUTE_ACTION
#undef FILE_READLINK_ACTION
#undef FILE_READ_ACTION
#undef FILE_WRITE_ACTION
#undef GET_CLASSLOADER_PERMISSION
#undef GET_COMBINER_PERMISSION
#undef GET_COOKIEHANDLER_PERMISSION
#undef GET_PD_PERMISSION
#undef GET_POLICY_PERMISSION
#undef GET_PROXYSELECTOR_PERMISSION
#undef GET_RESPONSECACHE_PERMISSION
#undef GET_STACK_TRACE_PERMISSION
#undef LOCAL_LISTEN_PERMISSION
#undef MODIFY_THREADGROUP_PERMISSION
#undef MODIFY_THREAD_PERMISSION
#undef PROPERTY_READ_ACTION
#undef PROPERTY_RW_ACTION
#undef PROPERTY_WRITE_ACTION
#undef PROVIDER_VER
#undef REFLECTION_FACTORY_ACCESS_PERMISSION
#undef SET_COOKIEHANDLER_PERMISSION
#undef SET_PROXYSELECTOR_PERMISSION
#undef SET_RESPONSECACHE_PERMISSION
#undef SET_SOCKETIMPL_PERMISSION
#undef SOCKET_ACCEPT_ACTION
#undef SOCKET_CONNECT_ACCEPT_ACTION
#undef SOCKET_CONNECT_ACTION
#undef SOCKET_LISTEN_ACTION
#undef SOCKET_RESOLVE_ACTION
#undef SPECIFY_HANDLER_PERMISSION
#undef STOP_THREAD_PERMISSION
#undef SUBCLASS_IMPLEMENTATION_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $ReflectPermission = ::java::lang::reflect::ReflectPermission;
using $NetPermission = ::java::net::NetPermission;
using $SocketPermission = ::java::net::SocketPermission;
using $AllPermission = ::java::security::AllPermission;
using $SecurityPermission = ::java::security::SecurityPermission;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _SecurityConstants_FieldInfo_[] = {
	{"FILE_DELETE_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, FILE_DELETE_ACTION)},
	{"FILE_EXECUTE_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, FILE_EXECUTE_ACTION)},
	{"FILE_READ_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, FILE_READ_ACTION)},
	{"FILE_WRITE_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, FILE_WRITE_ACTION)},
	{"FILE_READLINK_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, FILE_READLINK_ACTION)},
	{"SOCKET_RESOLVE_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SOCKET_RESOLVE_ACTION)},
	{"SOCKET_CONNECT_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SOCKET_CONNECT_ACTION)},
	{"SOCKET_LISTEN_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SOCKET_LISTEN_ACTION)},
	{"SOCKET_ACCEPT_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SOCKET_ACCEPT_ACTION)},
	{"SOCKET_CONNECT_ACCEPT_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SOCKET_CONNECT_ACCEPT_ACTION)},
	{"PROPERTY_RW_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, PROPERTY_RW_ACTION)},
	{"PROPERTY_READ_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, PROPERTY_READ_ACTION)},
	{"PROPERTY_WRITE_ACTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, PROPERTY_WRITE_ACTION)},
	{"ALL_PERMISSION", "Ljava/security/AllPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, ALL_PERMISSION)},
	{"SPECIFY_HANDLER_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SPECIFY_HANDLER_PERMISSION)},
	{"SET_PROXYSELECTOR_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SET_PROXYSELECTOR_PERMISSION)},
	{"GET_PROXYSELECTOR_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_PROXYSELECTOR_PERMISSION)},
	{"SET_COOKIEHANDLER_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SET_COOKIEHANDLER_PERMISSION)},
	{"GET_COOKIEHANDLER_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_COOKIEHANDLER_PERMISSION)},
	{"SET_RESPONSECACHE_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SET_RESPONSECACHE_PERMISSION)},
	{"GET_RESPONSECACHE_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_RESPONSECACHE_PERMISSION)},
	{"SET_SOCKETIMPL_PERMISSION", "Ljava/net/NetPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SET_SOCKETIMPL_PERMISSION)},
	{"CREATE_CLASSLOADER_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, CREATE_CLASSLOADER_PERMISSION)},
	{"CHECK_MEMBER_ACCESS_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, CHECK_MEMBER_ACCESS_PERMISSION)},
	{"MODIFY_THREAD_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, MODIFY_THREAD_PERMISSION)},
	{"MODIFY_THREADGROUP_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, MODIFY_THREADGROUP_PERMISSION)},
	{"GET_PD_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_PD_PERMISSION)},
	{"GET_CLASSLOADER_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_CLASSLOADER_PERMISSION)},
	{"STOP_THREAD_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, STOP_THREAD_PERMISSION)},
	{"GET_STACK_TRACE_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_STACK_TRACE_PERMISSION)},
	{"SUBCLASS_IMPLEMENTATION_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, SUBCLASS_IMPLEMENTATION_PERMISSION)},
	{"CREATE_ACC_PERMISSION", "Ljava/security/SecurityPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, CREATE_ACC_PERMISSION)},
	{"GET_COMBINER_PERMISSION", "Ljava/security/SecurityPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_COMBINER_PERMISSION)},
	{"GET_POLICY_PERMISSION", "Ljava/security/SecurityPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, GET_POLICY_PERMISSION)},
	{"LOCAL_LISTEN_PERMISSION", "Ljava/net/SocketPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, LOCAL_LISTEN_PERMISSION)},
	{"PROVIDER_VER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, PROVIDER_VER)},
	{"ACCESS_PERMISSION", "Ljava/lang/reflect/ReflectPermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, ACCESS_PERMISSION)},
	{"REFLECTION_FACTORY_ACCESS_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SecurityConstants, REFLECTION_FACTORY_ACCESS_PERMISSION)},
	{}
};

$MethodInfo _SecurityConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SecurityConstants::*)()>(&SecurityConstants::init$))},
	{}
};

$ClassInfo _SecurityConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.util.SecurityConstants",
	"java.lang.Object",
	nullptr,
	_SecurityConstants_FieldInfo_,
	_SecurityConstants_MethodInfo_
};

$Object* allocate$SecurityConstants($Class* clazz) {
	return $of($alloc(SecurityConstants));
}

$String* SecurityConstants::FILE_DELETE_ACTION = nullptr;
$String* SecurityConstants::FILE_EXECUTE_ACTION = nullptr;
$String* SecurityConstants::FILE_READ_ACTION = nullptr;
$String* SecurityConstants::FILE_WRITE_ACTION = nullptr;
$String* SecurityConstants::FILE_READLINK_ACTION = nullptr;
$String* SecurityConstants::SOCKET_RESOLVE_ACTION = nullptr;
$String* SecurityConstants::SOCKET_CONNECT_ACTION = nullptr;
$String* SecurityConstants::SOCKET_LISTEN_ACTION = nullptr;
$String* SecurityConstants::SOCKET_ACCEPT_ACTION = nullptr;
$String* SecurityConstants::SOCKET_CONNECT_ACCEPT_ACTION = nullptr;
$String* SecurityConstants::PROPERTY_RW_ACTION = nullptr;
$String* SecurityConstants::PROPERTY_READ_ACTION = nullptr;
$String* SecurityConstants::PROPERTY_WRITE_ACTION = nullptr;
$AllPermission* SecurityConstants::ALL_PERMISSION = nullptr;
$NetPermission* SecurityConstants::SPECIFY_HANDLER_PERMISSION = nullptr;
$NetPermission* SecurityConstants::SET_PROXYSELECTOR_PERMISSION = nullptr;
$NetPermission* SecurityConstants::GET_PROXYSELECTOR_PERMISSION = nullptr;
$NetPermission* SecurityConstants::SET_COOKIEHANDLER_PERMISSION = nullptr;
$NetPermission* SecurityConstants::GET_COOKIEHANDLER_PERMISSION = nullptr;
$NetPermission* SecurityConstants::SET_RESPONSECACHE_PERMISSION = nullptr;
$NetPermission* SecurityConstants::GET_RESPONSECACHE_PERMISSION = nullptr;
$NetPermission* SecurityConstants::SET_SOCKETIMPL_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::CREATE_CLASSLOADER_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::CHECK_MEMBER_ACCESS_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::MODIFY_THREAD_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::MODIFY_THREADGROUP_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::GET_PD_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::GET_CLASSLOADER_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::STOP_THREAD_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::GET_STACK_TRACE_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::SUBCLASS_IMPLEMENTATION_PERMISSION = nullptr;
$SecurityPermission* SecurityConstants::CREATE_ACC_PERMISSION = nullptr;
$SecurityPermission* SecurityConstants::GET_COMBINER_PERMISSION = nullptr;
$SecurityPermission* SecurityConstants::GET_POLICY_PERMISSION = nullptr;
$SocketPermission* SecurityConstants::LOCAL_LISTEN_PERMISSION = nullptr;
$String* SecurityConstants::PROVIDER_VER = nullptr;
$ReflectPermission* SecurityConstants::ACCESS_PERMISSION = nullptr;
$RuntimePermission* SecurityConstants::REFLECTION_FACTORY_ACCESS_PERMISSION = nullptr;

void SecurityConstants::init$() {
}

void clinit$SecurityConstants($Class* class$) {
	$assignStatic(SecurityConstants::FILE_DELETE_ACTION, "delete"_s);
	$assignStatic(SecurityConstants::FILE_EXECUTE_ACTION, "execute"_s);
	$assignStatic(SecurityConstants::FILE_READ_ACTION, "read"_s);
	$assignStatic(SecurityConstants::FILE_WRITE_ACTION, "write"_s);
	$assignStatic(SecurityConstants::FILE_READLINK_ACTION, "readlink"_s);
	$assignStatic(SecurityConstants::SOCKET_RESOLVE_ACTION, "resolve"_s);
	$assignStatic(SecurityConstants::SOCKET_CONNECT_ACTION, "connect"_s);
	$assignStatic(SecurityConstants::SOCKET_LISTEN_ACTION, "listen"_s);
	$assignStatic(SecurityConstants::SOCKET_ACCEPT_ACTION, "accept"_s);
	$assignStatic(SecurityConstants::SOCKET_CONNECT_ACCEPT_ACTION, "connect,accept"_s);
	$assignStatic(SecurityConstants::PROPERTY_RW_ACTION, "read,write"_s);
	$assignStatic(SecurityConstants::PROPERTY_READ_ACTION, "read"_s);
	$assignStatic(SecurityConstants::PROPERTY_WRITE_ACTION, "write"_s);
	$assignStatic(SecurityConstants::ALL_PERMISSION, $new($AllPermission));
	$assignStatic(SecurityConstants::SPECIFY_HANDLER_PERMISSION, $new($NetPermission, "specifyStreamHandler"_s));
	$assignStatic(SecurityConstants::SET_PROXYSELECTOR_PERMISSION, $new($NetPermission, "setProxySelector"_s));
	$assignStatic(SecurityConstants::GET_PROXYSELECTOR_PERMISSION, $new($NetPermission, "getProxySelector"_s));
	$assignStatic(SecurityConstants::SET_COOKIEHANDLER_PERMISSION, $new($NetPermission, "setCookieHandler"_s));
	$assignStatic(SecurityConstants::GET_COOKIEHANDLER_PERMISSION, $new($NetPermission, "getCookieHandler"_s));
	$assignStatic(SecurityConstants::SET_RESPONSECACHE_PERMISSION, $new($NetPermission, "setResponseCache"_s));
	$assignStatic(SecurityConstants::GET_RESPONSECACHE_PERMISSION, $new($NetPermission, "getResponseCache"_s));
	$assignStatic(SecurityConstants::SET_SOCKETIMPL_PERMISSION, $new($NetPermission, "setSocketImpl"_s));
	$assignStatic(SecurityConstants::CREATE_CLASSLOADER_PERMISSION, $new($RuntimePermission, "createClassLoader"_s));
	$assignStatic(SecurityConstants::CHECK_MEMBER_ACCESS_PERMISSION, $new($RuntimePermission, "accessDeclaredMembers"_s));
	$assignStatic(SecurityConstants::MODIFY_THREAD_PERMISSION, $new($RuntimePermission, "modifyThread"_s));
	$assignStatic(SecurityConstants::MODIFY_THREADGROUP_PERMISSION, $new($RuntimePermission, "modifyThreadGroup"_s));
	$assignStatic(SecurityConstants::GET_PD_PERMISSION, $new($RuntimePermission, "getProtectionDomain"_s));
	$assignStatic(SecurityConstants::GET_CLASSLOADER_PERMISSION, $new($RuntimePermission, "getClassLoader"_s));
	$assignStatic(SecurityConstants::STOP_THREAD_PERMISSION, $new($RuntimePermission, "stopThread"_s));
	$assignStatic(SecurityConstants::GET_STACK_TRACE_PERMISSION, $new($RuntimePermission, "getStackTrace"_s));
	$assignStatic(SecurityConstants::SUBCLASS_IMPLEMENTATION_PERMISSION, $new($RuntimePermission, "enableContextClassLoaderOverride"_s));
	$assignStatic(SecurityConstants::CREATE_ACC_PERMISSION, $new($SecurityPermission, "createAccessControlContext"_s));
	$assignStatic(SecurityConstants::GET_COMBINER_PERMISSION, $new($SecurityPermission, "getDomainCombiner"_s));
	$assignStatic(SecurityConstants::GET_POLICY_PERMISSION, $new($SecurityPermission, "getPolicy"_s));
	$assignStatic(SecurityConstants::LOCAL_LISTEN_PERMISSION, $new($SocketPermission, "localhost:0"_s, SecurityConstants::SOCKET_LISTEN_ACTION));
	$assignStatic(SecurityConstants::PROVIDER_VER, $GetPropertyAction::privilegedGetProperty("java.specification.version"_s));
	$assignStatic(SecurityConstants::ACCESS_PERMISSION, $new($ReflectPermission, "suppressAccessChecks"_s));
	$assignStatic(SecurityConstants::REFLECTION_FACTORY_ACCESS_PERMISSION, $new($RuntimePermission, "reflectionFactoryAccess"_s));
}

SecurityConstants::SecurityConstants() {
}

$Class* SecurityConstants::load$($String* name, bool initialize) {
	$loadClass(SecurityConstants, name, initialize, &_SecurityConstants_ClassInfo_, clinit$SecurityConstants, allocate$SecurityConstants);
	return class$;
}

$Class* SecurityConstants::class$ = nullptr;

		} // util
	} // security
} // sun