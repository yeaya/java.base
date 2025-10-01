#ifndef _jdk_internal_jrtfs_JrtFileSystemProvider$JrtFsLoader_h_
#define _jdk_internal_jrtfs_JrtFileSystemProvider$JrtFsLoader_h_
//$ class jdk.internal.jrtfs.JrtFileSystemProvider$JrtFsLoader
//$ extends java.net.URLClassLoader

#include <java/lang/Array.h>
#include <java/net/URLClassLoader.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtFileSystemProvider$JrtFsLoader : public ::java::net::URLClassLoader {
	$class(JrtFileSystemProvider$JrtFsLoader, $NO_CLASS_INIT, ::java::net::URLClassLoader)
public:
	JrtFileSystemProvider$JrtFsLoader();
	using ::java::net::URLClassLoader::findClass;
	using ::java::net::URLClassLoader::definePackage;
	using ::java::net::URLClassLoader::findResource;
	using ::java::net::URLClassLoader::defineClass;
	void init$($Array<::java::net::URL>* urls);
	using ::java::net::URLClassLoader::loadClass;
	virtual $Class* loadClass($String* cn, bool resolve) override;
};

		} // jrtfs
	} // internal
} // jdk

#endif // _jdk_internal_jrtfs_JrtFileSystemProvider$JrtFsLoader_h_