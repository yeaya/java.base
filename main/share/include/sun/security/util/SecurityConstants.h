#ifndef _sun_security_util_SecurityConstants_h_
#define _sun_security_util_SecurityConstants_h_
//$ class sun.security.util.SecurityConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACCESS_PERMISSION")
#undef ACCESS_PERMISSION
#pragma push_macro("ALL_PERMISSION")
#undef ALL_PERMISSION
#pragma push_macro("CHECK_MEMBER_ACCESS_PERMISSION")
#undef CHECK_MEMBER_ACCESS_PERMISSION
#pragma push_macro("CREATE_ACC_PERMISSION")
#undef CREATE_ACC_PERMISSION
#pragma push_macro("CREATE_CLASSLOADER_PERMISSION")
#undef CREATE_CLASSLOADER_PERMISSION
#pragma push_macro("FILE_DELETE_ACTION")
#undef FILE_DELETE_ACTION
#pragma push_macro("FILE_EXECUTE_ACTION")
#undef FILE_EXECUTE_ACTION
#pragma push_macro("FILE_READLINK_ACTION")
#undef FILE_READLINK_ACTION
#pragma push_macro("FILE_READ_ACTION")
#undef FILE_READ_ACTION
#pragma push_macro("FILE_WRITE_ACTION")
#undef FILE_WRITE_ACTION
#pragma push_macro("GET_CLASSLOADER_PERMISSION")
#undef GET_CLASSLOADER_PERMISSION
#pragma push_macro("GET_COMBINER_PERMISSION")
#undef GET_COMBINER_PERMISSION
#pragma push_macro("GET_COOKIEHANDLER_PERMISSION")
#undef GET_COOKIEHANDLER_PERMISSION
#pragma push_macro("GET_PD_PERMISSION")
#undef GET_PD_PERMISSION
#pragma push_macro("GET_POLICY_PERMISSION")
#undef GET_POLICY_PERMISSION
#pragma push_macro("GET_PROXYSELECTOR_PERMISSION")
#undef GET_PROXYSELECTOR_PERMISSION
#pragma push_macro("GET_RESPONSECACHE_PERMISSION")
#undef GET_RESPONSECACHE_PERMISSION
#pragma push_macro("GET_STACK_TRACE_PERMISSION")
#undef GET_STACK_TRACE_PERMISSION
#pragma push_macro("LOCAL_LISTEN_PERMISSION")
#undef LOCAL_LISTEN_PERMISSION
#pragma push_macro("MODIFY_THREADGROUP_PERMISSION")
#undef MODIFY_THREADGROUP_PERMISSION
#pragma push_macro("MODIFY_THREAD_PERMISSION")
#undef MODIFY_THREAD_PERMISSION
#pragma push_macro("PROPERTY_READ_ACTION")
#undef PROPERTY_READ_ACTION
#pragma push_macro("PROPERTY_RW_ACTION")
#undef PROPERTY_RW_ACTION
#pragma push_macro("PROPERTY_WRITE_ACTION")
#undef PROPERTY_WRITE_ACTION
#pragma push_macro("PROVIDER_VER")
#undef PROVIDER_VER
#pragma push_macro("REFLECTION_FACTORY_ACCESS_PERMISSION")
#undef REFLECTION_FACTORY_ACCESS_PERMISSION
#pragma push_macro("SET_COOKIEHANDLER_PERMISSION")
#undef SET_COOKIEHANDLER_PERMISSION
#pragma push_macro("SET_PROXYSELECTOR_PERMISSION")
#undef SET_PROXYSELECTOR_PERMISSION
#pragma push_macro("SET_RESPONSECACHE_PERMISSION")
#undef SET_RESPONSECACHE_PERMISSION
#pragma push_macro("SET_SOCKETIMPL_PERMISSION")
#undef SET_SOCKETIMPL_PERMISSION
#pragma push_macro("SOCKET_ACCEPT_ACTION")
#undef SOCKET_ACCEPT_ACTION
#pragma push_macro("SOCKET_CONNECT_ACCEPT_ACTION")
#undef SOCKET_CONNECT_ACCEPT_ACTION
#pragma push_macro("SOCKET_CONNECT_ACTION")
#undef SOCKET_CONNECT_ACTION
#pragma push_macro("SOCKET_LISTEN_ACTION")
#undef SOCKET_LISTEN_ACTION
#pragma push_macro("SOCKET_RESOLVE_ACTION")
#undef SOCKET_RESOLVE_ACTION
#pragma push_macro("SPECIFY_HANDLER_PERMISSION")
#undef SPECIFY_HANDLER_PERMISSION
#pragma push_macro("STOP_THREAD_PERMISSION")
#undef STOP_THREAD_PERMISSION
#pragma push_macro("SUBCLASS_IMPLEMENTATION_PERMISSION")
#undef SUBCLASS_IMPLEMENTATION_PERMISSION

