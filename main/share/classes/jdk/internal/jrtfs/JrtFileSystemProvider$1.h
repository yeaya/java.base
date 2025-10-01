#ifndef _jdk_internal_jrtfs_JrtFileSystemProvider$1_h_
#define _jdk_internal_jrtfs_JrtFileSystemProvider$1_h_
//$ class jdk.internal.jrtfs.JrtFileSystemProvider$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileSystemProvider$1 : public ::java::security::PrivilegedAction {
	$class(JrtFileSystemProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JrtFileSystemProvider$1();
	void init$($Array<::java::net::URL>* val$urls);
	virtual $Object* run() override;
	$Array<::java::net::URL>* val$urls = nullptr;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileSystemProvider$1_h_