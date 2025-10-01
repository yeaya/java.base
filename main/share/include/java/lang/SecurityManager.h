#ifndef _java_lang_SecurityManager_h_
#define _java_lang_SecurityManager_h_
//$ class java.lang.SecurityManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace lang {
		class ModuleLayer;
		class Thread;
		class ThreadGroup;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleDescriptor$Exports;
			class ModuleDescriptor$Opens;
		}
	}
}
namespace java {
	namespace net {
		class InetAddress;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace java {
	namespace lang {

class $import SecurityManager : public ::java::lang::Object {
	$class(SecurityManager, 0, ::java::lang::Object)
public:
	SecurityManager();
	void init$();
	static void addNonExportedPackages(::java::lang::ModuleLayer* layer);
	virtual void checkAccept($String* host, int32_t port);
	virtual void checkAccess($Thread* t);
	virtual void checkAccess(::java::lang::ThreadGroup* g);
	virtual void checkConnect($String* host, int32_t port);
	virtual void checkConnect($String* host, int32_t port, Object$* context);
	virtual void checkCreateClassLoader();
	virtual void checkDelete($String* file);
	virtual void checkExec($String* cmd);
	virtual void checkExit(int32_t status);
	virtual void checkLink($String* lib);
	virtual void checkListen(int32_t port);
	virtual void checkMulticast(::java::net::InetAddress* maddr);
	virtual void checkMulticast(::java::net::InetAddress* maddr, int8_t ttl);
	virtual void checkPackageAccess($String* pkg);
	virtual void checkPackageDefinition($String* pkg);
	virtual void checkPermission(::java::security::Permission* perm);
	virtual void checkPermission(::java::security::Permission* perm, Object$* context);
	virtual void checkPrintJobAccess();
	virtual void checkPropertiesAccess();
	virtual void checkPropertyAccess($String* key);
	virtual void checkRead(::java::io::FileDescriptor* fd);
	virtual void checkRead($String* file);
	virtual void checkRead($String* file, Object$* context);
	virtual void checkSecurityAccess($String* target);
	virtual void checkSetFactory();
	virtual void checkWrite(::java::io::FileDescriptor* fd);
	virtual void checkWrite($String* file);
	virtual $ClassArray* getClassContext();
	static $StringArray* getPackages($String* p);
	static ::java::lang::ThreadGroup* getRootGroup();
	virtual $Object* getSecurityContext();
	virtual ::java::lang::ThreadGroup* getThreadGroup();
	static void invalidatePackageAccessCache();
	static bool lambda$addNonExportedPackages$0(::java::util::Set* bootModules, ::java::util::Set* platformModules, ::java::lang::module::ModuleDescriptor* md);
	static void lambda$addNonExportedPackages$1($String* pn);
	static bool lambda$nonExportedPkgs$2(::java::lang::module::ModuleDescriptor$Exports* p);
	static bool lambda$nonExportedPkgs$3(::java::lang::module::ModuleDescriptor$Opens* p);
	static ::java::util::Set* nonExportedPkgs(::java::lang::module::ModuleDescriptor* md);
	bool initialized = false;
	static ::java::lang::ThreadGroup* rootGroup;
	static bool packageAccessValid;
	static $StringArray* packageAccess;
	static $Object* packageAccessLock;
	static bool packageDefinitionValid;
	static $StringArray* packageDefinition;
	static $Object* packageDefinitionLock;
	static ::java::util::Map* nonExportedPkgs$;
};

	} // lang
} // java

#endif // _java_lang_SecurityManager_h_