namespace java {
	namespace lang {
		class RuntimePermission;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class ReflectPermission;
		}
	}
}
namespace java {
	namespace net {
		class NetPermission;
		class SocketPermission;
	}
}
namespace java {
	namespace security {
		class AllPermission;
		class SecurityPermission;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import SecurityConstants : public ::java::lang::Object {
	$class(SecurityConstants, 0, ::java::lang::Object)
public:
	SecurityConstants();
	void init$();
	static $String* FILE_DELETE_ACTION;
	static $String* FILE_EXECUTE_ACTION;
	static $String* FILE_READ_ACTION;
	static $String* FILE_WRITE_ACTION;
	static $String* FILE_READLINK_ACTION;
	static $String* SOCKET_RESOLVE_ACTION;
	static $String* SOCKET_CONNECT_ACTION;
	static $String* SOCKET_LISTEN_ACTION;
	static $String* SOCKET_ACCEPT_ACTION;
	static $String* SOCKET_CONNECT_ACCEPT_ACTION;
	static $String* PROPERTY_RW_ACTION;
	static $String* PROPERTY_READ_ACTION;
	static $String* PROPERTY_WRITE_ACTION;
	static ::java::security::AllPermission* ALL_PERMISSION;
	static ::java::net::NetPermission* SPECIFY_HANDLER_PERMISSION;
	static ::java::net::NetPermission* SET_PROXYSELECTOR_PERMISSION;
	static ::java::net::NetPermission* GET_PROXYSELECTOR_PERMISSION;
	static ::java::net::NetPermission* SET_COOKIEHANDLER_PERMISSION;
	static ::java::net::NetPermission* GET_COOKIEHANDLER_PERMISSION;
	static ::java::net::NetPermission* SET_RESPONSECACHE_PERMISSION;
	static ::java::net::NetPermission* GET_RESPONSECACHE_PERMISSION;
	static ::java::net::NetPermission* SET_SOCKETIMPL_PERMISSION;
	static ::java::lang::RuntimePermission* CREATE_CLASSLOADER_PERMISSION;
	static ::java::lang::RuntimePermission* CHECK_MEMBER_ACCESS_PERMISSION;
	static ::java::lang::RuntimePermission* MODIFY_THREAD_PERMISSION;
	static ::java::lang::RuntimePermission* MODIFY_THREADGROUP_PERMISSION;
	static ::java::lang::RuntimePermission* GET_PD_PERMISSION;
	static ::java::lang::RuntimePermission* GET_CLASSLOADER_PERMISSION;
	static ::java::lang::RuntimePermission* STOP_THREAD_PERMISSION;
	static ::java::lang::RuntimePermission* GET_STACK_TRACE_PERMISSION;
	static ::java::lang::RuntimePermission* SUBCLASS_IMPLEMENTATION_PERMISSION;
	static ::java::security::SecurityPermission* CREATE_ACC_PERMISSION;
	static ::java::security::SecurityPermission* GET_COMBINER_PERMISSION;
	static ::java::security::SecurityPermission* GET_POLICY_PERMISSION;
	static ::java::net::SocketPermission* LOCAL_LISTEN_PERMISSION;
	static $String* PROVIDER_VER;
	static ::java::lang::reflect::ReflectPermission* ACCESS_PERMISSION;
	static ::java::lang::RuntimePermission* REFLECTION_FACTORY_ACCESS_PERMISSION;
};

		} // util
	} // security
} // sun

#pragma pop_macro("ACCESS_PERMISSION")
#pragma pop_macro("ALL_PERMISSION")
#pragma pop_macro("CHECK_MEMBER_ACCESS_PERMISSION")
#pragma pop_macro("CREATE_ACC_PERMISSION")
#pragma pop_macro("CREATE_CLASSLOADER_PERMISSION")
#pragma pop_macro("FILE_DELETE_ACTION")
#pragma pop_macro("FILE_EXECUTE_ACTION")
#pragma pop_macro("FILE_READLINK_ACTION")
#pragma pop_macro("FILE_READ_ACTION")
#pragma pop_macro("FILE_WRITE_ACTION")
#pragma pop_macro("GET_CLASSLOADER_PERMISSION")
#pragma pop_macro("GET_COMBINER_PERMISSION")
#pragma pop_macro("GET_COOKIEHANDLER_PERMISSION")
#pragma pop_macro("GET_PD_PERMISSION")
#pragma pop_macro("GET_POLICY_PERMISSION")
#pragma pop_macro("GET_PROXYSELECTOR_PERMISSION")
#pragma pop_macro("GET_RESPONSECACHE_PERMISSION")
#pragma pop_macro("GET_STACK_TRACE_PERMISSION")
#pragma pop_macro("LOCAL_LISTEN_PERMISSION")
#pragma pop_macro("MODIFY_THREADGROUP_PERMISSION")
#pragma pop_macro("MODIFY_THREAD_PERMISSION")
#pragma pop_macro("PROPERTY_READ_ACTION")
#pragma pop_macro("PROPERTY_RW_ACTION")
#pragma pop_macro("PROPERTY_WRITE_ACTION")
#pragma pop_macro("PROVIDER_VER")
#pragma pop_macro("REFLECTION_FACTORY_ACCESS_PERMISSION")
#pragma pop_macro("SET_COOKIEHANDLER_PERMISSION")
#pragma pop_macro("SET_PROXYSELECTOR_PERMISSION")
#pragma pop_macro("SET_RESPONSECACHE_PERMISSION")
#pragma pop_macro("SET_SOCKETIMPL_PERMISSION")
#pragma pop_macro("SOCKET_ACCEPT_ACTION")
#pragma pop_macro("SOCKET_CONNECT_ACCEPT_ACTION")
#pragma pop_macro("SOCKET_CONNECT_ACTION")
#pragma pop_macro("SOCKET_LISTEN_ACTION")
#pragma pop_macro("SOCKET_RESOLVE_ACTION")
#pragma pop_macro("SPECIFY_HANDLER_PERMISSION")
#pragma pop_macro("STOP_THREAD_PERMISSION")
#pragma pop_macro("SUBCLASS_IMPLEMENTATION_PERMISSION")

#endif // _sun_security_util_SecurityConstants_h_