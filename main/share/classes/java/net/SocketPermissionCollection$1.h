#ifndef _java_net_SocketPermissionCollection$1_h_
#define _java_net_SocketPermissionCollection$1_h_
//$ class java.net.SocketPermissionCollection$1
//$ extends java.util.function.BiFunction

#include <java/util/function/BiFunction.h>

namespace java {
	namespace net {
		class SocketPermission;
		class SocketPermissionCollection;
	}
}

namespace java {
	namespace net {

class SocketPermissionCollection$1 : public ::java::util::function::BiFunction {
	$class(SocketPermissionCollection$1, $NO_CLASS_INIT, ::java::util::function::BiFunction)
public:
	SocketPermissionCollection$1();
	void init$(::java::net::SocketPermissionCollection* this$0, ::java::net::SocketPermission* val$sp);
	virtual ::java::net::SocketPermission* apply(::java::net::SocketPermission* existingVal, ::java::net::SocketPermission* newVal);
	virtual $Object* apply(Object$* existingVal, Object$* newVal) override;
	::java::net::SocketPermissionCollection* this$0 = nullptr;
	::java::net::SocketPermission* val$sp = nullptr;
};

	} // net
} // java

#endif // _java_net_SocketPermissionCollection$1_h_